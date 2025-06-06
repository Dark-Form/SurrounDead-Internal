﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NarrativeMenu

#include "Basic.hpp"

#include "WBP_NarrativeMenu_classes.hpp"
#include "WBP_NarrativeMenu_parameters.hpp"


namespace SDK
{

// Function WBP_NarrativeMenu.WBP_NarrativeMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NarrativeMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NarrativeMenu.WBP_NarrativeMenu_C.ExecuteUbergraph_WBP_NarrativeMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NarrativeMenu_C::ExecuteUbergraph_WBP_NarrativeMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeMenu_C", "ExecuteUbergraph_WBP_NarrativeMenu");

	Params::WBP_NarrativeMenu_C_ExecuteUbergraph_WBP_NarrativeMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NarrativeMenu.WBP_NarrativeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NarrativeMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NarrativeMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

