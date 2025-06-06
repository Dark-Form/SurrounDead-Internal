﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProgressBar_Functions

#include "Basic.hpp"

#include "BP_ProgressBar_Functions_classes.hpp"
#include "BP_ProgressBar_Functions_parameters.hpp"


namespace SDK
{

// Function BP_ProgressBar_Functions.BP_ProgressBar_Functions_C.GetProgressBarManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Base_C*                       ProgressBar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_ProgressBars_C>*Manager                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ProgressBar_Functions_C::GetProgressBarManager(class UWB_Base_C* ProgressBar, class UObject* __WorldContext, TScriptInterface<class IBPi_ProgressBars_C>* Manager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_ProgressBar_Functions_C", "GetProgressBarManager");

	Params::BP_ProgressBar_Functions_C_GetProgressBarManager Parms{};

	Parms.ProgressBar = ProgressBar;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Manager != nullptr)
		*Manager = Parms.Manager;
}

}

