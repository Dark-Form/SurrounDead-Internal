﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One_ContainersListUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass 1_ContainersListUI.1_ContainersListUI_C
// 0x0020 (0x02E0 - 0x02C0)
class UOne_ContainersListUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Clicked;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void CustomEvent();
	void ExecuteUbergraph_1_ContainersListUI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"1_ContainersListUI_C">();
	}
	static class UOne_ContainersListUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOne_ContainersListUI_C>();
	}
};
static_assert(alignof(UOne_ContainersListUI_C) == 0x000008, "Wrong alignment on UOne_ContainersListUI_C");
static_assert(sizeof(UOne_ContainersListUI_C) == 0x0002E0, "Wrong size on UOne_ContainersListUI_C");
static_assert(offsetof(UOne_ContainersListUI_C, UberGraphFrame) == 0x0002C0, "Member 'UOne_ContainersListUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOne_ContainersListUI_C, VerticalBox) == 0x0002C8, "Member 'UOne_ContainersListUI_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UOne_ContainersListUI_C, Clicked) == 0x0002D0, "Member 'UOne_ContainersListUI_C::Clicked' has a wrong offset!");

}

