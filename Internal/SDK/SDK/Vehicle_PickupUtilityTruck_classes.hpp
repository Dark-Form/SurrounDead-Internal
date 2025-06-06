﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_PickupUtilityTruck

#include "Basic.hpp"

#include "BP_VehicleMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vehicle_PickupUtilityTruck.Vehicle_PickupUtilityTruck_C
// 0x0000 (0x04D0 - 0x04D0)
class AVehicle_PickupUtilityTruck_C final : public ABP_VehicleMaster_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vehicle_PickupUtilityTruck_C">();
	}
	static class AVehicle_PickupUtilityTruck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVehicle_PickupUtilityTruck_C>();
	}
};
static_assert(alignof(AVehicle_PickupUtilityTruck_C) == 0x000008, "Wrong alignment on AVehicle_PickupUtilityTruck_C");
static_assert(sizeof(AVehicle_PickupUtilityTruck_C) == 0x0004D0, "Wrong size on AVehicle_PickupUtilityTruck_C");

}

