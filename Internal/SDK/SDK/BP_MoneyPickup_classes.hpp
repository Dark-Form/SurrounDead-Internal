﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoneyPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MoneyPickup.BP_MoneyPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_MoneyPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MoneyPickup_C">();
	}
	static class ABP_MoneyPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MoneyPickup_C>();
	}
};
static_assert(alignof(ABP_MoneyPickup_C) == 0x000008, "Wrong alignment on ABP_MoneyPickup_C");
static_assert(sizeof(ABP_MoneyPickup_C) == 0x000310, "Wrong size on ABP_MoneyPickup_C");

}

