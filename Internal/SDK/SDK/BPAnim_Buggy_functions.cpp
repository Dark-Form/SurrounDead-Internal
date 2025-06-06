﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPAnim_Buggy

#include "Basic.hpp"

#include "BPAnim_Buggy_classes.hpp"
#include "BPAnim_Buggy_parameters.hpp"


namespace SDK
{

// Function BPAnim_Buggy.BPAnim_Buggy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBPAnim_Buggy_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPAnim_Buggy_C", "AnimGraph");

	Params::BPAnim_Buggy_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function BPAnim_Buggy.BPAnim_Buggy_C.ExecuteUbergraph_BPAnim_Buggy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Buggy_C::ExecuteUbergraph_BPAnim_Buggy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPAnim_Buggy_C", "ExecuteUbergraph_BPAnim_Buggy");

	Params::BPAnim_Buggy_C_ExecuteUbergraph_BPAnim_Buggy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

