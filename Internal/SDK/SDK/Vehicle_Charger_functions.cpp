﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_Charger

#include "Basic.hpp"

#include "Vehicle_Charger_classes.hpp"
#include "Vehicle_Charger_parameters.hpp"


namespace SDK
{

// Function Vehicle_Charger.Vehicle_Charger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVehicle_Charger_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_Charger_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

