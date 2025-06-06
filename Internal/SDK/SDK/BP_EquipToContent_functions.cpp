﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EquipToContent

#include "Basic.hpp"

#include "BP_EquipToContent_classes.hpp"
#include "BP_EquipToContent_parameters.hpp"


namespace SDK
{

// Function BP_EquipToContent.BP_EquipToContent_C.ClearContent
// (BlueprintCallable, BlueprintEvent)

void UBP_EquipToContent_C::ClearContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "ClearContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EquipToContent.BP_EquipToContent_C.ExecuteUbergraph_BP_EquipToContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipToContent_C::ExecuteUbergraph_BP_EquipToContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "ExecuteUbergraph_BP_EquipToContent");

	Params::BP_EquipToContent_C_ExecuteUbergraph_BP_EquipToContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipToContent.BP_EquipToContent_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class FText&                      ContentName_0                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText*                            Name_0                                                 (Parm, OutParm)

void UBP_EquipToContent_C::GetItemName(const class FText& ContentName_0, class FText* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "GetItemName");

	Params::BP_EquipToContent_C_GetItemName Parms{};

	Parms.ContentName_0 = std::move(ContentName_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function BP_EquipToContent.BP_EquipToContent_C.On_ArrowUpDown_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_EquipToContent_C::On_ArrowUpDown_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "On_ArrowUpDown_MouseButtonDown_0");

	Params::BP_EquipToContent_C_On_ArrowUpDown_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EquipToContent.BP_EquipToContent_C.OnWeightUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipToContent_C::OnWeightUpdated_Event_0(double NewWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "OnWeightUpdated_Event_0");

	Params::BP_EquipToContent_C_OnWeightUpdated_Event_0 Parms{};

	Parms.NewWeight = NewWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipToContent.BP_EquipToContent_C.SetupContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WidgetRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const class FText&                      ContentName_0                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ShowDropdownOption_                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquipToContent_C::SetupContent(class UWidget* WidgetRef, const class FText& ContentName_0, bool ShowDropdownOption_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "SetupContent");

	Params::BP_EquipToContent_C_SetupContent Parms{};

	Parms.WidgetRef = WidgetRef;
	Parms.ContentName_0 = std::move(ContentName_0);
	Parms.ShowDropdownOption_ = ShowDropdownOption_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EquipToContent.BP_EquipToContent_C.SetWeightText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EquipToContent_C::SetWeightText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EquipToContent_C", "SetWeightText");

	UObject::ProcessEvent(Func, nullptr);
}

}

