﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_WandererJacket

#include "Basic.hpp"

#include "SC_WandererJacket_classes.hpp"
#include "SC_WandererJacket_parameters.hpp"


namespace SDK
{

// Function SC_WandererJacket.SC_WandererJacket_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_WandererJacket_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_WandererJacket_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SC_WandererJacket.SC_WandererJacket_C.ExecuteUbergraph_SC_WandererJacket
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_WandererJacket_C::ExecuteUbergraph_SC_WandererJacket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_WandererJacket_C", "ExecuteUbergraph_SC_WandererJacket");

	Params::SC_WandererJacket_C_ExecuteUbergraph_SC_WandererJacket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

