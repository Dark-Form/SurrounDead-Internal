﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIManagerInterface

#include "Basic.hpp"

#include "S_AIOptimization_structs.hpp"


namespace SDK::Params
{

// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager
// 0x0008 (0x0008 - 0x0000)
struct BP_AIManagerInterface_C_Return_AI_Manager final
{
public:
	class ABP_AIManager_C*                        AI_Manager;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIManagerInterface_C_Return_AI_Manager) == 0x000008, "Wrong alignment on BP_AIManagerInterface_C_Return_AI_Manager");
static_assert(sizeof(BP_AIManagerInterface_C_Return_AI_Manager) == 0x000008, "Wrong size on BP_AIManagerInterface_C_Return_AI_Manager");
static_assert(offsetof(BP_AIManagerInterface_C_Return_AI_Manager, AI_Manager) == 0x000000, "Member 'BP_AIManagerInterface_C_Return_AI_Manager::AI_Manager' has a wrong offset!");

// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager Settings
// 0x000C (0x000C - 0x0000)
struct BP_AIManagerInterface_C_Return_AI_Manager_Settings final
{
public:
	struct FS_AIOptimization                      AI_Settings;                                       // 0x0000(0x000C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIManagerInterface_C_Return_AI_Manager_Settings) == 0x000004, "Wrong alignment on BP_AIManagerInterface_C_Return_AI_Manager_Settings");
static_assert(sizeof(BP_AIManagerInterface_C_Return_AI_Manager_Settings) == 0x00000C, "Wrong size on BP_AIManagerInterface_C_Return_AI_Manager_Settings");
static_assert(offsetof(BP_AIManagerInterface_C_Return_AI_Manager_Settings, AI_Settings) == 0x000000, "Member 'BP_AIManagerInterface_C_Return_AI_Manager_Settings::AI_Settings' has a wrong offset!");

}

