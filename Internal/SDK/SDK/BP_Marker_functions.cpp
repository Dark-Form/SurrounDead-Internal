﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Marker

#include "Basic.hpp"

#include "BP_Marker_classes.hpp"
#include "BP_Marker_parameters.hpp"


namespace SDK
{

// Function BP_Marker.BP_Marker_C.AddMarker
// (BlueprintCallable, BlueprintEvent)

void ABP_Marker_C::AddMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Marker_C", "AddMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Marker.BP_Marker_C.ExecuteUbergraph_BP_Marker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Marker_C::ExecuteUbergraph_BP_Marker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Marker_C", "ExecuteUbergraph_BP_Marker");

	Params::BP_Marker_C_ExecuteUbergraph_BP_Marker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Marker.BP_Marker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Marker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Marker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

