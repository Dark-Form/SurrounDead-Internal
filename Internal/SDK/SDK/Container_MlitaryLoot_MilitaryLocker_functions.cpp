﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_MlitaryLoot_MilitaryLocker

#include "Basic.hpp"

#include "Container_MlitaryLoot_MilitaryLocker_classes.hpp"
#include "Container_MlitaryLoot_MilitaryLocker_parameters.hpp"


namespace SDK
{

// Function Container_MlitaryLoot_MilitaryLocker.Container_MlitaryLoot_MilitaryLocker_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_MlitaryLoot_MilitaryLocker_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_MlitaryLoot_MilitaryLocker_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_MlitaryLoot_MilitaryLocker.Container_MlitaryLoot_MilitaryLocker_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_MlitaryLoot_MilitaryLocker_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_MlitaryLoot_MilitaryLocker_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_MlitaryLoot_MilitaryLocker.Container_MlitaryLoot_MilitaryLocker_C.ExecuteUbergraph_Container_MlitaryLoot_MilitaryLocker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_MlitaryLoot_MilitaryLocker_C::ExecuteUbergraph_Container_MlitaryLoot_MilitaryLocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_MlitaryLoot_MilitaryLocker_C", "ExecuteUbergraph_Container_MlitaryLoot_MilitaryLocker");

	Params::Container_MlitaryLoot_MilitaryLocker_C_ExecuteUbergraph_Container_MlitaryLoot_MilitaryLocker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_MlitaryLoot_MilitaryLocker.Container_MlitaryLoot_MilitaryLocker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_MlitaryLoot_MilitaryLocker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_MlitaryLoot_MilitaryLocker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

