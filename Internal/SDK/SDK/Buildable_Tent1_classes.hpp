﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_Tent1

#include "Basic.hpp"

#include "BuildableMaster_Tent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Buildable_Tent1.Buildable_Tent1_C
// 0x0000 (0x0490 - 0x0490)
class ABuildable_Tent1_C final : public ABuildableMaster_Tent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buildable_Tent1_C">();
	}
	static class ABuildable_Tent1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABuildable_Tent1_C>();
	}
};
static_assert(alignof(ABuildable_Tent1_C) == 0x000008, "Wrong alignment on ABuildable_Tent1_C");
static_assert(sizeof(ABuildable_Tent1_C) == 0x000490, "Wrong size on ABuildable_Tent1_C");

}

