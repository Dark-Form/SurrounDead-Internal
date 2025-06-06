﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_UI

#include "Basic.hpp"

#include "BPI_UI_classes.hpp"
#include "BPI_UI_parameters.hpp"


namespace SDK
{

// Function BPI_UI.BPI_UI_C.GetFlashlightDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Dur                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_C::GetFlashlightDurability(double Dur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_UI_C", "GetFlashlightDurability");

	Params::BPI_UI_C_GetFlashlightDurability Parms{};

	Parms.Dur = Dur;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_UI.BPI_UI_C.GetNightVisionDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Dur                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_C::GetNightVisionDurability(double Dur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_UI_C", "GetNightVisionDurability");

	Params::BPI_UI_C_GetNightVisionDurability Parms{};

	Parms.Dur = Dur;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_UI.BPI_UI_C.GetRespiratorDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Dur                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_C::GetRespiratorDurability(double Dur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_UI_C", "GetRespiratorDurability");

	Params::BPI_UI_C_GetRespiratorDurability Parms{};

	Parms.Dur = Dur;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_UI.BPI_UI_C.ShowFlashlightDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_C::ShowFlashlightDurability(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_UI_C", "ShowFlashlightDurability");

	Params::BPI_UI_C_ShowFlashlightDurability Parms{};

	Parms.Show_ = Show_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_UI.BPI_UI_C.ShowNightVisionDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_C::ShowNightVisionDurability(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_UI_C", "ShowNightVisionDurability");

	Params::BPI_UI_C_ShowNightVisionDurability Parms{};

	Parms.Show_ = Show_;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPI_UI.BPI_UI_C.ShowRespiratorDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UI_C::ShowRespiratorDurability(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPI_UI_C", "ShowRespiratorDurability");

	Params::BPI_UI_C_ShowRespiratorDurability Parms{};

	Parms.Show_ = Show_;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

