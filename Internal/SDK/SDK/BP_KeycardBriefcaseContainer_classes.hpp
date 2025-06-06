﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KeycardBriefcaseContainer

#include "Basic.hpp"

#include "BP_LootContainer_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KeycardBriefcaseContainer.BP_KeycardBriefcaseContainer_C
// 0x0010 (0x0450 - 0x0440)
class ABP_KeycardBriefcaseContainer_C final : public ABP_LootContainer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_KeycardBriefcaseContainer_C;     // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Event1();
	void Event2();
	void ExecuteUbergraph_BP_KeycardBriefcaseContainer(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KeycardBriefcaseContainer_C">();
	}
	static class ABP_KeycardBriefcaseContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KeycardBriefcaseContainer_C>();
	}
};
static_assert(alignof(ABP_KeycardBriefcaseContainer_C) == 0x000010, "Wrong alignment on ABP_KeycardBriefcaseContainer_C");
static_assert(sizeof(ABP_KeycardBriefcaseContainer_C) == 0x000450, "Wrong size on ABP_KeycardBriefcaseContainer_C");
static_assert(offsetof(ABP_KeycardBriefcaseContainer_C, UberGraphFrame_BP_KeycardBriefcaseContainer_C) == 0x000440, "Member 'ABP_KeycardBriefcaseContainer_C::UberGraphFrame_BP_KeycardBriefcaseContainer_C' has a wrong offset!");

}

