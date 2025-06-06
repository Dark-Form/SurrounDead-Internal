﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Human

#include "Basic.hpp"

#include "BP_AI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Human.BP_Human_C
// 0x0000 (0x0690 - 0x0690)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_Human_C : public ABP_AI_C
{
public:
	bool                                          IsBaseActorDead_;                                  // 0x068A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Human_C">();
	}
	static class ABP_Human_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Human_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_Human_C) == 0x000010, "Wrong alignment on ABP_Human_C");
static_assert(sizeof(ABP_Human_C) == 0x000690, "Wrong size on ABP_Human_C");
static_assert(offsetof(ABP_Human_C, IsBaseActorDead_) == 0x00068A, "Member 'ABP_Human_C::IsBaseActorDead_' has a wrong offset!");

}

