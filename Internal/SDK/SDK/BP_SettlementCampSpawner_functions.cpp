﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SettlementCampSpawner

#include "Basic.hpp"

#include "BP_SettlementCampSpawner_classes.hpp"
#include "BP_SettlementCampSpawner_parameters.hpp"


namespace SDK
{

// Function BP_SettlementCampSpawner.BP_SettlementCampSpawner_C.ExecuteUbergraph_BP_SettlementCampSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SettlementCampSpawner_C::ExecuteUbergraph_BP_SettlementCampSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettlementCampSpawner_C", "ExecuteUbergraph_BP_SettlementCampSpawner");

	Params::BP_SettlementCampSpawner_C_ExecuteUbergraph_BP_SettlementCampSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SettlementCampSpawner.BP_SettlementCampSpawner_C.SpawnSettlement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SettlementCampSpawner_C::SpawnSettlement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettlementCampSpawner_C", "SpawnSettlement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SettlementCampSpawner.BP_SettlementCampSpawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SettlementCampSpawner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SettlementCampSpawner_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

