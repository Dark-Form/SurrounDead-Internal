﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dialogue_ShakesConesTrader

#include "Basic.hpp"

#include "Dialogue_ShakesConesTrader_classes.hpp"
#include "Dialogue_ShakesConesTrader_parameters.hpp"


namespace SDK
{

// Function Dialogue_ShakesConesTrader.Dialogue_ShakesConesTrader_C.ExecuteUbergraph_Dialogue_ShakesConesTrader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDialogue_ShakesConesTrader_C::ExecuteUbergraph_Dialogue_ShakesConesTrader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dialogue_ShakesConesTrader_C", "ExecuteUbergraph_Dialogue_ShakesConesTrader");

	Params::Dialogue_ShakesConesTrader_C_ExecuteUbergraph_Dialogue_ShakesConesTrader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

