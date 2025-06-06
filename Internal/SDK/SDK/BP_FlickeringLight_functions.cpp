﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlickeringLight

#include "Basic.hpp"

#include "BP_FlickeringLight_classes.hpp"
#include "BP_FlickeringLight_parameters.hpp"


namespace SDK
{

// Function BP_FlickeringLight.BP_FlickeringLight_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsBeyondLastLayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LayerIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlickeringLight_C::BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlickeringLight_C", "BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::BP_FlickeringLight_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlickeringLight.BP_FlickeringLight_C.ExecuteUbergraph_BP_FlickeringLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlickeringLight_C::ExecuteUbergraph_BP_FlickeringLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlickeringLight_C", "ExecuteUbergraph_BP_FlickeringLight");

	Params::BP_FlickeringLight_C_ExecuteUbergraph_BP_FlickeringLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FlickeringLight.BP_FlickeringLight_C.LightFlicker__FinishedFunc
// (BlueprintEvent)

void ABP_FlickeringLight_C::LightFlicker__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlickeringLight_C", "LightFlicker__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlickeringLight.BP_FlickeringLight_C.LightFlicker__UpdateFunc
// (BlueprintEvent)

void ABP_FlickeringLight_C::LightFlicker__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlickeringLight_C", "LightFlicker__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlickeringLight.BP_FlickeringLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FlickeringLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlickeringLight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

