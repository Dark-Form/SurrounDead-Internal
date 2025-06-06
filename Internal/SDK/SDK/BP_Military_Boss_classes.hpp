﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Military_Boss

#include "Basic.hpp"

#include "BP_MasterMilitary_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Military_Boss.BP_Military_Boss_C
// 0x0000 (0x0A50 - 0x0A50)
class ABP_Military_Boss_C final : public ABP_MasterMilitary_C
{
public:
	void AIHealthBarInfo(bool* Visible_, class FString* Param_Name_0, bool* Boss__0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Military_Boss_C">();
	}
	static class ABP_Military_Boss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Military_Boss_C>();
	}
};
static_assert(alignof(ABP_Military_Boss_C) == 0x000010, "Wrong alignment on ABP_Military_Boss_C");
static_assert(sizeof(ABP_Military_Boss_C) == 0x000A50, "Wrong size on ABP_Military_Boss_C");

}

