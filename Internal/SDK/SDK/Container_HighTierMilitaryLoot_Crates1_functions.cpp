﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_HighTierMilitaryLoot_Crates1

#include "Basic.hpp"

#include "Container_HighTierMilitaryLoot_Crates1_classes.hpp"
#include "Container_HighTierMilitaryLoot_Crates1_parameters.hpp"


namespace SDK
{

// Function Container_HighTierMilitaryLoot_Crates1.Container_HighTierMilitaryLoot_Crates1_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_HighTierMilitaryLoot_Crates1_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HighTierMilitaryLoot_Crates1_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_HighTierMilitaryLoot_Crates1.Container_HighTierMilitaryLoot_Crates1_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_HighTierMilitaryLoot_Crates1_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HighTierMilitaryLoot_Crates1_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_HighTierMilitaryLoot_Crates1.Container_HighTierMilitaryLoot_Crates1_C.ExecuteUbergraph_Container_HighTierMilitaryLoot_Crates1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_HighTierMilitaryLoot_Crates1_C::ExecuteUbergraph_Container_HighTierMilitaryLoot_Crates1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HighTierMilitaryLoot_Crates1_C", "ExecuteUbergraph_Container_HighTierMilitaryLoot_Crates1");

	Params::Container_HighTierMilitaryLoot_Crates1_C_ExecuteUbergraph_Container_HighTierMilitaryLoot_Crates1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_HighTierMilitaryLoot_Crates1.Container_HighTierMilitaryLoot_Crates1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_HighTierMilitaryLoot_Crates1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_HighTierMilitaryLoot_Crates1_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

