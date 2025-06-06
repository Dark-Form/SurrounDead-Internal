﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_NVG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MainSpecialContainer_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SC_NVG.SC_NVG_C
// 0x0010 (0x0310 - 0x0300)
class USC_NVG_C final : public UBP_MainSpecialContainer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SC_NVG_C;                           // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                        NVGContainer;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SC_NVG(int32 EntryPoint);
	void PreInitSpecialContainer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SC_NVG_C">();
	}
	static class USC_NVG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USC_NVG_C>();
	}
};
static_assert(alignof(USC_NVG_C) == 0x000008, "Wrong alignment on USC_NVG_C");
static_assert(sizeof(USC_NVG_C) == 0x000310, "Wrong size on USC_NVG_C");
static_assert(offsetof(USC_NVG_C, UberGraphFrame_SC_NVG_C) == 0x000300, "Member 'USC_NVG_C::UberGraphFrame_SC_NVG_C' has a wrong offset!");
static_assert(offsetof(USC_NVG_C, NVGContainer) == 0x000308, "Member 'USC_NVG_C::NVGContainer' has a wrong offset!");

}

