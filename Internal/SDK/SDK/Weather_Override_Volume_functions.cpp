﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weather_Override_Volume

#include "Basic.hpp"

#include "Weather_Override_Volume_classes.hpp"
#include "Weather_Override_Volume_parameters.hpp"


namespace SDK
{

// Function Weather_Override_Volume.Weather_Override_Volume_C.Add Quad
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Vert_1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Vert_2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Vert_3                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Vert_4                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Add_Quad(const struct FVector& Vert_1, const struct FVector& Vert_2, const struct FVector& Vert_3, const struct FVector& Vert_4)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Add Quad");

	Params::Weather_Override_Volume_C_Add_Quad Parms{};

	Parms.Vert_1 = std::move(Vert_1);
	Parms.Vert_2 = std::move(Vert_2);
	Parms.Vert_3 = std::move(Vert_3);
	Parms.Vert_4 = std::move(Vert_4);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Add Triangle
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Vert_1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Vert_2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Vert_3                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Add_Triangle(const struct FVector& Vert_1, const struct FVector& Vert_2, const struct FVector& Vert_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Add Triangle");

	Params::Weather_Override_Volume_C_Add_Triangle Parms{};

	Parms.Vert_1 = std::move(Vert_1);
	Parms.Vert_2 = std::move(Vert_2);
	Parms.Vert_3 = std::move(Vert_3);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Apply Climate Preset Object
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUDS_Climate_Preset_C*            Climate_Preset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Apply_Climate_Preset_Object(class UUDS_Climate_Preset_C* Climate_Preset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Apply Climate Preset Object");

	Params::Weather_Override_Volume_C_Apply_Climate_Preset_Object Parms{};

	Parms.Climate_Preset = Climate_Preset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Apply Current Single Weather
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Apply_Current_Single_Weather()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Apply Current Single Weather");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Apply Saved WOV State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FUDW_WOV_State&            State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Apply_Saved_WOV_State(const struct FUDW_WOV_State& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Apply Saved WOV State");

	Params::Weather_Override_Volume_C_Apply_Saved_WOV_State Parms{};

	Parms.State = std::move(State);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Calculate Spline Bounds
// (Public, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Calculate_Spline_Bounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Calculate Spline Bounds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Change to Random Weather Variation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time_to_Transition_to_Random_Weather__Seconds_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUDS_RandomWeatherTiming                Random_Weather_Mode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Change_to_Random_Weather_Variation(double Time_to_Transition_to_Random_Weather__Seconds_, EUDS_RandomWeatherTiming Random_Weather_Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Change to Random Weather Variation");

	Params::Weather_Override_Volume_C_Change_to_Random_Weather_Variation Parms{};

	Parms.Time_to_Transition_to_Random_Weather__Seconds_ = Time_to_Transition_to_Random_Weather__Seconds_;
	Parms.Random_Weather_Mode = Random_Weather_Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Change Weather
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUDS_Weather_Settings_C*          New_Weather_Type                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Time_To_Transition_To_New_Weather__Seconds_            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Change_Weather(class UUDS_Weather_Settings_C* New_Weather_Type, double Time_To_Transition_To_New_Weather__Seconds_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Change Weather");

	Params::Weather_Override_Volume_C_Change_Weather Parms{};

	Parms.New_Weather_Type = New_Weather_Type;
	Parms.Time_To_Transition_To_New_Weather__Seconds_ = Time_To_Transition_To_New_Weather__Seconds_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Check for Changing Material State to Request Target Redraw
// (Public, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Check_for_Changing_Material_State_to_Request_Target_Redraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Check for Changing Material State to Request Target Redraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Check to Update Temperature Scale
// (Public, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Check_to_Update_Temperature_Scale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Check to Update Temperature Scale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Construct Editor Only Weather Labels
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Construct_Editor_Only_Weather_Labels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Construct Editor Only Weather Labels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Construct Weather State Objects
// (Protected, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Construct_Weather_State_Objects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Construct Weather State Objects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Create Canvas Space Triangles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Corner_Position                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Resolution                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Create_Canvas_Space_Triangles(const struct FVector2D& Corner_Position, double Width, int32 Resolution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Create Canvas Space Triangles");

	Params::Weather_Override_Volume_C_Create_Canvas_Space_Triangles Parms{};

	Parms.Corner_Position = std::move(Corner_Position);
	Parms.Width = Width;
	Parms.Resolution = Resolution;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Create World Space Drawing Geometry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Create_World_Space_Drawing_Geometry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Create World Space Drawing Geometry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Custom Volume Behavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*             UDS                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Weather_C*         UDW_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Custom_Volume_Behavior(double Alpha, class AUltra_Dynamic_Sky_C* UDS, class AUltra_Dynamic_Weather_C* UDW_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Custom Volume Behavior");

	Params::Weather_Override_Volume_C_Custom_Volume_Behavior Parms{};

	Parms.Alpha = Alpha;
	Parms.UDS = UDS;
	Parms.UDW_0 = UDW_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Disable Volume
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Disable_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Disable Volume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Enable Volume
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Enable_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Enable Volume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ExecuteUbergraph_Weather_Override_Volume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::ExecuteUbergraph_Weather_Override_Volume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ExecuteUbergraph_Weather_Override_Volume");

	Params::Weather_Override_Volume_C_ExecuteUbergraph_Weather_Override_Volume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Force Startup
// (BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Force_Startup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Force Startup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Force Tick
// (BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Force_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Force Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Force Update Current Weather
// (BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Force_Update_Current_Weather()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Force Update Current Weather");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Get State for Saving
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUDW_WOV_State*                  State                                                  (Parm, OutParm, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Get_State_for_Saving(struct FUDW_WOV_State* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Get State for Saving");

	Params::Weather_Override_Volume_C_Get_State_for_Saving Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = std::move(Parms.State);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Increment Material State
// (Protected, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Increment_Material_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Increment Material State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Initialize Spline Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Initialize_Spline_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Initialize Spline Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Is Point In Triangle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Point                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 v1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 v2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector2D&                 V3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Yes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Is_Point_In_Triangle(const struct FVector2D& Point, const struct FVector2D& v1, const struct FVector2D& v2, const struct FVector2D& V3, bool* Yes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Is Point In Triangle");

	Params::Weather_Override_Volume_C_Is_Point_In_Triangle Parms{};

	Parms.Point = std::move(Point);
	Parms.v1 = std::move(v1);
	Parms.v2 = std::move(v2);
	Parms.V3 = std::move(V3);

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeather_Override_Volume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ReceiveEndPlay");

	Params::Weather_Override_Volume_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "ReceiveTick");

	Params::Weather_Override_Volume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Sample Point for Current Alpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Alpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Sample_Point_for_Current_Alpha(const struct FVector& Location, double* Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Sample Point for Current Alpha");

	Params::Weather_Override_Volume_C_Sample_Point_for_Current_Alpha Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Scale And Place Vertex in Canvas Space
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FVector&                   In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D*                       Pos                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Scale_And_Place_Vertex_in_Canvas_Space(const struct FVector& In, struct FVector2D* Pos, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Scale And Place Vertex in Canvas Space");

	Params::Weather_Override_Volume_C_Scale_And_Place_Vertex_in_Canvas_Space Parms{};

	Parms.In = std::move(In);

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Shut Down WOV
// (Protected, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Shut_Down_WOV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Shut Down WOV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Start Up Random Weather Component
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Start_Up_Random_Weather_Component()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Start Up Random Weather Component");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Start Up WOV
// (Protected, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Start_Up_WOV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Start Up WOV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Triangulate Polygon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector2D>&               Vertices__Clockwise_                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWeather_Override_Volume_C::Triangulate_Polygon(TArray<struct FVector2D>& Vertices__Clockwise_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Triangulate Polygon");

	Params::Weather_Override_Volume_C_Triangulate_Polygon Parms{};

	Parms.Vertices__Clockwise_ = std::move(Vertices__Clockwise_);

	UObject::ProcessEvent(Func, &Parms);

	Vertices__Clockwise_ = std::move(Parms.Vertices__Clockwise_);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.UDW End Play
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::UDW_End_Play(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "UDW End Play");

	Params::Weather_Override_Volume_C_UDW_End_Play Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Update Material State Buffer
// (Protected, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::Update_Material_State_Buffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Update Material State Buffer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.Update Volume Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUltra_Dynamic_Weather_C*         UDW_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AWeather_Override_Volume_C::Update_Volume_Color(class AUltra_Dynamic_Weather_C* UDW_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "Update Volume Color");

	Params::Weather_Override_Volume_C_Update_Volume_Color Parms{};

	Parms.UDW_0 = UDW_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Weather_Override_Volume.Weather_Override_Volume_C.📘 Weather Override Volumes
// (Private, BlueprintCallable, BlueprintEvent)

void AWeather_Override_Volume_C::__Weather_Override_Volumes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weather_Override_Volume_C", "📘 Weather Override Volumes");

	UObject::ProcessEvent(Func, nullptr);
}

}

