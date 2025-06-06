﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_Crusher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MainSpecialContainer_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SC_Crusher.SC_Crusher_C
// 0x0028 (0x0328 - 0x0300)
class USC_Crusher_C final : public UBP_MainSpecialContainer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SC_Crusher_C;                       // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                        ChamberContainer;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        MagContainer;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        SightContainer;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJSIContainer_C*                        TacticalContainer;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SC_Crusher(int32 EntryPoint);
	void PreInitSpecialContainer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SC_Crusher_C">();
	}
	static class USC_Crusher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USC_Crusher_C>();
	}
};
static_assert(alignof(USC_Crusher_C) == 0x000008, "Wrong alignment on USC_Crusher_C");
static_assert(sizeof(USC_Crusher_C) == 0x000328, "Wrong size on USC_Crusher_C");
static_assert(offsetof(USC_Crusher_C, UberGraphFrame_SC_Crusher_C) == 0x000300, "Member 'USC_Crusher_C::UberGraphFrame_SC_Crusher_C' has a wrong offset!");
static_assert(offsetof(USC_Crusher_C, ChamberContainer) == 0x000308, "Member 'USC_Crusher_C::ChamberContainer' has a wrong offset!");
static_assert(offsetof(USC_Crusher_C, MagContainer) == 0x000310, "Member 'USC_Crusher_C::MagContainer' has a wrong offset!");
static_assert(offsetof(USC_Crusher_C, SightContainer) == 0x000318, "Member 'USC_Crusher_C::SightContainer' has a wrong offset!");
static_assert(offsetof(USC_Crusher_C, TacticalContainer) == 0x000320, "Member 'USC_Crusher_C::TacticalContainer' has a wrong offset!");

}

