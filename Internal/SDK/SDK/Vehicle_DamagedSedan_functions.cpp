﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Vehicle_DamagedSedan

#include "Basic.hpp"

#include "Vehicle_DamagedSedan_classes.hpp"
#include "Vehicle_DamagedSedan_parameters.hpp"


namespace SDK
{

// Function Vehicle_DamagedSedan.Vehicle_DamagedSedan_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVehicle_DamagedSedan_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Vehicle_DamagedSedan_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

