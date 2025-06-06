﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockPickingComponent

#include "Basic.hpp"

#include "LockPickingComponent_classes.hpp"
#include "LockPickingComponent_parameters.hpp"


namespace SDK
{

// Function LockPickingComponent.LockPickingComponent_C.ExecuteUbergraph_LockPickingComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULockPickingComponent_C::ExecuteUbergraph_LockPickingComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockPickingComponent_C", "ExecuteUbergraph_LockPickingComponent");

	Params::LockPickingComponent_C_ExecuteUbergraph_LockPickingComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LockPickingComponent.LockPickingComponent_C.Svr_Initialise
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ULockPickingComponent_C::Svr_Initialise()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LockPickingComponent_C", "Svr_Initialise");

	UObject::ProcessEvent(Func, nullptr);
}

}

