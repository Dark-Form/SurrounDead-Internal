﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_AI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BFL_AI.BFL_AI_C.SpawnFloatingDamageText
// 0x0038 (0x0038 - 0x0000)
struct BFL_AI_C_SpawnFloatingDamageText final
{
public:
	double                                        Damage;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Colour;                                            // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBoolCVar_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFloatingDamageNumbersUI_C*             CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BFL_AI_C_SpawnFloatingDamageText) == 0x000008, "Wrong alignment on BFL_AI_C_SpawnFloatingDamageText");
static_assert(sizeof(BFL_AI_C_SpawnFloatingDamageText) == 0x000038, "Wrong size on BFL_AI_C_SpawnFloatingDamageText");
static_assert(offsetof(BFL_AI_C_SpawnFloatingDamageText, Damage) == 0x000000, "Member 'BFL_AI_C_SpawnFloatingDamageText::Damage' has a wrong offset!");
static_assert(offsetof(BFL_AI_C_SpawnFloatingDamageText, Colour) == 0x000008, "Member 'BFL_AI_C_SpawnFloatingDamageText::Colour' has a wrong offset!");
static_assert(offsetof(BFL_AI_C_SpawnFloatingDamageText, __WorldContext) == 0x000018, "Member 'BFL_AI_C_SpawnFloatingDamageText::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_AI_C_SpawnFloatingDamageText, CallFunc_GetBoolCVar_ReturnValue) == 0x000020, "Member 'BFL_AI_C_SpawnFloatingDamageText::CallFunc_GetBoolCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_AI_C_SpawnFloatingDamageText, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BFL_AI_C_SpawnFloatingDamageText::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_AI_C_SpawnFloatingDamageText, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000030, "Member 'BFL_AI_C_SpawnFloatingDamageText::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");

}

