﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmptyWaterJugPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EmptyWaterJugPickup.BP_EmptyWaterJugPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_EmptyWaterJugPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EmptyWaterJugPickup_C">();
	}
	static class ABP_EmptyWaterJugPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EmptyWaterJugPickup_C>();
	}
};
static_assert(alignof(ABP_EmptyWaterJugPickup_C) == 0x000008, "Wrong alignment on ABP_EmptyWaterJugPickup_C");
static_assert(sizeof(ABP_EmptyWaterJugPickup_C) == 0x000310, "Wrong size on ABP_EmptyWaterJugPickup_C");

}

