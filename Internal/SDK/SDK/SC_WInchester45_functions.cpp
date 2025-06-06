﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_WInchester45

#include "Basic.hpp"

#include "SC_WInchester45_classes.hpp"
#include "SC_WInchester45_parameters.hpp"


namespace SDK
{

// Function SC_WInchester45.SC_WInchester45_C.ExecuteUbergraph_SC_WInchester45
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_WInchester45_C::ExecuteUbergraph_SC_WInchester45(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_WInchester45_C", "ExecuteUbergraph_SC_WInchester45");

	Params::SC_WInchester45_C_ExecuteUbergraph_SC_WInchester45 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SC_WInchester45.SC_WInchester45_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_WInchester45_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_WInchester45_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}

}

