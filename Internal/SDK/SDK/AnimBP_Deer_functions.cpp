﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Deer

#include "Basic.hpp"

#include "AnimBP_Deer_classes.hpp"
#include "AnimBP_Deer_parameters.hpp"


namespace SDK
{

// Function AnimBP_Deer.AnimBP_Deer_C.GetSpeed
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimBP_Deer_C::GetSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "GetSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Deer.AnimBP_Deer_C.ExecuteUbergraph_AnimBP_Deer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Deer_C::ExecuteUbergraph_AnimBP_Deer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "ExecuteUbergraph_AnimBP_Deer");

	Params::AnimBP_Deer_C_ExecuteUbergraph_AnimBP_Deer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_Deer.AnimBP_Deer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Deer_AnimGraphNode_TransitionResult_BD0F68DF4B701F24BAAA25B911DD7040
// (BlueprintEvent)

void UAnimBP_Deer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Deer_AnimGraphNode_TransitionResult_BD0F68DF4B701F24BAAA25B911DD7040()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Deer_AnimGraphNode_TransitionResult_BD0F68DF4B701F24BAAA25B911DD7040");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Deer.AnimBP_Deer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Deer_AnimGraphNode_TransitionResult_2FE4AF3741ACFED8DC95ADB86FB05005
// (BlueprintEvent)

void UAnimBP_Deer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Deer_AnimGraphNode_TransitionResult_2FE4AF3741ACFED8DC95ADB86FB05005()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Deer_AnimGraphNode_TransitionResult_2FE4AF3741ACFED8DC95ADB86FB05005");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Deer.AnimBP_Deer_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_Deer_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "BlueprintThreadSafeUpdateAnimation");

	Params::AnimBP_Deer_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_Deer.AnimBP_Deer_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAnimBP_Deer_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Deer.AnimBP_Deer_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)

void UAnimBP_Deer_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "AnimNotify_Footstep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_Deer.AnimBP_Deer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_Deer_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_Deer_C", "AnimGraph");

	Params::AnimBP_Deer_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

