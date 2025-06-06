﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InfestationManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InfestationManager.BP_InfestationManager_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_InfestationManager_C final : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_PrimaryInfestation_C*>       PrimaryInfestations;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void CheckAllPrimaryDestroyed(bool* All_);
	void ExecuteUbergraph_BP_InfestationManager(int32 EntryPoint);
	void OnCompleted_B3F7F6984C752DC85F8BB59455E585B9();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InfestationManager_C">();
	}
	static class ABP_InfestationManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InfestationManager_C>();
	}
};
static_assert(alignof(ABP_InfestationManager_C) == 0x000008, "Wrong alignment on ABP_InfestationManager_C");
static_assert(sizeof(ABP_InfestationManager_C) == 0x0002B8, "Wrong size on ABP_InfestationManager_C");
static_assert(offsetof(ABP_InfestationManager_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_InfestationManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InfestationManager_C, PrimaryInfestations) == 0x0002A8, "Member 'ABP_InfestationManager_C::PrimaryInfestations' has a wrong offset!");

}

