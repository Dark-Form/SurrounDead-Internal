﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LechiePickup

#include "Basic.hpp"

#include "BP_FirearmPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LechiePickup.BP_LechiePickup_C
// 0x0000 (0x0410 - 0x0410)
class ABP_LechiePickup_C final : public ABP_FirearmPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LechiePickup_C">();
	}
	static class ABP_LechiePickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LechiePickup_C>();
	}
};
static_assert(alignof(ABP_LechiePickup_C) == 0x000008, "Wrong alignment on ABP_LechiePickup_C");
static_assert(sizeof(ABP_LechiePickup_C) == 0x000410, "Wrong size on ABP_LechiePickup_C");

}

