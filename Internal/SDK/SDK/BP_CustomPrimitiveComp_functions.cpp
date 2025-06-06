﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomPrimitiveComp

#include "Basic.hpp"

#include "BP_CustomPrimitiveComp_classes.hpp"
#include "BP_CustomPrimitiveComp_parameters.hpp"


namespace SDK
{

// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.ExecuteUbergraph_BP_CustomPrimitiveComp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::ExecuteUbergraph_BP_CustomPrimitiveComp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "ExecuteUbergraph_BP_CustomPrimitiveComp");

	Params::BP_CustomPrimitiveComp_C_ExecuteUbergraph_BP_CustomPrimitiveComp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.GetInteractOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGameplayTag, class FText>* Options                                                (Parm, OutParm)

void ABP_CustomPrimitiveComp_C::GetInteractOptions(TMap<struct FGameplayTag, class FText>* Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "GetInteractOptions");

	Params::BP_CustomPrimitiveComp_C_GetInteractOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.GetItemInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJigsawItem_DataAsset_C**         Info                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32*                                  Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RandomStatsConfig*            RandomStatsConfig                                      (Parm, OutParm, HasGetValueTypeHash)
// TMap<class FString, class FString>*     CustomData                                             (Parm, OutParm)

void ABP_CustomPrimitiveComp_C::GetItemInfo(class UJigsawItem_DataAsset_C** Info, int32* Count, struct FS_RandomStatsConfig* RandomStatsConfig, TMap<class FString, class FString>* CustomData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "GetItemInfo");

	Params::BP_CustomPrimitiveComp_C_GetItemInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = Parms.Info;

	if (Count != nullptr)
		*Count = Parms.Count;

	if (RandomStatsConfig != nullptr)
		*RandomStatsConfig = std::move(Parms.RandomStatsConfig);

	if (CustomData != nullptr)
		*CustomData = std::move(Parms.CustomData);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.GetJigMultiplayerComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent**                 JigComp                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::GetJigMultiplayerComponent(class UActorComponent** JigComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "GetJigMultiplayerComponent");

	Params::BP_CustomPrimitiveComp_C_GetJigMultiplayerComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JigComp != nullptr)
		*JigComp = Parms.JigComp;
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.GetMainSceneComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**                 Comp                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::GetMainSceneComp(class USceneComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "GetMainSceneComp");

	Params::BP_CustomPrimitiveComp_C_GetMainSceneComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.GetMeshFromOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent**          Mesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::GetMeshFromOwner(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "GetMeshFromOwner");

	Params::BP_CustomPrimitiveComp_C_GetMeshFromOwner Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJigsawItem_DataAsset_C*          DA_0                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           OwnerMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    UseLeaderPose_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::Init(class UJigsawItem_DataAsset_C* DA_0, class USkeletalMeshComponent* OwnerMesh, bool UseLeaderPose_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "Init");

	Params::BP_CustomPrimitiveComp_C_Init Parms{};

	Parms.DA_0 = DA_0;
	Parms.OwnerMesh = OwnerMesh;
	Parms.UseLeaderPose_ = UseLeaderPose_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.JigCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::JigCanInteract(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "JigCanInteract");

	Params::BP_CustomPrimitiveComp_C_JigCanInteract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.JigSetCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanInteract                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EnablePhysics                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "JigSetCanInteract");

	Params::BP_CustomPrimitiveComp_C_JigSetCanInteract Parms{};

	Parms.CanInteract = CanInteract;
	Parms.EnablePhysics = EnablePhysics;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnBeginInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const TMap<struct FGameplayTag, class FText>&Options                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CustomPrimitiveComp_C::OnBeginInteract(class AActor* InteractingActor, const TMap<struct FGameplayTag, class FText>& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnBeginInteract");

	Params::BP_CustomPrimitiveComp_C_OnBeginInteract Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.Options = std::move(Options);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnEndInteract
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CustomPrimitiveComp_C::OnEndInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnEndInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTag&              Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::OnExecuteInteract(class AActor* InteractingActor, const struct FGameplayTag& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnExecuteInteract");

	Params::BP_CustomPrimitiveComp_C_OnExecuteInteract Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnExecuteInteractDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::OnExecuteInteractDialogue(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnExecuteInteractDialogue");

	Params::BP_CustomPrimitiveComp_C_OnExecuteInteractDialogue Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnExecuteInteractEnded
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CustomPrimitiveComp_C::OnExecuteInteractEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnExecuteInteractEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnRequestServerInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTag&              Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// const struct FS_JigPayload&             Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::OnRequestServerInteract(class AActor* Actor, const struct FGameplayTag& Option, const struct FS_JigPayload& Payload, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnRequestServerInteract");

	Params::BP_CustomPrimitiveComp_C_OnRequestServerInteract Parms{};

	Parms.Actor = Actor;
	Parms.Option = std::move(Option);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnServerExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ByActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FS_JigPayload&             Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::OnServerExecuteInteract(const struct FGameplayTag& Option, class AActor* ByActor, const struct FS_JigPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnServerExecuteInteract");

	Params::BP_CustomPrimitiveComp_C_OnServerExecuteInteract Parms{};

	Parms.Option = std::move(Option);
	Parms.ByActor = ByActor;
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.OnStopExecuteInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::OnStopExecuteInteract(class AActor* InteractingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "OnStopExecuteInteract");

	Params::BP_CustomPrimitiveComp_C_OnStopExecuteInteract Parms{};

	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.PickupBuildFromGround
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CustomPrimitiveComp_C::PickupBuildFromGround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "PickupBuildFromGround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CustomPrimitiveComp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.SetInteractOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::SetInteractOption(const struct FGameplayTag& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "SetInteractOption");

	Params::BP_CustomPrimitiveComp_C_SetInteractOption Parms{};

	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CustomPrimitiveComp.BP_CustomPrimitiveComp_C.SetPickupCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomPrimitiveComp_C::SetPickupCount(int32 NewCount, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CustomPrimitiveComp_C", "SetPickupCount");

	Params::BP_CustomPrimitiveComp_C_SetPickupCount Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

