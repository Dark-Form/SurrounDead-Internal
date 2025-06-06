﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NavModifierPlane

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_NavModifierPlane.BP_NavModifierPlane_C.UserConstructionScript
// 0x0070 (0x0070 - 0x0000)
struct BP_NavModifierPlane_C_UserConstructionScript final
{
public:
	struct FTransform                             Temp_struct_Variable;                              // 0x0000(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNavModifierComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NavModifierPlane_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_NavModifierPlane_C_UserConstructionScript");
static_assert(sizeof(BP_NavModifierPlane_C_UserConstructionScript) == 0x000070, "Wrong size on BP_NavModifierPlane_C_UserConstructionScript");
static_assert(offsetof(BP_NavModifierPlane_C_UserConstructionScript, Temp_struct_Variable) == 0x000000, "Member 'BP_NavModifierPlane_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_NavModifierPlane_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000060, "Member 'BP_NavModifierPlane_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

}

