﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FishingBookPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FishingBookPickup.BP_FishingBookPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_FishingBookPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FishingBookPickup_C">();
	}
	static class ABP_FishingBookPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FishingBookPickup_C>();
	}
};
static_assert(alignof(ABP_FishingBookPickup_C) == 0x000008, "Wrong alignment on ABP_FishingBookPickup_C");
static_assert(sizeof(ABP_FishingBookPickup_C) == 0x000310, "Wrong size on ABP_FishingBookPickup_C");

}

