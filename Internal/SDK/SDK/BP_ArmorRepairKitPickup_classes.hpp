﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArmorRepairKitPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ArmorRepairKitPickup.BP_ArmorRepairKitPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_ArmorRepairKitPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArmorRepairKitPickup_C">();
	}
	static class ABP_ArmorRepairKitPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ArmorRepairKitPickup_C>();
	}
};
static_assert(alignof(ABP_ArmorRepairKitPickup_C) == 0x000008, "Wrong alignment on ABP_ArmorRepairKitPickup_C");
static_assert(sizeof(ABP_ArmorRepairKitPickup_C) == 0x000310, "Wrong size on ABP_ArmorRepairKitPickup_C");

}

