﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDW_Lightning_Spawn_Manager

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UDW_Lightning_Spawn_Manager.UDW_Lightning_Spawn_Manager_C.Initialize
// 0x0020 (0x0020 - 0x0000)
struct UDW_Lightning_Spawn_Manager_C_Initialize final
{
public:
	class AUltra_Dynamic_Weather_C*               UDW_0;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lightning_Flash_Period_Period;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UDW_Lightning_Spawn_Manager_C_Initialize) == 0x000008, "Wrong alignment on UDW_Lightning_Spawn_Manager_C_Initialize");
static_assert(sizeof(UDW_Lightning_Spawn_Manager_C_Initialize) == 0x000020, "Wrong size on UDW_Lightning_Spawn_Manager_C_Initialize");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Initialize, UDW_0) == 0x000000, "Member 'UDW_Lightning_Spawn_Manager_C_Initialize::UDW_0' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Initialize, CallFunc_Lightning_Flash_Period_Period) == 0x000008, "Member 'UDW_Lightning_Spawn_Manager_C_Initialize::CallFunc_Lightning_Flash_Period_Period' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Initialize, CallFunc_K2_SetTimer_ReturnValue) == 0x000010, "Member 'UDW_Lightning_Spawn_Manager_C_Initialize::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Initialize, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000018, "Member 'UDW_Lightning_Spawn_Manager_C_Initialize::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

// Function UDW_Lightning_Spawn_Manager.UDW_Lightning_Spawn_Manager_C.Timed Lightning Spawn
// 0x0038 (0x0038 - 0x0000)
struct UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn final
{
public:
	double                                        Current_Period;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lightning_Flash_Period_Period;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRangeFromStream_ReturnValue_1; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Global_Lightning_Internal_Thunder_Lightning_Threshold_ImplicitCast; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Global_Lightning_Internal_Angle_ImplicitCast; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn) == 0x000008, "Wrong alignment on UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn");
static_assert(sizeof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn) == 0x000038, "Wrong size on UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, Current_Period) == 0x000000, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::Current_Period' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_Lightning_Flash_Period_Period) == 0x000008, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_Lightning_Flash_Period_Period' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_K2_SetTimer_ReturnValue) == 0x000010, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_RandomFloatInRangeFromStream_ReturnValue) == 0x000018, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_RandomFloatInRangeFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_RandomFloatInRangeFromStream_ReturnValue_1) == 0x00001C, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_RandomFloatInRangeFromStream_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000020, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_Global_Lightning_Internal_Thunder_Lightning_Threshold_ImplicitCast) == 0x000028, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_Global_Lightning_Internal_Thunder_Lightning_Threshold_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn, CallFunc_Global_Lightning_Internal_Angle_ImplicitCast) == 0x000030, "Member 'UDW_Lightning_Spawn_Manager_C_Timed_Lightning_Spawn::CallFunc_Global_Lightning_Internal_Angle_ImplicitCast' has a wrong offset!");

}

