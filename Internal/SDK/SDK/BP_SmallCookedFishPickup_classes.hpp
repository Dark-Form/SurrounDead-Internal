﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SmallCookedFishPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SmallCookedFishPickup.BP_SmallCookedFishPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_SmallCookedFishPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SmallCookedFishPickup_C">();
	}
	static class ABP_SmallCookedFishPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SmallCookedFishPickup_C>();
	}
};
static_assert(alignof(ABP_SmallCookedFishPickup_C) == 0x000008, "Wrong alignment on ABP_SmallCookedFishPickup_C");
static_assert(sizeof(ABP_SmallCookedFishPickup_C) == 0x000310, "Wrong size on ABP_SmallCookedFishPickup_C");

}

