﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Container_RandomLoot_LetterBox

#include "Basic.hpp"

#include "Container_RandomLoot_LetterBox_classes.hpp"
#include "Container_RandomLoot_LetterBox_parameters.hpp"


namespace SDK
{

// Function Container_RandomLoot_LetterBox.Container_RandomLoot_LetterBox_C.Event1
// (BlueprintCallable, BlueprintEvent)

void AContainer_RandomLoot_LetterBox_C::Event1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_LetterBox_C", "Event1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_RandomLoot_LetterBox.Container_RandomLoot_LetterBox_C.Event2
// (BlueprintCallable, BlueprintEvent)

void AContainer_RandomLoot_LetterBox_C::Event2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_LetterBox_C", "Event2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Container_RandomLoot_LetterBox.Container_RandomLoot_LetterBox_C.ExecuteUbergraph_Container_RandomLoot_LetterBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AContainer_RandomLoot_LetterBox_C::ExecuteUbergraph_Container_RandomLoot_LetterBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_LetterBox_C", "ExecuteUbergraph_Container_RandomLoot_LetterBox");

	Params::Container_RandomLoot_LetterBox_C_ExecuteUbergraph_Container_RandomLoot_LetterBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Container_RandomLoot_LetterBox.Container_RandomLoot_LetterBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AContainer_RandomLoot_LetterBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Container_RandomLoot_LetterBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

