﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractWidgetCivilian

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_InteractWidgetCivilian.BP_InteractWidgetCivilian_C
// 0x0020 (0x02E0 - 0x02C0)
class UBP_InteractWidgetCivilian_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             txt;                                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           DefColor;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetName(const class FText& ActionName, const class FText& ItemName);
	void ExecuteUbergraph_BP_InteractWidgetCivilian(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractWidgetCivilian_C">();
	}
	static class UBP_InteractWidgetCivilian_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractWidgetCivilian_C>();
	}
};
static_assert(alignof(UBP_InteractWidgetCivilian_C) == 0x000008, "Wrong alignment on UBP_InteractWidgetCivilian_C");
static_assert(sizeof(UBP_InteractWidgetCivilian_C) == 0x0002E0, "Wrong size on UBP_InteractWidgetCivilian_C");
static_assert(offsetof(UBP_InteractWidgetCivilian_C, UberGraphFrame) == 0x0002C0, "Member 'UBP_InteractWidgetCivilian_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InteractWidgetCivilian_C, txt) == 0x0002C8, "Member 'UBP_InteractWidgetCivilian_C::txt' has a wrong offset!");
static_assert(offsetof(UBP_InteractWidgetCivilian_C, DefColor) == 0x0002D0, "Member 'UBP_InteractWidgetCivilian_C::DefColor' has a wrong offset!");

}

