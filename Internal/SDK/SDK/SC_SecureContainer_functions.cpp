﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_SecureContainer

#include "Basic.hpp"

#include "SC_SecureContainer_classes.hpp"
#include "SC_SecureContainer_parameters.hpp"


namespace SDK
{

// Function SC_SecureContainer.SC_SecureContainer_C.ExecuteUbergraph_SC_SecureContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_SecureContainer_C::ExecuteUbergraph_SC_SecureContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_SecureContainer_C", "ExecuteUbergraph_SC_SecureContainer");

	Params::SC_SecureContainer_C_ExecuteUbergraph_SC_SecureContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SC_SecureContainer.SC_SecureContainer_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void USC_SecureContainer_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SC_SecureContainer_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}

}

