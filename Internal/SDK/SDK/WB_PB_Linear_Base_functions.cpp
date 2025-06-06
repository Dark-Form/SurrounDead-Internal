﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PB_Linear_Base

#include "Basic.hpp"

#include "WB_PB_Linear_Base_classes.hpp"
#include "WB_PB_Linear_Base_parameters.hpp"


namespace SDK
{

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PB_Linear_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.ExecuteUbergraph_WB_PB_Linear_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::ExecuteUbergraph_WB_PB_Linear_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "ExecuteUbergraph_WB_PB_Linear_Base");

	Params::WB_PB_Linear_Base_C_ExecuteUbergraph_WB_PB_Linear_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.FindFillSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UWB_PB_Linear_Base_C::FindFillSize(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "FindFillSize");

	Params::WB_PB_Linear_Base_C_FindFillSize Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double*                                 Percent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::GetPercent(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "GetPercent");

	Params::WB_PB_Linear_Base_C_GetPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Mirror_DesignTimeGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Mirror                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::Mirror_DesignTimeGradient(bool Mirror)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Mirror_DesignTimeGradient");

	Params::WB_PB_Linear_Base_C_Mirror_DesignTimeGradient Parms{};

	Parms.Mirror = Mirror;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "PreConstruct");

	Params::WB_PB_Linear_Base_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)

void UWB_PB_Linear_Base_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Reconstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignRetainerGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::Rotate_DesignRetainerGradient(double Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Rotate_DesignRetainerGradient");

	Params::WB_PB_Linear_Base_C_Rotate_DesignRetainerGradient Parms{};

	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignTimeGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::Rotate_DesignTimeGradient(double Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "Rotate_DesignTimeGradient");

	Params::WB_PB_Linear_Base_C_Rotate_DesignTimeGradient Parms{};

	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EProgressBarFillType                    FillType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseShader                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetBarFillType(EProgressBarFillType FillType, bool bUseShader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetBarFillType");

	Params::WB_PB_Linear_Base_C_SetBarFillType Parms{};

	Parms.FillType = FillType;
	Parms.bUseShader = bUseShader;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  GradientPower                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateBrushTileType                     Tiling                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetFillColor(const struct FLinearColor& InColor, double GradientPower, ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetFillColor");

	Params::WB_PB_Linear_Base_C_SetFillColor Parms{};

	Parms.InColor = std::move(InColor);
	Parms.GradientPower = GradientPower;
	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetFillColorMask(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetFillColorMask");

	Params::WB_PB_Linear_Base_C_SetFillColorMask Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       GradientTexture                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetGradientMask(class UTexture2D* GradientTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetGradientMask");

	Params::WB_PB_Linear_Base_C_SetGradientMask Parms{};

	Parms.GradientTexture = GradientTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetGradientPercent(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetGradientPercent");

	Params::WB_PB_Linear_Base_C_SetGradientPercent Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetPercent(double InPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetPercent");

	Params::WB_PB_Linear_Base_C_SetPercent Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Size_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetSize(const struct FVector2D& Size_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetSize");

	Params::WB_PB_Linear_Base_C_SetSize Parms{};

	Parms.Size_0 = std::move(Size_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseGradient                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::SetUseGradient(bool UseGradient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "SetUseGradient");

	Params::WB_PB_Linear_Base_C_SetUseGradient Parms{};

	Parms.UseGradient = UseGradient;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.UpdateProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  InterpSpeed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChanging                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Base_C::UpdateProgressChangeColor(const struct FLinearColor& NewColor, double InterpSpeed, bool IsChanging)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PB_Linear_Base_C", "UpdateProgressChangeColor");

	Params::WB_PB_Linear_Base_C_UpdateProgressChangeColor Parms{};

	Parms.NewColor = std::move(NewColor);
	Parms.InterpSpeed = InterpSpeed;
	Parms.IsChanging = IsChanging;

	UObject::ProcessEvent(Func, &Parms);
}

}

