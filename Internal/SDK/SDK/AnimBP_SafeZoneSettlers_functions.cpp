﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_SafeZoneSettlers

#include "Basic.hpp"

#include "AnimBP_SafeZoneSettlers_classes.hpp"
#include "AnimBP_SafeZoneSettlers_parameters.hpp"


namespace SDK
{

// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.ExecuteUbergraph_AnimBP_SafeZoneSettlers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SafeZoneSettlers_C::ExecuteUbergraph_AnimBP_SafeZoneSettlers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "ExecuteUbergraph_AnimBP_SafeZoneSettlers");

	Params::AnimBP_SafeZoneSettlers_C_ExecuteUbergraph_AnimBP_SafeZoneSettlers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SafeZoneSettlers_AnimGraphNode_TransitionResult_64B60A3048ECD9D6343702858A51CCE6
// (BlueprintEvent)

void UAnimBP_SafeZoneSettlers_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SafeZoneSettlers_AnimGraphNode_TransitionResult_64B60A3048ECD9D6343702858A51CCE6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SafeZoneSettlers_AnimGraphNode_TransitionResult_64B60A3048ECD9D6343702858A51CCE6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SafeZoneSettlers_AnimGraphNode_TransitionResult_0F1699B0429C7B98EBEC7388A4769E3C
// (BlueprintEvent)

void UAnimBP_SafeZoneSettlers_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SafeZoneSettlers_AnimGraphNode_TransitionResult_0F1699B0429C7B98EBEC7388A4769E3C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_SafeZoneSettlers_AnimGraphNode_TransitionResult_0F1699B0429C7B98EBEC7388A4769E3C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.DeathState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dead_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SafeZoneSettlers_C::DeathState(bool Dead_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "DeathState");

	Params::AnimBP_SafeZoneSettlers_C_DeathState Parms{};

	Parms.Dead_0 = Dead_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.CombatState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BlendSpace                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SafeZoneSettlers_C::CombatState(int32 BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "CombatState");

	Params::AnimBP_SafeZoneSettlers_C_CombatState Parms{};

	Parms.BlendSpace = BlendSpace;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_SafeZoneSettlers_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "BlueprintUpdateAnimation");

	Params::AnimBP_SafeZoneSettlers_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAnimBP_SafeZoneSettlers_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_SafeZoneSettlers_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "AnimNotify_Footstep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_SafeZoneSettlers.AnimBP_SafeZoneSettlers_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_SafeZoneSettlers_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_SafeZoneSettlers_C", "AnimGraph");

	Params::AnimBP_SafeZoneSettlers_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

