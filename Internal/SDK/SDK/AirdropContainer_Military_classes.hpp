﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AirdropContainer_Military

#include "Basic.hpp"

#include "Master_AirdropContainer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AirdropContainer_Military.AirdropContainer_Military_C
// 0x0000 (0x0348 - 0x0348)
class AAirdropContainer_Military_C final : public AMaster_AirdropContainer_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AirdropContainer_Military_C">();
	}
	static class AAirdropContainer_Military_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAirdropContainer_Military_C>();
	}
};
static_assert(alignof(AAirdropContainer_Military_C) == 0x000008, "Wrong alignment on AAirdropContainer_Military_C");
static_assert(sizeof(AAirdropContainer_Military_C) == 0x000348, "Wrong size on AAirdropContainer_Military_C");

}

