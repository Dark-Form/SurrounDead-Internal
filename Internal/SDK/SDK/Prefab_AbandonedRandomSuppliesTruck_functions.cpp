﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prefab_AbandonedRandomSuppliesTruck

#include "Basic.hpp"

#include "Prefab_AbandonedRandomSuppliesTruck_classes.hpp"
#include "Prefab_AbandonedRandomSuppliesTruck_parameters.hpp"


namespace SDK
{

// Function Prefab_AbandonedRandomSuppliesTruck.Prefab_AbandonedRandomSuppliesTruck_C.ExecuteUbergraph_Prefab_AbandonedRandomSuppliesTruck
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrefab_AbandonedRandomSuppliesTruck_C::ExecuteUbergraph_Prefab_AbandonedRandomSuppliesTruck(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prefab_AbandonedRandomSuppliesTruck_C", "ExecuteUbergraph_Prefab_AbandonedRandomSuppliesTruck");

	Params::Prefab_AbandonedRandomSuppliesTruck_C_ExecuteUbergraph_Prefab_AbandonedRandomSuppliesTruck Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prefab_AbandonedRandomSuppliesTruck.Prefab_AbandonedRandomSuppliesTruck_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrefab_AbandonedRandomSuppliesTruck_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prefab_AbandonedRandomSuppliesTruck_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

