﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_AmmoLoot_AmmoCrate

#include "Basic.hpp"

#include "Container_AmmoLoot_AmmoCrate_classes.hpp"
#include "Container_AmmoLoot_AmmoCrate_parameters.hpp"


namespace SDK
{

// Function Container_AmmoLoot_AmmoCrate.Container_AmmoLoot_AmmoCrate_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_AmmoLoot_AmmoCrate_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_AmmoLoot_AmmoCrate_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_AmmoLoot_AmmoCrate.Container_AmmoLoot_AmmoCrate_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_AmmoLoot_AmmoCrate_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_AmmoLoot_AmmoCrate_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_AmmoLoot_AmmoCrate.Container_AmmoLoot_AmmoCrate_C.ExecuteUbergraph_Container_AmmoLoot_AmmoCrate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_AmmoLoot_AmmoCrate_C::ExecuteUbergraph_Container_AmmoLoot_AmmoCrate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_AmmoLoot_AmmoCrate_C", "ExecuteUbergraph_Container_AmmoLoot_AmmoCrate");

	Params::Container_AmmoLoot_AmmoCrate_C_ExecuteUbergraph_Container_AmmoLoot_AmmoCrate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_AmmoLoot_AmmoCrate.Container_AmmoLoot_AmmoCrate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_AmmoLoot_AmmoCrate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_AmmoLoot_AmmoCrate_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

