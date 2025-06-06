﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Buildables

#include "Basic.hpp"

#include "BPI_Buildables_classes.hpp"
#include "BPI_Buildables_parameters.hpp"


namespace SDK
{

// Function BPI_Buildables.BPI_Buildables_C.GetBuildType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_BuildingSnapTypes*                 Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::GetBuildType(Enum_BuildingSnapTypes* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "GetBuildType");

	Params::BPI_Buildables_C_GetBuildType Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function BPI_Buildables.BPI_Buildables_C.OnDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::OnDestroy(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "OnDestroy");

	Params::BPI_Buildables_C_OnDestroy Parms{};

	Parms.Actor = Actor;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Buildables.BPI_Buildables_C.OnInteractBuildable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::OnInteractBuildable(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "OnInteractBuildable");

	Params::BPI_Buildables_C_OnInteractBuildable Parms{};

	Parms.Actor = Actor;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Buildables.BPI_Buildables_C.OverrideBuildName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_Buildables_C::OverrideBuildName(const class FText& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "OverrideBuildName");

	Params::BPI_Buildables_C_OverrideBuildName Parms{};

	Parms.Name_0 = std::move(Name_0);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Buildables.BPI_Buildables_C.Power Off
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::Power_Off(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "Power Off");

	Params::BPI_Buildables_C_Power_Off Parms{};

	Parms.Actor = Actor;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Buildables.BPI_Buildables_C.Power On
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::Power_On(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "Power On");

	Params::BPI_Buildables_C_Power_On Parms{};

	Parms.Actor = Actor;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_Buildables.BPI_Buildables_C.RemoveModularBuilds
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Buildables_C::RemoveModularBuilds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "RemoveModularBuilds");

	AsUObject()->ProcessEvent(Func, nullptr);
}


// Function BPI_Buildables.BPI_Buildables_C.Requires Power?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Required_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Buildables_C::Requires_Power_(bool* Required_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_Buildables_C", "Requires Power?");

	Params::BPI_Buildables_C_Requires_Power_ Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Required_ != nullptr)
		*Required_ = Parms.Required_;
}

}

