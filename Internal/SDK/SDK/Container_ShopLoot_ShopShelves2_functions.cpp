﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_ShopLoot_ShopShelves2

#include "Basic.hpp"

#include "Container_ShopLoot_ShopShelves2_classes.hpp"
#include "Container_ShopLoot_ShopShelves2_parameters.hpp"


namespace SDK
{

// Function Container_ShopLoot_ShopShelves2.Container_ShopLoot_ShopShelves2_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_ShopLoot_ShopShelves2_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_ShopLoot_ShopShelves2_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_ShopLoot_ShopShelves2.Container_ShopLoot_ShopShelves2_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_ShopLoot_ShopShelves2_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_ShopLoot_ShopShelves2_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_ShopLoot_ShopShelves2.Container_ShopLoot_ShopShelves2_C.ExecuteUbergraph_Container_ShopLoot_ShopShelves2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_ShopLoot_ShopShelves2_C::ExecuteUbergraph_Container_ShopLoot_ShopShelves2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_ShopLoot_ShopShelves2_C", "ExecuteUbergraph_Container_ShopLoot_ShopShelves2");

	Params::Container_ShopLoot_ShopShelves2_C_ExecuteUbergraph_Container_ShopLoot_ShopShelves2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_ShopLoot_ShopShelves2.Container_ShopLoot_ShopShelves2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_ShopLoot_ShopShelves2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_ShopLoot_ShopShelves2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

