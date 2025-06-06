﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_ACR

#include "Basic.hpp"

#include "SC_ACR_classes.hpp"
#include "SC_ACR_parameters.hpp"


namespace SDK
{

// Function SC_ACR.SC_ACR_C.ExecuteUbergraph_SC_ACR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_ACR_C::ExecuteUbergraph_SC_ACR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_ACR_C", "ExecuteUbergraph_SC_ACR");

	Params::SC_ACR_C_ExecuteUbergraph_SC_ACR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SC_ACR.SC_ACR_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_ACR_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_ACR_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}

}

