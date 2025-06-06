﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ButcherKnifePickup

#include "Basic.hpp"

#include "BP_MeleePickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ButcherKnifePickup.BP_ButcherKnifePickup_C
// 0x0000 (0x0328 - 0x0328)
class ABP_ButcherKnifePickup_C final : public ABP_MeleePickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ButcherKnifePickup_C">();
	}
	static class ABP_ButcherKnifePickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ButcherKnifePickup_C>();
	}
};
static_assert(alignof(ABP_ButcherKnifePickup_C) == 0x000008, "Wrong alignment on ABP_ButcherKnifePickup_C");
static_assert(sizeof(ABP_ButcherKnifePickup_C) == 0x000328, "Wrong size on ABP_ButcherKnifePickup_C");

}

