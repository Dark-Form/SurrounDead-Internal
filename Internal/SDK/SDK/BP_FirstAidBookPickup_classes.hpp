﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FirstAidBookPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FirstAidBookPickup.BP_FirstAidBookPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_FirstAidBookPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FirstAidBookPickup_C">();
	}
	static class ABP_FirstAidBookPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FirstAidBookPickup_C>();
	}
};
static_assert(alignof(ABP_FirstAidBookPickup_C) == 0x000008, "Wrong alignment on ABP_FirstAidBookPickup_C");
static_assert(sizeof(ABP_FirstAidBookPickup_C) == 0x000310, "Wrong size on ABP_FirstAidBookPickup_C");

}

