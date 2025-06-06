﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIMarkerUI

#include "Basic.hpp"

#include "AIMarkerUI_classes.hpp"
#include "AIMarkerUI_parameters.hpp"


namespace SDK
{

// Function AIMarkerUI.AIMarkerUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAIMarkerUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIMarkerUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIMarkerUI.AIMarkerUI_C.ExecuteUbergraph_AIMarkerUI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIMarkerUI_C::ExecuteUbergraph_AIMarkerUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIMarkerUI_C", "ExecuteUbergraph_AIMarkerUI");

	Params::AIMarkerUI_C_ExecuteUbergraph_AIMarkerUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

