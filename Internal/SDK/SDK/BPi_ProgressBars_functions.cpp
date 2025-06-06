﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPi_ProgressBars

#include "Basic.hpp"

#include "BPi_ProgressBars_classes.hpp"
#include "BPi_ProgressBars_parameters.hpp"


namespace SDK
{

// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_AddEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FS_Effects&                Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32*                                  Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_AddEffect(const struct FS_Effects& Effect, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_AddEffect");

	Params::BPi_ProgressBars_C_PB_AddEffect Parms{};

	Parms.Effect = std::move(Effect);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetBackgroundColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*                    Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetBackgroundColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetBackgroundColor");

	Params::BPi_ProgressBars_C_PB_GetBackgroundColor Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>*              Effects                                                (Parm, OutParm)

void IBPi_ProgressBars_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetEffects");

	Params::BPi_ProgressBars_C_PB_GetEffects Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Effects != nullptr)
		*Effects = std::move(Parms.Effects);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*                    Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetFillColor");

	Params::BPi_ProgressBars_C_PB_GetFillColor Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 CurrentInterpTime                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetInterpTimeCurrent(double* CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetInterpTimeCurrent");

	Params::BPi_ProgressBars_C_PB_GetInterpTimeCurrent Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = Parms.CurrentInterpTime;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 TargetInterpTime                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetInterpTimeTarget(double* TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetInterpTimeTarget");

	Params::BPi_ProgressBars_C_PB_GetInterpTimeTarget Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = Parms.TargetInterpTime;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsCustomMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsMarquee                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetIsCustomMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetIsCustomMarquee");

	Params::BPi_ProgressBars_C_PB_GetIsCustomMarquee Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   IsMarquee                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetIsMarquee");

	Params::BPi_ProgressBars_C_PB_GetIsMarquee Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Percent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetPercent(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetPercent");

	Params::BPi_ProgressBars_C_PB_GetPercent Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetProgressMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProgressMethod*                        EProgressMethod                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetProgressMethod(EProgressMethod* EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetProgressMethod");

	Params::BPi_ProgressBars_C_PB_GetProgressMethod Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (EProgressMethod != nullptr)
		*EProgressMethod = Parms.EProgressMethod;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSeparationSteps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32*                                  Steps                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetSeparationSteps(int32* Steps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetSeparationSteps");

	Params::BPi_ProgressBars_C_PB_GetSeparationSteps Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Steps != nullptr)
		*Steps = Parms.Steps;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*                       Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetSize");

	Params::BPi_ProgressBars_C_PB_GetSize Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*                    Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetTargetFillColor_Negative");

	Params::BPi_ProgressBars_C_PB_GetTargetFillColor_Negative Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*                    Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetTargetFillColor_Positive");

	Params::BPi_ProgressBars_C_PB_GetTargetFillColor_Positive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 TargetPercent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetTargetPercent(double* TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetTargetPercent");

	Params::BPi_ProgressBars_C_PB_GetTargetPercent Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (TargetPercent != nullptr)
		*TargetPercent = Parms.TargetPercent;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetThickness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double*                                 Thickness                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetThickness(double* Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetThickness");

	Params::BPi_ProgressBars_C_PB_GetThickness Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (Thickness != nullptr)
		*Thickness = Parms.Thickness;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseGradientFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   UseGradientFillColor                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetUseGradientFillColor");

	Params::BPi_ProgressBars_C_PB_GetUseGradientFillColor Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = Parms.UseGradientFillColor;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   UseTargetPercent                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_GetUseTargetPercent");

	Params::BPi_ProgressBars_C_PB_GetUseTargetPercent Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = Parms.UseTargetPercent;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_RemoveEffect(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_RemoveEffect");

	Params::BPi_ProgressBars_C_PB_RemoveEffect Parms{};

	Parms.Index_0 = Index_0;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetAllEffectsEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetAllEffectsEnabled");

	Params::BPi_ProgressBars_C_PB_SetAllEffectsEnabled Parms{};

	Parms.IsEnabled = IsEnabled;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBlurStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  BlurStrength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundBlurStrength(double BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundBlurStrength");

	Params::BPi_ProgressBars_C_PB_SetBackgroundBlurStrength Parms{};

	Parms.BlurStrength = BlurStrength;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateBrushTileType                     Tiling                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundBrushTiling(ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundBrushTiling");

	Params::BPi_ProgressBars_C_PB_SetBackgroundBrushTiling Parms{};

	Parms.Tiling = Tiling;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundColor");

	Params::BPi_ProgressBars_C_PB_SetBackgroundColor Parms{};

	Parms.Color = std::move(Color);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Mask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBackgroundColorMask(class UTexture2D* Mask)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetBackgroundColorMask");

	Params::BPi_ProgressBars_C_PB_SetBackgroundColorMask Parms{};

	Parms.Mask = Mask;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       BlendMask                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetBlendMask");

	Params::BPi_ProgressBars_C_PB_SetBlendMask Parms{};

	Parms.BlendMask = BlendMask;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetCustomMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetCustomMarqueeImage");

	Params::BPi_ProgressBars_C_PB_SetCustomMarqueeImage Parms{};

	Parms.Image = Image;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarqueeMask                            MaskType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetCustomMarqueeMaskType(EMarqueeMask MaskType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetCustomMarqueeMaskType");

	Params::BPi_ProgressBars_C_PB_SetCustomMarqueeMaskType Parms{};

	Parms.MaskType = MaskType;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetEffectEnabled(int32 Index_0, bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetEffectEnabled");

	Params::BPi_ProgressBars_C_PB_SetEffectEnabled Parms{};

	Parms.Index_0 = Index_0;
	Parms.IsEnabled = IsEnabled;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FS_Effects>&        Effects                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPi_ProgressBars_C::PB_SetEffects(const TArray<struct FS_Effects>& Effects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetEffects");

	Params::BPi_ProgressBars_C_PB_SetEffects Parms{};

	Parms.Effects = std::move(Effects);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColor");

	Params::BPi_ProgressBars_C_PB_SetFillColor Parms{};

	Parms.Color = std::move(Color);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateBrushTileType                     Tiling                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorBrushTiling(ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorBrushTiling");

	Params::BPi_ProgressBars_C_PB_SetFillColorBrushTiling Parms{};

	Parms.Tiling = Tiling;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  GradientPower                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorGradientPower(double GradientPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorGradientPower");

	Params::BPi_ProgressBars_C_PB_SetFillColorGradientPower Parms{};

	Parms.GradientPower = GradientPower;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGradientTypes                          GradientType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorGradientType(EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorGradientType");

	Params::BPi_ProgressBars_C_PB_SetFillColorGradientType Parms{};

	Parms.GradientType = GradientType;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Mask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillColorMask(class UObject* Mask)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillColorMask");

	Params::BPi_ProgressBars_C_PB_SetFillColorMask Parms{};

	Parms.Mask = Mask;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillFromCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillFromCenterSpacing(double Spacing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillFromCenterSpacing");

	Params::BPi_ProgressBars_C_PB_SetFillFromCenterSpacing Parms{};

	Parms.Spacing = Spacing;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProgressBarFillType                    FillType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetFillType(EProgressBarFillType FillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetFillType");

	Params::BPi_ProgressBars_C_PB_SetFillType Parms{};

	Parms.FillType = FillType;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentInterpTime                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetInterpTimeCurrent(double CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetInterpTimeCurrent");

	Params::BPi_ProgressBars_C_PB_SetInterpTimeCurrent Parms{};

	Parms.CurrentInterpTime = CurrentInterpTime;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  TargetInterpTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetInterpTimeTarget(double TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetInterpTimeTarget");

	Params::BPi_ProgressBars_C_PB_SetInterpTimeTarget Parms{};

	Parms.TargetInterpTime = TargetInterpTime;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsCustomMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMarquee                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetIsCustomMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetIsCustomMarquee");

	Params::BPi_ProgressBars_C_PB_SetIsCustomMarquee Parms{};

	Parms.IsMarquee = IsMarquee;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMarquee                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetIsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetIsMarquee");

	Params::BPi_ProgressBars_C_PB_SetIsMarquee Parms{};

	Parms.IsMarquee = IsMarquee;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetMarqueeImage");

	Params::BPi_ProgressBars_C_PB_SetMarqueeImage Parms{};

	Parms.Image = Image;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetPercent(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetPercent");

	Params::BPi_ProgressBars_C_PB_SetPercent Parms{};

	Parms.Value = Value;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProgressMethod                         EProgressMethod                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetProgressMethod(EProgressMethod EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetProgressMethod");

	Params::BPi_ProgressBars_C_PB_SetProgressMethod Parms{};

	Parms.EProgressMethod = EProgressMethod;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AbsoluteFillMethod                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetSeparationAbsoluteFill");

	Params::BPi_ProgressBars_C_PB_SetSeparationAbsoluteFill Parms{};

	Parms.AbsoluteFillMethod = AbsoluteFillMethod;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Steps                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSeparationSteps(int32 Steps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetSeparationSteps");

	Params::BPi_ProgressBars_C_PB_SetSeparationSteps Parms{};

	Parms.Steps = Steps;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Spacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSeparationStepsSpacing(double Spacing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetSeparationStepsSpacing");

	Params::BPi_ProgressBars_C_PB_SetSeparationStepsSpacing Parms{};

	Parms.Spacing = Spacing;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector2D&                 Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetSize");

	Params::BPi_ProgressBars_C_PB_SetSize Parms{};

	Parms.Size = std::move(Size);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetTargetFillColor_Negative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetTargetFillColor_Negative");

	Params::BPi_ProgressBars_C_PB_SetTargetFillColor_Negative Parms{};

	Parms.Color = std::move(Color);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetTargetFillColor_Positive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetTargetFillColor_Positive");

	Params::BPi_ProgressBars_C_PB_SetTargetFillColor_Positive Parms{};

	Parms.Color = std::move(Color);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  TargetPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetTargetPercent(double TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetTargetPercent");

	Params::BPi_ProgressBars_C_PB_SetTargetPercent Parms{};

	Parms.TargetPercent = TargetPercent;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Thickness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetThickness(double Thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetThickness");

	Params::BPi_ProgressBars_C_PB_SetThickness Parms{};

	Parms.Thickness = Thickness;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseGradientFillColor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetUseGradientFillColor(bool UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetUseGradientFillColor");

	Params::BPi_ProgressBars_C_PB_SetUseGradientFillColor Parms{};

	Parms.UseGradientFillColor = UseGradientFillColor;

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseTargetPercent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_ProgressBars_C::PB_SetUseTargetPercent(bool UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("BPi_ProgressBars_C", "PB_SetUseTargetPercent");

	Params::BPi_ProgressBars_C_PB_SetUseTargetPercent Parms{};

	Parms.UseTargetPercent = UseTargetPercent;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

