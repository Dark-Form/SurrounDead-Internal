﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_HikingBackpack

#include "Basic.hpp"

#include "SC_HikingBackpack_classes.hpp"
#include "SC_HikingBackpack_parameters.hpp"


namespace SDK
{

// Function SC_HikingBackpack.SC_HikingBackpack_C.Event_Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_HikingBackpack_C::Event_Callback(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_HikingBackpack_C", "Event_Callback");

	Params::SC_HikingBackpack_C_Event_Callback Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SC_HikingBackpack.SC_HikingBackpack_C.ExecuteUbergraph_SC_HikingBackpack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_HikingBackpack_C::ExecuteUbergraph_SC_HikingBackpack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_HikingBackpack_C", "ExecuteUbergraph_SC_HikingBackpack");

	Params::SC_HikingBackpack_C_ExecuteUbergraph_SC_HikingBackpack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SC_HikingBackpack.SC_HikingBackpack_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_HikingBackpack_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_HikingBackpack_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}

}

