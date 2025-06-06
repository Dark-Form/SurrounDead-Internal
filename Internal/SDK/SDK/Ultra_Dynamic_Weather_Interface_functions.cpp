﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ultra_Dynamic_Weather_Interface

#include "Basic.hpp"

#include "Ultra_Dynamic_Weather_Interface_classes.hpp"
#include "Ultra_Dynamic_Weather_Interface_parameters.hpp"


namespace SDK
{

// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Editor Tick
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Editor_Camera_Location                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FRotator&                  Editor_Camera_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                                  Delta_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Completed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Editor_Tick(const struct FVector& Editor_Camera_Location, const struct FRotator& Editor_Camera_Rotation, double Delta_Time, bool* Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Editor Tick");

	Params::Ultra_Dynamic_Weather_Interface_C_Editor_Tick Parms{};

	Parms.Editor_Camera_Location = std::move(Editor_Camera_Location);
	Parms.Editor_Camera_Rotation = std::move(Editor_Camera_Rotation);
	Parms.Delta_Time = Delta_Time;

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Completed != nullptr)
		*Completed = Parms.Completed;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Control Point Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                         Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Control_Point_Location(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Control Point Location");

	Params::Ultra_Dynamic_Weather_Interface_C_Get_Control_Point_Location Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Local Weather State Values
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Cloud_Coverage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Wind_Intensity                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Rain                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Snow                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Dust                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Fog                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Lightning                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_Local_Weather_State_Values(double* Cloud_Coverage, double* Wind_Intensity, double* Rain, double* Snow, double* Dust, double* Fog, double* Lightning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get Local Weather State Values");

	Params::Ultra_Dynamic_Weather_Interface_C_Get_Local_Weather_State_Values Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Cloud_Coverage != nullptr)
		*Cloud_Coverage = Parms.Cloud_Coverage;

	if (Wind_Intensity != nullptr)
		*Wind_Intensity = Parms.Wind_Intensity;

	if (Rain != nullptr)
		*Rain = Parms.Rain;

	if (Snow != nullptr)
		*Snow = Parms.Snow;

	if (Dust != nullptr)
		*Dust = Parms.Dust;

	if (Fog != nullptr)
		*Fog = Parms.Fog;

	if (Lightning != nullptr)
		*Lightning = Parms.Lightning;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get UDS Values Controlled by UDW
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Cloud_Coverage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Fog                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Dust_Amount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Cloud_Direction                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Wind_Speed_Multiplier                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Fog_Vertical_Velocity                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_UDS_Values_Controlled_by_UDW(double* Cloud_Coverage, double* Fog, double* Dust_Amount, double* Cloud_Direction, double* Wind_Speed_Multiplier, double* Fog_Vertical_Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get UDS Values Controlled by UDW");

	Params::Ultra_Dynamic_Weather_Interface_C_Get_UDS_Values_Controlled_by_UDW Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Cloud_Coverage != nullptr)
		*Cloud_Coverage = Parms.Cloud_Coverage;

	if (Fog != nullptr)
		*Fog = Parms.Fog;

	if (Dust_Amount != nullptr)
		*Dust_Amount = Parms.Dust_Amount;

	if (Cloud_Direction != nullptr)
		*Cloud_Direction = Parms.Cloud_Direction;

	if (Wind_Speed_Multiplier != nullptr)
		*Wind_Speed_Multiplier = Parms.Wind_Speed_Multiplier;

	if (Fog_Vertical_Velocity != nullptr)
		*Fog_Vertical_Velocity = Parms.Fog_Vertical_Velocity;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get UDS Weather Override Bool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Cloud_Coverage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Fog                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Dust                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_UDS_Weather_Override_Bool(bool* Cloud_Coverage, bool* Fog, bool* Dust)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get UDS Weather Override Bool");

	Params::Ultra_Dynamic_Weather_Interface_C_Get_UDS_Weather_Override_Bool Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Cloud_Coverage != nullptr)
		*Cloud_Coverage = Parms.Cloud_Coverage;

	if (Fog != nullptr)
		*Fog = Parms.Fog;

	if (Dust != nullptr)
		*Dust = Parms.Dust;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get UDW State for Saving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDS_and_UDW_State*              UDW_State                                              (Parm, OutParm, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Get_UDW_State_for_Saving(struct FUDS_and_UDW_State* UDW_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Get UDW State for Saving");

	Params::Ultra_Dynamic_Weather_Interface_C_Get_UDW_State_for_Saving Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (UDW_State != nullptr)
		*UDW_State = std::move(Parms.UDW_State);
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUltra_Dynamic_Sky_C*             UDS                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Initialize_Weather(class AUltra_Dynamic_Sky_C* UDS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Initialize Weather");

	Params::Ultra_Dynamic_Weather_Interface_C_Initialize_Weather Parms{};

	Parms.UDS = UDS;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Report Removed Radial Storm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Storm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::Report_Removed_Radial_Storm(class AActor* Storm, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "Report Removed Radial Storm");

	Params::Ultra_Dynamic_Weather_Interface_C_Report_Removed_Radial_Storm Parms{};

	Parms.Storm = Storm;

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.UDS Reconstruct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::UDS_Reconstruct(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "UDS Reconstruct");

	Params::Ultra_Dynamic_Weather_Interface_C_UDS_Reconstruct Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.UDS Weather Variable Overrides
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override_Clouds                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Cloud_Coverage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Override_Fog                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Fog                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Override_Dust                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Dust                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::UDS_Weather_Variable_Overrides(bool Override_Clouds, double Cloud_Coverage, bool Override_Fog, double Fog, bool Override_Dust, double Dust, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "UDS Weather Variable Overrides");

	Params::Ultra_Dynamic_Weather_Interface_C_UDS_Weather_Variable_Overrides Parms{};

	Parms.Override_Clouds = Override_Clouds;
	Parms.Cloud_Coverage = Cloud_Coverage;
	Parms.Override_Fog = Override_Fog;
	Parms.Fog = Fog;
	Parms.Override_Dust = Override_Dust;
	Parms.Dust = Dust;

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.UDW Runtime Tick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delta_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::UDW_Runtime_Tick(double Delta_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "UDW Runtime Tick");

	Params::Ultra_Dynamic_Weather_Interface_C_UDW_Runtime_Tick Parms{};

	Parms.Delta_Time = Delta_Time;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.UDW State Apply
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FUDS_and_UDW_State&        State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool*                                   Completed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUltra_Dynamic_Weather_Interface_C::UDW_State_Apply(const struct FUDS_and_UDW_State& State, bool* Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("Ultra_Dynamic_Weather_Interface_C", "UDW State Apply");

	Params::Ultra_Dynamic_Weather_Interface_C_UDW_State_Apply Parms{};

	Parms.State = std::move(State);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Completed != nullptr)
		*Completed = Parms.Completed;
}

}

