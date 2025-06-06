﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildableMaster_Container

#include "Basic.hpp"

#include "BuildableMaster_Container_classes.hpp"
#include "BuildableMaster_Container_parameters.hpp"


namespace SDK
{

// Function BuildableMaster_Container.BuildableMaster_Container_C.ActorLoaded
// (Event, Public, BlueprintEvent)

void ABuildableMaster_Container_C::ActorLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "ActorLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsBeyondLastLayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LayerIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildableMaster_Container_C::BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::BuildableMaster_Container_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.DropAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABuildableMaster_Container_C::DropAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "DropAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.Event_BeginInteract
// (BlueprintCallable, BlueprintEvent)

void ABuildableMaster_Container_C::Event_BeginInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "Event_BeginInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.ExecuteUbergraph_BuildableMaster_Container
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildableMaster_Container_C::ExecuteUbergraph_BuildableMaster_Container(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "ExecuteUbergraph_BuildableMaster_Container");

	Params::BuildableMaster_Container_C_ExecuteUbergraph_BuildableMaster_Container Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText*                            Name_0                                                 (Parm, OutParm)

void ABuildableMaster_Container_C::GetName(class FText* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "GetName");

	Params::BuildableMaster_Container_C_GetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.PickupContainer
// (BlueprintCallable, BlueprintEvent)

void ABuildableMaster_Container_C::PickupContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "PickupContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABuildableMaster_Container_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.UpdateStorageStat
// (BlueprintCallable, BlueprintEvent)

void ABuildableMaster_Container_C::UpdateStorageStat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "UpdateStorageStat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.ActorPreSave
// (Event, Public, BlueprintEvent)

void ABuildableMaster_Container_C::ActorPreSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "ActorPreSave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.JigMP_OnMainContainerItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGuid&                     TocontainerUID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGuid&                     ItemUID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ToContainerName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRepItemInfo&              ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                             FromMain                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                          ActorRef                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildableMaster_Container_C::JigMP_OnMainContainerItemAdded(const struct FGuid& TocontainerUID, const struct FGuid& ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "JigMP_OnMainContainerItemAdded");

	Params::BuildableMaster_Container_C_JigMP_OnMainContainerItemAdded Parms{};

	Parms.TocontainerUID = std::move(TocontainerUID);
	Parms.ItemUID = std::move(ItemUID);
	Parms.ToContainerName = ToContainerName;
	Parms.ItemInfo = std::move(ItemInfo);
	Parms.FromMain = FromMain;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ActorRef != nullptr)
		*ActorRef = Parms.ActorRef;
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.JigMP_OnMainContainerItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGuid&                     FromContainerUID                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGuid&                     ItemUID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ContainerName_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRepItemInfo&              ItemRemovedInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildableMaster_Container_C::JigMP_OnMainContainerItemRemoved(const struct FGuid& FromContainerUID, const struct FGuid& ItemUID, class FName ContainerName_0, const struct FRepItemInfo& ItemRemovedInfo, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "JigMP_OnMainContainerItemRemoved");

	Params::BuildableMaster_Container_C_JigMP_OnMainContainerItemRemoved Parms{};

	Parms.FromContainerUID = std::move(FromContainerUID);
	Parms.ItemUID = std::move(ItemUID);
	Parms.ContainerName_0 = ContainerName_0;
	Parms.ItemRemovedInfo = std::move(ItemRemovedInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const TMap<struct FGameplayTag, class FText>&Options                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABuildableMaster_Container_C::OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "OnBeginInteract");

	Params::BuildableMaster_Container_C_OnBeginInteract Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.Options = std::move(Options);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.OnInteractBuildable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildableMaster_Container_C::OnInteractBuildable(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "OnInteractBuildable");

	Params::BuildableMaster_Container_C_OnInteractBuildable Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.OnServerExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ByActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FS_JigPayload&             Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABuildableMaster_Container_C::OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "OnServerExecuteInteract");

	Params::BuildableMaster_Container_C_OnServerExecuteInteract Parms{};

	Parms.Option = std::move(Option);
	Parms.ByActor = ByActor;
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildableMaster_Container.BuildableMaster_Container_C.OverrideBuildName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABuildableMaster_Container_C::OverrideBuildName(const class FText& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildableMaster_Container_C", "OverrideBuildName");

	Params::BuildableMaster_Container_C_OverrideBuildName Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

