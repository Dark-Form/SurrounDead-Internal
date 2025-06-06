﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_VehicleTraderUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MainSpecialContainer_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_VehicleTraderUI.W_VehicleTraderUI_C
// 0x0018 (0x0318 - 0x0300)
class UW_VehicleTraderUI_C final : public UBP_MainSpecialContainer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_VehicleTraderUI_C;                // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UJSIContainer_C*                        MainContainer;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Vehicle;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreInitSpecialContainer();
	void GetDataTable_Vehicles(class UPanelWidget* ScrollBox);
	void ExecuteUbergraph_W_VehicleTraderUI(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_VehicleTraderUI_C">();
	}
	static class UW_VehicleTraderUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_VehicleTraderUI_C>();
	}
};
static_assert(alignof(UW_VehicleTraderUI_C) == 0x000008, "Wrong alignment on UW_VehicleTraderUI_C");
static_assert(sizeof(UW_VehicleTraderUI_C) == 0x000318, "Wrong size on UW_VehicleTraderUI_C");
static_assert(offsetof(UW_VehicleTraderUI_C, UberGraphFrame_W_VehicleTraderUI_C) == 0x000300, "Member 'UW_VehicleTraderUI_C::UberGraphFrame_W_VehicleTraderUI_C' has a wrong offset!");
static_assert(offsetof(UW_VehicleTraderUI_C, MainContainer) == 0x000308, "Member 'UW_VehicleTraderUI_C::MainContainer' has a wrong offset!");
static_assert(offsetof(UW_VehicleTraderUI_C, ScrollBox_Vehicle) == 0x000310, "Member 'UW_VehicleTraderUI_C::ScrollBox_Vehicle' has a wrong offset!");

}

