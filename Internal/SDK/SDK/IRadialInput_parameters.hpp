﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IRadialInput

#include "Basic.hpp"

#include "EJoystickTypes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function IRadialInput.IRadialInput_C.GetJoystickDirection
// 0x0018 (0x0018 - 0x0000)
struct IRadialInput_C_GetJoystickDirection final
{
public:
	EJoystickTypes                                Stick;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              StickInput;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IRadialInput_C_GetJoystickDirection) == 0x000008, "Wrong alignment on IRadialInput_C_GetJoystickDirection");
static_assert(sizeof(IRadialInput_C_GetJoystickDirection) == 0x000018, "Wrong size on IRadialInput_C_GetJoystickDirection");
static_assert(offsetof(IRadialInput_C_GetJoystickDirection, Stick) == 0x000000, "Member 'IRadialInput_C_GetJoystickDirection::Stick' has a wrong offset!");
static_assert(offsetof(IRadialInput_C_GetJoystickDirection, StickInput) == 0x000008, "Member 'IRadialInput_C_GetJoystickDirection::StickInput' has a wrong offset!");

}

