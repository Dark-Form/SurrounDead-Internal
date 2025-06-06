﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NarrativeButton

#include "Basic.hpp"

#include "WBP_NarrativeButton_classes.hpp"
#include "WBP_NarrativeButton_parameters.hpp"


namespace SDK
{

// Function WBP_NarrativeButton.WBP_NarrativeButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UWBP_NarrativeButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NarrativeButton.WBP_NarrativeButton_C.ExecuteUbergraph_WBP_NarrativeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NarrativeButton_C::ExecuteUbergraph_WBP_NarrativeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeButton_C", "ExecuteUbergraph_WBP_NarrativeButton");

	Params::WBP_NarrativeButton_C_ExecuteUbergraph_WBP_NarrativeButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NarrativeButton.WBP_NarrativeButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UWBP_NarrativeButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NarrativeButton.WBP_NarrativeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NarrativeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeButton_C", "PreConstruct");

	Params::WBP_NarrativeButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NarrativeButton.WBP_NarrativeButton_C.Set Button Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Text_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NarrativeButton_C::Set_Button_Text(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeButton_C", "Set Button Text");

	Params::WBP_NarrativeButton_C_Set_Button_Text Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

