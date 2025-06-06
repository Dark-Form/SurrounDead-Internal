﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIMarkerUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AIMarkerUI.AIMarkerUI_C
// 0x0048 (0x0308 - 0x02C0)
class UAIMarkerUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 MarkerImg;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              Visible;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              Hidden;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             Texture;                                           // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_AIMarkerUI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIMarkerUI_C">();
	}
	static class UAIMarkerUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIMarkerUI_C>();
	}
};
static_assert(alignof(UAIMarkerUI_C) == 0x000008, "Wrong alignment on UAIMarkerUI_C");
static_assert(sizeof(UAIMarkerUI_C) == 0x000308, "Wrong size on UAIMarkerUI_C");
static_assert(offsetof(UAIMarkerUI_C, UberGraphFrame) == 0x0002C0, "Member 'UAIMarkerUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIMarkerUI_C, MarkerImg) == 0x0002C8, "Member 'UAIMarkerUI_C::MarkerImg' has a wrong offset!");
static_assert(offsetof(UAIMarkerUI_C, Visible) == 0x0002D0, "Member 'UAIMarkerUI_C::Visible' has a wrong offset!");
static_assert(offsetof(UAIMarkerUI_C, Hidden) == 0x0002E0, "Member 'UAIMarkerUI_C::Hidden' has a wrong offset!");
static_assert(offsetof(UAIMarkerUI_C, Texture) == 0x0002F0, "Member 'UAIMarkerUI_C::Texture' has a wrong offset!");
static_assert(offsetof(UAIMarkerUI_C, Color) == 0x0002F8, "Member 'UAIMarkerUI_C::Color' has a wrong offset!");

}

