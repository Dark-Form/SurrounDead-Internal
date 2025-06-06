﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_HiddenCache

#include "Basic.hpp"

#include "Container_HiddenCache_classes.hpp"
#include "Container_HiddenCache_parameters.hpp"


namespace SDK
{

// Function Container_HiddenCache.Container_HiddenCache_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_HiddenCache_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HiddenCache_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_HiddenCache.Container_HiddenCache_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_HiddenCache_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HiddenCache_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_HiddenCache.Container_HiddenCache_C.ExecuteUbergraph_Container_HiddenCache
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_HiddenCache_C::ExecuteUbergraph_Container_HiddenCache(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HiddenCache_C", "ExecuteUbergraph_Container_HiddenCache");

	Params::Container_HiddenCache_C_ExecuteUbergraph_Container_HiddenCache Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_HiddenCache.Container_HiddenCache_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_HiddenCache_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HiddenCache_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

