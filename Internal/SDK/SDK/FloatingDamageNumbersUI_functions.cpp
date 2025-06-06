﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FloatingDamageNumbersUI

#include "Basic.hpp"

#include "FloatingDamageNumbersUI_classes.hpp"
#include "FloatingDamageNumbersUI_parameters.hpp"


namespace SDK
{

// Function FloatingDamageNumbersUI.FloatingDamageNumbersUI_C.ExecuteUbergraph_FloatingDamageNumbersUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingDamageNumbersUI_C::ExecuteUbergraph_FloatingDamageNumbersUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingDamageNumbersUI_C", "ExecuteUbergraph_FloatingDamageNumbersUI");

	Params::FloatingDamageNumbersUI_C_ExecuteUbergraph_FloatingDamageNumbersUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FloatingDamageNumbersUI.FloatingDamageNumbersUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingDamageNumbersUI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingDamageNumbersUI_C", "PreConstruct");

	Params::FloatingDamageNumbersUI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FloatingDamageNumbersUI.FloatingDamageNumbersUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFloatingDamageNumbersUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FloatingDamageNumbersUI_C", "Tick");

	Params::FloatingDamageNumbersUI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

