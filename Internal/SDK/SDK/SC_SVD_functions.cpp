﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_SVD

#include "Basic.hpp"

#include "SC_SVD_classes.hpp"
#include "SC_SVD_parameters.hpp"


namespace SDK
{

// Function SC_SVD.SC_SVD_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_SVD_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_SVD_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SC_SVD.SC_SVD_C.ExecuteUbergraph_SC_SVD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_SVD_C::ExecuteUbergraph_SC_SVD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_SVD_C", "ExecuteUbergraph_SC_SVD");

	Params::SC_SVD_C_ExecuteUbergraph_SC_SVD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

