﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterPlayerController

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MasterPlayerController.BP_MasterPlayerController_C
// 0x0000 (0x0858 - 0x0858)
class ABP_MasterPlayerController_C : public APlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MasterPlayerController_C">();
	}
	static class ABP_MasterPlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MasterPlayerController_C>();
	}
};
static_assert(alignof(ABP_MasterPlayerController_C) == 0x000008, "Wrong alignment on ABP_MasterPlayerController_C");
static_assert(sizeof(ABP_MasterPlayerController_C) == 0x000858, "Wrong size on ABP_MasterPlayerController_C");

}

