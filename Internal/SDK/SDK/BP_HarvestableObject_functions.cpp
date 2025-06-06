﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HarvestableObject

#include "Basic.hpp"

#include "BP_HarvestableObject_classes.hpp"
#include "BP_HarvestableObject_parameters.hpp"


namespace SDK
{

// Function BP_HarvestableObject.BP_HarvestableObject_C.BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsBeyondLastLayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LayerIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HarvestableObject_C::BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HarvestableObject_C", "BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::BP_HarvestableObject_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HarvestableObject.BP_HarvestableObject_C.ExecuteUbergraph_BP_HarvestableObject
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HarvestableObject_C::ExecuteUbergraph_BP_HarvestableObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HarvestableObject_C", "ExecuteUbergraph_BP_HarvestableObject");

	Params::BP_HarvestableObject_C_ExecuteUbergraph_BP_HarvestableObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HarvestableObject.BP_HarvestableObject_C.HitHarvestableObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Hits                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HarvestableObject_C::HitHarvestableObject(const struct FVector& HitLocation, int32 Hits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HarvestableObject_C", "HitHarvestableObject");

	Params::BP_HarvestableObject_C_HitHarvestableObject Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.Hits = Hits;

	UObject::ProcessEvent(Func, &Parms);
}

}

