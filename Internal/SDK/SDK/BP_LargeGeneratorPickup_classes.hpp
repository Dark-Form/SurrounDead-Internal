﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LargeGeneratorPickup

#include "Basic.hpp"

#include "BP_BuildablePickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LargeGeneratorPickup.BP_LargeGeneratorPickup_C
// 0x0000 (0x0318 - 0x0318)
class ABP_LargeGeneratorPickup_C final : public ABP_BuildablePickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LargeGeneratorPickup_C">();
	}
	static class ABP_LargeGeneratorPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LargeGeneratorPickup_C>();
	}
};
static_assert(alignof(ABP_LargeGeneratorPickup_C) == 0x000008, "Wrong alignment on ABP_LargeGeneratorPickup_C");
static_assert(sizeof(ABP_LargeGeneratorPickup_C) == 0x000318, "Wrong size on ABP_LargeGeneratorPickup_C");

}

