﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_Deadeye

#include "Basic.hpp"

#include "SC_Deadeye_classes.hpp"
#include "SC_Deadeye_parameters.hpp"


namespace SDK
{

// Function SC_Deadeye.SC_Deadeye_C.ExecuteUbergraph_SC_Deadeye
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_Deadeye_C::ExecuteUbergraph_SC_Deadeye(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_Deadeye_C", "ExecuteUbergraph_SC_Deadeye");

	Params::SC_Deadeye_C_ExecuteUbergraph_SC_Deadeye Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SC_Deadeye.SC_Deadeye_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_Deadeye_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_Deadeye_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}

}

