﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressBarCircular

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "WB_Base_classes.hpp"
#include "Engine_structs.hpp"
#include "EProgressMethod_structs.hpp"
#include "EGradientTypes_structs.hpp"
#include "S_Effects_structs.hpp"
#include "EMarqueeMask_structs.hpp"
#include "EEffectLayer_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProgressBarCircular.ProgressBarCircular_C
// 0x01E8 (0x04B0 - 0x02C8)
class UProgressBarCircular_C final : public UWB_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ProgressBarCircular_C;              // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                B_Content;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Effects_Background;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Effects_Foreground;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RB_BlendMask;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Content;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Container_Circular_C*               WB_Container_Circular;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        Size;                                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProgressMethod                               ProgressMethod;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        QueueDelay;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentPercent;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpTimeCurrent;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FillColorCurrent;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             FillColorMask;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          UseGradient;                                       // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseTargetPercent;                                  // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34A[0x6];                                      // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TargetPercent;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpTimeTarget;                                  // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TargetFillColor_Positive;                          // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TargetFillColor_Negative;                          // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             BackgroundMask;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaTime;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpValue;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewPercent;                                        // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OldPercent;                                        // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InterpValueTarget;                                 // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NewTargetPercent;                                  // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OldTargetPercent;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSetTargetPercent;                               // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanSetPercent;                                     // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDesignTime;                                     // 0x03D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGradientTypes                                GradientType;                                      // 0x03D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4[0x4];                                      // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        GradientColorVariation;                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             BlendMask;                                         // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Thickness;                                         // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Density;                                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StepDensity;                                       // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseMarquee;                                       // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MarqueeColor;                                      // 0x0404(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Separation_Steps;                                  // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Separation_Steps_Spacing;                          // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSeparated;                                      // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Separation_AbsoluteFillMethod;                     // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_422[0x6];                                      // 0x0422(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              LocalSize;                                         // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Effects>                     Effects;                                           // 0x0438(0x0010)(Edit, BlueprintVisible)
	class UWB_Effect_C*                           CurrentEffectWidget;                               // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(double Percent)> OnPercentChanged;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        GradientOpacity;                                   // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MarqueeColorBackground;                            // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MarqueeTime;                                       // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMarqueeMask                                  MarqueeMask;                                       // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CustomMarqueeMask;                                 // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x0490(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                Entries;                                           // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsProgressRunning;                                // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PauseWithGamePause;                                // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddEffect(const struct FS_Effects& Effect);
	void AddEntry(double NewPercent_0);
	void ClearEffectLayers(EEffectLayer EffectLayer);
	void Construct();
	void Count_Percent(double Time, double* Value);
	void Count_TargetPercent(double Time, double* Value);
	void CreateEffects();
	void ExecuteEntry(double CurrentEntry);
	void ExecuteUbergraph_ProgressBarCircular(int32 EntryPoint);
	void FindEffectOverlay(EEffectLayer EffectLayer, class UOverlay** Overlay);
	void GetEntryIndex(int32 Index_0, double* Value);
	double GetInterpolationTime();
	void HandlePausedQueue();
	void InitNextEntry();
	bool IsEffectProgressChangeColor(const struct FS_Effects& Effect);
	bool IsProgressMethodInterpolated();
	bool IsProgressMethodStatic();
	bool IsValidEntryIndex(int32 IndexToTest);
	void PB_AddEffect(const struct FS_Effects& Effect, int32* Index_0);
	void PB_GetEffects(TArray<struct FS_Effects>* Effects_0);
	void PB_GetFillColor(struct FLinearColor* Color);
	void PB_GetInterpTimeCurrent(double* CurrentInterpTime);
	void PB_GetInterpTimeTarget(double* TargetInterpTime);
	void PB_GetIsMarquee(bool* IsMarquee);
	void PB_GetPercent(double* Percent);
	void PB_GetProgressMethod(EProgressMethod* EProgressMethod);
	void PB_GetSeparationSteps(int32* Steps);
	void PB_GetSize(struct FVector2D* Size_0);
	void PB_GetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_GetTargetPercent(double* TargetPercent_0);
	void PB_GetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_GetUseTargetPercent(bool* UseTargetPercent_0);
	void PB_RemoveEffect(int32 Index_0);
	void PB_SetAllEffectsEnabled(bool IsEnabled);
	void PB_SetBackgroundColor(const struct FLinearColor& Color);
	void PB_SetBackgroundColorMask(class UTexture2D* Mask);
	void PB_SetBlendMask(class UTexture2D* BlendMask_0);
	void PB_SetCustomMarqueeImage(class UTexture2D* Image);
	void PB_SetCustomMarqueeMaskType(EMarqueeMask MaskType);
	void PB_SetEffectEnabled(int32 Index_0, bool IsEnabled);
	void PB_SetEffects(const TArray<struct FS_Effects>& Effects_0);
	void PB_SetFillColor(const struct FLinearColor& Color);
	void PB_SetFillColorGradientPower(double GradientPower);
	void PB_SetFillColorGradientType(EGradientTypes GradientType_0);
	void PB_SetFillColorMask(class UObject* Mask);
	void PB_SetInterpTimeCurrent(double CurrentInterpTime);
	void PB_SetInterpTimeTarget(double TargetInterpTime);
	void PB_SetIsMarquee(bool IsMarquee);
	void PB_SetPercent(double Value);
	void PB_SetProgressMethod(EProgressMethod EProgressMethod);
	void PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod);
	void PB_SetSeparationSteps(int32 Steps);
	void PB_SetSeparationStepsSpacing(double Spacing);
	void PB_SetSize(const struct FVector2D& Size_0);
	void PB_SetTargetFillColor_Negative(const struct FLinearColor& Color);
	void PB_SetTargetFillColor_Positive(const struct FLinearColor& Color);
	void PB_SetTargetPercent(double TargetPercent_0);
	void PB_SetThickness(double Thickness_0);
	void PB_SetUseGradientFillColor(bool UseGradientFillColor);
	void PB_SetUseTargetPercent(bool UseTargetPercent_0);
	void PreConstruct(bool IsDesignTime);
	void Reconstruct();
	void RemoveEntryIndex(int32 IndexToRemove);
	void Reset();
	void SetBackgroundColor(const struct FLinearColor& BackgroundColor_0, class UTexture2D* BackgroundMask_0);
	void SetBlendMask(class UTexture* Value);
	void SetDensity(double Density_0);
	void SetFillColor(const struct FLinearColor& FillColorCurrent_0, double GradientPower);
	void SetFillColorMask(class UTexture2D* Value);
	void SetMarqueeMask(EMarqueeMask MarqueeMask_0, class UTexture2D* CustomMarqueeMask_0);
	void SetMarqueeTime(double Value);
	void SetOverallBlendMask(class UTexture2D* BlendMask_0);
	void SetPercentInterpolated(double NewPercent_0);
	void SetProgressMethod(EProgressMethod ProgressMethod_0);
	void SetSize(double Size_0);
	void SetSpacing(double Spacing);
	void SetStepDensity(double HardStepBorder);
	void SetSteps(int32 Separation_Steps_0);
	void SetTargetFillColorNegative(const struct FLinearColor& Color);
	void SetTargetFillColorPositive(const struct FLinearColor& Color);
	void SetTargetPercent(bool UseTargetPercent_0, double TargetPercent_0);
	void SetThickness(double Thickness_0);
	void SetupMarquee(bool UseMarquee, const struct FLinearColor& MarqueeColor_0, const struct FLinearColor& MarqueeBackgroundColor);
	void SetUseGradient(bool UseGradient_0, double GradientOpacity_0, EGradientTypes GradientType_0);
	void StartTriggerProgressChangeColor(const struct FLinearColor& Color);
	void StopTriggerProgressChangeColor();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Transfer_CurrentPercent(double Percent);
	void Transfer_TargetPercent(double TargetPercent_0);
	void Transfer_UseTargetPercent(bool UseTargetPercent_0);
	void UpdateInterpolation();
	void UpdatePercent(double Percent);
	void UseAbsoluteFillMethod(bool AbsoluteFillMethod);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressBarCircular_C">();
	}
	static class UProgressBarCircular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressBarCircular_C>();
	}
};
static_assert(alignof(UProgressBarCircular_C) == 0x000008, "Wrong alignment on UProgressBarCircular_C");
static_assert(sizeof(UProgressBarCircular_C) == 0x0004B0, "Wrong size on UProgressBarCircular_C");
static_assert(offsetof(UProgressBarCircular_C, UberGraphFrame_ProgressBarCircular_C) == 0x0002C8, "Member 'UProgressBarCircular_C::UberGraphFrame_ProgressBarCircular_C' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Fade) == 0x0002D0, "Member 'UProgressBarCircular_C::Fade' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, B_Content) == 0x0002D8, "Member 'UProgressBarCircular_C::B_Content' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, OV_Effects_Background) == 0x0002E0, "Member 'UProgressBarCircular_C::OV_Effects_Background' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, OV_Effects_Foreground) == 0x0002E8, "Member 'UProgressBarCircular_C::OV_Effects_Foreground' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, RB_BlendMask) == 0x0002F0, "Member 'UProgressBarCircular_C::RB_BlendMask' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, SB_Content) == 0x0002F8, "Member 'UProgressBarCircular_C::SB_Content' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, WB_Container_Circular) == 0x000300, "Member 'UProgressBarCircular_C::WB_Container_Circular' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Size) == 0x000308, "Member 'UProgressBarCircular_C::Size' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, ProgressMethod) == 0x000310, "Member 'UProgressBarCircular_C::ProgressMethod' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, QueueDelay) == 0x000318, "Member 'UProgressBarCircular_C::QueueDelay' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, CurrentPercent) == 0x000320, "Member 'UProgressBarCircular_C::CurrentPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, InterpTimeCurrent) == 0x000328, "Member 'UProgressBarCircular_C::InterpTimeCurrent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, FillColorCurrent) == 0x000330, "Member 'UProgressBarCircular_C::FillColorCurrent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, FillColorMask) == 0x000340, "Member 'UProgressBarCircular_C::FillColorMask' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, UseGradient) == 0x000348, "Member 'UProgressBarCircular_C::UseGradient' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, UseTargetPercent) == 0x000349, "Member 'UProgressBarCircular_C::UseTargetPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, TargetPercent) == 0x000350, "Member 'UProgressBarCircular_C::TargetPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, InterpTimeTarget) == 0x000358, "Member 'UProgressBarCircular_C::InterpTimeTarget' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, TargetFillColor_Positive) == 0x000360, "Member 'UProgressBarCircular_C::TargetFillColor_Positive' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, TargetFillColor_Negative) == 0x000370, "Member 'UProgressBarCircular_C::TargetFillColor_Negative' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, BackgroundColor) == 0x000380, "Member 'UProgressBarCircular_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, BackgroundMask) == 0x000390, "Member 'UProgressBarCircular_C::BackgroundMask' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, DeltaTime) == 0x000398, "Member 'UProgressBarCircular_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, InterpValue) == 0x0003A0, "Member 'UProgressBarCircular_C::InterpValue' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, NewPercent) == 0x0003A8, "Member 'UProgressBarCircular_C::NewPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, OldPercent) == 0x0003B0, "Member 'UProgressBarCircular_C::OldPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, InterpValueTarget) == 0x0003B8, "Member 'UProgressBarCircular_C::InterpValueTarget' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, NewTargetPercent) == 0x0003C0, "Member 'UProgressBarCircular_C::NewTargetPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, OldTargetPercent) == 0x0003C8, "Member 'UProgressBarCircular_C::OldTargetPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, CanSetTargetPercent) == 0x0003D0, "Member 'UProgressBarCircular_C::CanSetTargetPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, CanSetPercent) == 0x0003D1, "Member 'UProgressBarCircular_C::CanSetPercent' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, bIsDesignTime) == 0x0003D2, "Member 'UProgressBarCircular_C::bIsDesignTime' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, GradientType) == 0x0003D3, "Member 'UProgressBarCircular_C::GradientType' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, GradientColorVariation) == 0x0003D8, "Member 'UProgressBarCircular_C::GradientColorVariation' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, BlendMask) == 0x0003E0, "Member 'UProgressBarCircular_C::BlendMask' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Thickness) == 0x0003E8, "Member 'UProgressBarCircular_C::Thickness' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Density) == 0x0003F0, "Member 'UProgressBarCircular_C::Density' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, StepDensity) == 0x0003F8, "Member 'UProgressBarCircular_C::StepDensity' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, bUseMarquee) == 0x000400, "Member 'UProgressBarCircular_C::bUseMarquee' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, MarqueeColor) == 0x000404, "Member 'UProgressBarCircular_C::MarqueeColor' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Separation_Steps) == 0x000414, "Member 'UProgressBarCircular_C::Separation_Steps' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Separation_Steps_Spacing) == 0x000418, "Member 'UProgressBarCircular_C::Separation_Steps_Spacing' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, bIsSeparated) == 0x000420, "Member 'UProgressBarCircular_C::bIsSeparated' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Separation_AbsoluteFillMethod) == 0x000421, "Member 'UProgressBarCircular_C::Separation_AbsoluteFillMethod' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, LocalSize) == 0x000428, "Member 'UProgressBarCircular_C::LocalSize' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Effects) == 0x000438, "Member 'UProgressBarCircular_C::Effects' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, CurrentEffectWidget) == 0x000448, "Member 'UProgressBarCircular_C::CurrentEffectWidget' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, OnPercentChanged) == 0x000450, "Member 'UProgressBarCircular_C::OnPercentChanged' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, GradientOpacity) == 0x000460, "Member 'UProgressBarCircular_C::GradientOpacity' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, MarqueeColorBackground) == 0x000468, "Member 'UProgressBarCircular_C::MarqueeColorBackground' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, MarqueeTime) == 0x000478, "Member 'UProgressBarCircular_C::MarqueeTime' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, MarqueeMask) == 0x000480, "Member 'UProgressBarCircular_C::MarqueeMask' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, CustomMarqueeMask) == 0x000488, "Member 'UProgressBarCircular_C::CustomMarqueeMask' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Timer) == 0x000490, "Member 'UProgressBarCircular_C::Timer' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, Entries) == 0x000498, "Member 'UProgressBarCircular_C::Entries' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, bIsProgressRunning) == 0x0004A8, "Member 'UProgressBarCircular_C::bIsProgressRunning' has a wrong offset!");
static_assert(offsetof(UProgressBarCircular_C, PauseWithGamePause) == 0x0004A9, "Member 'UProgressBarCircular_C::PauseWithGamePause' has a wrong offset!");

}

