﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_Truck

#include "Basic.hpp"

#include "BP_VehicleMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Vehicle_Truck.Vehicle_Truck_C
// 0x0000 (0x04D0 - 0x04D0)
class AVehicle_Truck_C final : public ABP_VehicleMaster_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vehicle_Truck_C">();
	}
	static class AVehicle_Truck_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVehicle_Truck_C>();
	}
};
static_assert(alignof(AVehicle_Truck_C) == 0x000008, "Wrong alignment on AVehicle_Truck_C");
static_assert(sizeof(AVehicle_Truck_C) == 0x0004D0, "Wrong size on AVehicle_Truck_C");

}

