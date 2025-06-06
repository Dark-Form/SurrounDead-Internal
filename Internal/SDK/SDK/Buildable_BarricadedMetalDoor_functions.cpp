﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_BarricadedMetalDoor

#include "Basic.hpp"

#include "Buildable_BarricadedMetalDoor_classes.hpp"
#include "Buildable_BarricadedMetalDoor_parameters.hpp"


namespace SDK
{

// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsBeyondLastLayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LayerIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_BarricadedMetalDoor_C::BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::Buildable_BarricadedMetalDoor_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.Event_OpenDoor
// (BlueprintCallable, BlueprintEvent)

void ABuildable_BarricadedMetalDoor_C::Event_OpenDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "Event_OpenDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.ExecuteUbergraph_Buildable_BarricadedMetalDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_BarricadedMetalDoor_C::ExecuteUbergraph_Buildable_BarricadedMetalDoor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "ExecuteUbergraph_Buildable_BarricadedMetalDoor");

	Params::Buildable_BarricadedMetalDoor_C_ExecuteUbergraph_Buildable_BarricadedMetalDoor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuildable_BarricadedMetalDoor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.Timeline_OpenDoor__FinishedFunc
// (BlueprintEvent)

void ABuildable_BarricadedMetalDoor_C::Timeline_OpenDoor__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "Timeline_OpenDoor__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.Timeline_OpenDoor__UpdateFunc
// (BlueprintEvent)

void ABuildable_BarricadedMetalDoor_C::Timeline_OpenDoor__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "Timeline_OpenDoor__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.OnInteractBuildable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_BarricadedMetalDoor_C::OnInteractBuildable(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "OnInteractBuildable");

	Params::Buildable_BarricadedMetalDoor_C_OnInteractBuildable Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Buildable_BarricadedMetalDoor.Buildable_BarricadedMetalDoor_C.OnServerExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ByActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FS_JigPayload&             Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABuildable_BarricadedMetalDoor_C::OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Buildable_BarricadedMetalDoor_C", "OnServerExecuteInteract");

	Params::Buildable_BarricadedMetalDoor_C_OnServerExecuteInteract Parms{};

	Parms.Option = std::move(Option);
	Parms.ByActor = ByActor;
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}

