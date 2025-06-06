﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RearSedanWheel

#include "Basic.hpp"

#include "ChaosVehicles_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RearSedanWheel.BP_RearSedanWheel_C
// 0x0000 (0x02E0 - 0x02E0)
class UBP_RearSedanWheel_C final : public UChaosVehicleWheel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RearSedanWheel_C">();
	}
	static class UBP_RearSedanWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RearSedanWheel_C>();
	}
};
static_assert(alignof(UBP_RearSedanWheel_C) == 0x000008, "Wrong alignment on UBP_RearSedanWheel_C");
static_assert(sizeof(UBP_RearSedanWheel_C) == 0x0002E0, "Wrong size on UBP_RearSedanWheel_C");

}

