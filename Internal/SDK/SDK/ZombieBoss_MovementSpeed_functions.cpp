﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZombieBoss_MovementSpeed

#include "Basic.hpp"

#include "ZombieBoss_MovementSpeed_classes.hpp"
#include "ZombieBoss_MovementSpeed_parameters.hpp"


namespace SDK
{

// Function ZombieBoss_MovementSpeed.ZombieBoss_MovementSpeed_C.ExecuteUbergraph_ZombieBoss_MovementSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_MovementSpeed_C::ExecuteUbergraph_ZombieBoss_MovementSpeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieBoss_MovementSpeed_C", "ExecuteUbergraph_ZombieBoss_MovementSpeed");

	Params::ZombieBoss_MovementSpeed_C_ExecuteUbergraph_ZombieBoss_MovementSpeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ZombieBoss_MovementSpeed.ZombieBoss_MovementSpeed_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_MovementSpeed_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ZombieBoss_MovementSpeed_C", "ReceiveActivationAI");

	Params::ZombieBoss_MovementSpeed_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

