﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_GunCaseLoot_DisplayCase2

#include "Basic.hpp"

#include "Container_GunCaseLoot_DisplayCase2_classes.hpp"
#include "Container_GunCaseLoot_DisplayCase2_parameters.hpp"


namespace SDK
{

// Function Container_GunCaseLoot_DisplayCase2.Container_GunCaseLoot_DisplayCase2_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_GunCaseLoot_DisplayCase2_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_GunCaseLoot_DisplayCase2_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_GunCaseLoot_DisplayCase2.Container_GunCaseLoot_DisplayCase2_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_GunCaseLoot_DisplayCase2_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_GunCaseLoot_DisplayCase2_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_GunCaseLoot_DisplayCase2.Container_GunCaseLoot_DisplayCase2_C.ExecuteUbergraph_Container_GunCaseLoot_DisplayCase2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_GunCaseLoot_DisplayCase2_C::ExecuteUbergraph_Container_GunCaseLoot_DisplayCase2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_GunCaseLoot_DisplayCase2_C", "ExecuteUbergraph_Container_GunCaseLoot_DisplayCase2");

	Params::Container_GunCaseLoot_DisplayCase2_C_ExecuteUbergraph_Container_GunCaseLoot_DisplayCase2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_GunCaseLoot_DisplayCase2.Container_GunCaseLoot_DisplayCase2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_GunCaseLoot_DisplayCase2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_GunCaseLoot_DisplayCase2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

