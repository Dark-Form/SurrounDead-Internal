﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DaysSurvivedWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DaysSurvivedWidget.DaysSurvivedWidget_C
// 0x0038 (0x02F8 - 0x02C0)
class UDaysSurvivedWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 FullText;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 DisplayText;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Event_Survived();
	void ExecuteUbergraph_DaysSurvivedWidget(int32 EntryPoint);
	void FadeOutFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DaysSurvivedWidget_C">();
	}
	static class UDaysSurvivedWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaysSurvivedWidget_C>();
	}
};
static_assert(alignof(UDaysSurvivedWidget_C) == 0x000008, "Wrong alignment on UDaysSurvivedWidget_C");
static_assert(sizeof(UDaysSurvivedWidget_C) == 0x0002F8, "Wrong size on UDaysSurvivedWidget_C");
static_assert(offsetof(UDaysSurvivedWidget_C, UberGraphFrame) == 0x0002C0, "Member 'UDaysSurvivedWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDaysSurvivedWidget_C, FadeOut) == 0x0002C8, "Member 'UDaysSurvivedWidget_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UDaysSurvivedWidget_C, Name_0) == 0x0002D0, "Member 'UDaysSurvivedWidget_C::Name_0' has a wrong offset!");
static_assert(offsetof(UDaysSurvivedWidget_C, FullText) == 0x0002D8, "Member 'UDaysSurvivedWidget_C::FullText' has a wrong offset!");
static_assert(offsetof(UDaysSurvivedWidget_C, DisplayText) == 0x0002E8, "Member 'UDaysSurvivedWidget_C::DisplayText' has a wrong offset!");

}

