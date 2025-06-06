﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_FollowDistances

#include "Basic.hpp"

#include "BTD_FollowDistances_classes.hpp"
#include "BTD_FollowDistances_parameters.hpp"


namespace SDK
{

// Function BTD_FollowDistances.BTD_FollowDistances_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_FollowDistances_C::PerformConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTD_FollowDistances_C", "PerformConditionCheck");

	Params::BTD_FollowDistances_C_PerformConditionCheck Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

