﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SVDMagPickup

#include "Basic.hpp"

#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SVDMagPickup.BP_SVDMagPickup_C
// 0x0000 (0x0310 - 0x0310)
class ABP_SVDMagPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SVDMagPickup_C">();
	}
	static class ABP_SVDMagPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SVDMagPickup_C>();
	}
};
static_assert(alignof(ABP_SVDMagPickup_C) == 0x000008, "Wrong alignment on ABP_SVDMagPickup_C");
static_assert(sizeof(ABP_SVDMagPickup_C) == 0x000310, "Wrong size on ABP_SVDMagPickup_C");

}

