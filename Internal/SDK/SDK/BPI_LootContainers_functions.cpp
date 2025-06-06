﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_LootContainers

#include "Basic.hpp"

#include "BPI_LootContainers_classes.hpp"
#include "BPI_LootContainers_parameters.hpp"


namespace SDK
{

// Function BPI_LootContainers.BPI_LootContainers_C.GetSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 ChanceToProduceNoise                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Default_ChanceToProduceNoise                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 DurationToHold                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LootContainers_C::GetSettings(double* ChanceToProduceNoise, double* Default_ChanceToProduceNoise, double* DurationToHold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_LootContainers_C", "GetSettings");

	Params::BPI_LootContainers_C_GetSettings Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ChanceToProduceNoise != nullptr)
		*ChanceToProduceNoise = Parms.ChanceToProduceNoise;

	if (Default_ChanceToProduceNoise != nullptr)
		*Default_ChanceToProduceNoise = Parms.Default_ChanceToProduceNoise;

	if (DurationToHold != nullptr)
		*DurationToHold = Parms.DurationToHold;
}


// Function BPI_LootContainers.BPI_LootContainers_C.IsHeld?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Held_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LootContainers_C::IsHeld_(bool* Held_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_LootContainers_C", "IsHeld?");

	Params::BPI_LootContainers_C_IsHeld_ Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Held_ != nullptr)
		*Held_ = Parms.Held_;
}

}

