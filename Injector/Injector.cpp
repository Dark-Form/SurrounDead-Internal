#include <Windows.h>
#include <iostream>
#include <string>
#include <TlHelp32.h>

DWORD GetProcessId(const wchar_t* processName) {
    DWORD processId = 0;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (snapshot != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32W processEntry;
        processEntry.dwSize = sizeof(processEntry);

        if (Process32FirstW(snapshot, &processEntry)) {
            do {
                if (_wcsicmp(processEntry.szExeFile, processName) == 0) {
                    processId = processEntry.th32ProcessID;
                    break;
                }
            } while (Process32NextW(snapshot, &processEntry));
        }
        CloseHandle(snapshot);
    }
    return processId;
}

bool InjectDLL(DWORD processId, const wchar_t* dllPath) {
    HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);
    if (!processHandle) {
        std::wcout << L"Failed to open process. Error: " << GetLastError() << std::endl;
        return false;
    }

    size_t dllPathSize = (wcslen(dllPath) + 1) * sizeof(wchar_t);
    LPVOID dllPathAddr = VirtualAllocEx(processHandle, NULL, dllPathSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!dllPathAddr) {
        std::wcout << L"Failed to allocate memory in process. Error: " << GetLastError() << std::endl;
        CloseHandle(processHandle);
        return false;
    }

    if (!WriteProcessMemory(processHandle, dllPathAddr, dllPath, dllPathSize, NULL)) {
        std::wcout << L"Failed to write to process memory. Error: " << GetLastError() << std::endl;
        VirtualFreeEx(processHandle, dllPathAddr, 0, MEM_RELEASE);
        CloseHandle(processHandle);
        return false;
    }

    HMODULE kernel32 = GetModuleHandleW(L"kernel32.dll");
    if (!kernel32) {
        std::wcout << L"Failed to get kernel32.dll handle. Error: " << GetLastError() << std::endl;
        VirtualFreeEx(processHandle, dllPathAddr, 0, MEM_RELEASE);
        CloseHandle(processHandle);
        return false;
    }

    LPTHREAD_START_ROUTINE loadLibraryAddr = (LPTHREAD_START_ROUTINE)GetProcAddress(kernel32, "LoadLibraryW");
    if (!loadLibraryAddr) {
        std::wcout << L"Failed to get LoadLibraryW address. Error: " << GetLastError() << std::endl;
        VirtualFreeEx(processHandle, dllPathAddr, 0, MEM_RELEASE);
        CloseHandle(processHandle);
        return false;
    }

    HANDLE threadHandle = CreateRemoteThread(processHandle, NULL, 0, loadLibraryAddr, dllPathAddr, 0, NULL);
    if (!threadHandle) {
        std::wcout << L"Failed to create remote thread. Error: " << GetLastError() << std::endl;
        VirtualFreeEx(processHandle, dllPathAddr, 0, MEM_RELEASE);
        CloseHandle(processHandle);
        return false;
    }

    WaitForSingleObject(threadHandle, INFINITE);
    VirtualFreeEx(processHandle, dllPathAddr, 0, MEM_RELEASE);
    CloseHandle(threadHandle);
    CloseHandle(processHandle);
    return true;
}

int main() {
    SetConsoleTitle(L"SurrounDead Internal Injector");
    std::wcout << L"Waiting for SurrounDead-Win64-Shipping.exe..." << std::endl;

    DWORD processId = 0;
    while (!processId) {
        processId = GetProcessId(L"SurrounDead-Win64-Shipping.exe");
        Sleep(100);
    }

    std::wcout << L"Found SurrounDead process (PID: " << processId << L")" << std::endl;

    wchar_t dllPath[MAX_PATH];
    GetFullPathNameW(L"internal.dll", MAX_PATH, dllPath, nullptr);

    std::wcout << L"Injecting " << dllPath << L"..." << std::endl;

    if (InjectDLL(processId, dllPath)) {
        std::wcout << L"Injection successful!" << std::endl;
    }
    else {
        std::wcout << L"Injection failed!" << std::endl;
    }

    std::wcout << L"Press any key to exit..." << std::endl;
    std::cin.get();
    return 0;
}