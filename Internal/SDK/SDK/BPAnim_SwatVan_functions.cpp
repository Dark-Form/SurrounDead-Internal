﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPAnim_SwatVan

#include "Basic.hpp"

#include "BPAnim_SwatVan_classes.hpp"
#include "BPAnim_SwatVan_parameters.hpp"


namespace SDK
{

// Function BPAnim_SwatVan.BPAnim_SwatVan_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UBPAnim_SwatVan_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPAnim_SwatVan_C", "AnimGraph");

	Params::BPAnim_SwatVan_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function BPAnim_SwatVan.BPAnim_SwatVan_C.ExecuteUbergraph_BPAnim_SwatVan
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_SwatVan_C::ExecuteUbergraph_BPAnim_SwatVan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPAnim_SwatVan_C", "ExecuteUbergraph_BPAnim_SwatVan");

	Params::BPAnim_SwatVan_C_ExecuteUbergraph_BPAnim_SwatVan Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

