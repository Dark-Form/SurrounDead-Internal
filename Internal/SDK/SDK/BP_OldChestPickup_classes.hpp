﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OldChestPickup

#include "Basic.hpp"

#include "BP_BuildablePickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OldChestPickup.BP_OldChestPickup_C
// 0x0000 (0x0318 - 0x0318)
class ABP_OldChestPickup_C final : public ABP_BuildablePickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OldChestPickup_C">();
	}
	static class ABP_OldChestPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OldChestPickup_C>();
	}
};
static_assert(alignof(ABP_OldChestPickup_C) == 0x000008, "Wrong alignment on ABP_OldChestPickup_C");
static_assert(sizeof(ABP_OldChestPickup_C) == 0x000318, "Wrong size on ABP_OldChestPickup_C");

}

