﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_RandomLoot_HelicopterWreck

#include "Basic.hpp"

#include "Container_RandomLoot_HelicopterWreck_classes.hpp"
#include "Container_RandomLoot_HelicopterWreck_parameters.hpp"


namespace SDK
{

// Function Container_RandomLoot_HelicopterWreck.Container_RandomLoot_HelicopterWreck_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_RandomLoot_HelicopterWreck_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_HelicopterWreck_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_RandomLoot_HelicopterWreck.Container_RandomLoot_HelicopterWreck_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_RandomLoot_HelicopterWreck_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_HelicopterWreck_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_RandomLoot_HelicopterWreck.Container_RandomLoot_HelicopterWreck_C.ExecuteUbergraph_Container_RandomLoot_HelicopterWreck
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_RandomLoot_HelicopterWreck_C::ExecuteUbergraph_Container_RandomLoot_HelicopterWreck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_HelicopterWreck_C", "ExecuteUbergraph_Container_RandomLoot_HelicopterWreck");

	Params::Container_RandomLoot_HelicopterWreck_C_ExecuteUbergraph_Container_RandomLoot_HelicopterWreck Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_RandomLoot_HelicopterWreck.Container_RandomLoot_HelicopterWreck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_RandomLoot_HelicopterWreck_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_HelicopterWreck_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

