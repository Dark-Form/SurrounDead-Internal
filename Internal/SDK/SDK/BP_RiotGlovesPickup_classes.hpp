﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RiotGlovesPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RiotGlovesPickup.BP_RiotGlovesPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_RiotGlovesPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RiotGlovesPickup_C">();
	}
	static class ABP_RiotGlovesPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RiotGlovesPickup_C>();
	}
};
static_assert(alignof(ABP_RiotGlovesPickup_C) == 0x000008, "Wrong alignment on ABP_RiotGlovesPickup_C");
static_assert(sizeof(ABP_RiotGlovesPickup_C) == 0x000310, "Wrong size on ABP_RiotGlovesPickup_C");

}

