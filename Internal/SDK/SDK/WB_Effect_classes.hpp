﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Effect

#include "Basic.hpp"

#include "EEffectType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "ETriggerMethod_structs.hpp"
#include "S_Effects_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Effect.WB_Effect_C
// 0x0190 (0x0450 - 0x02C0)
class UWB_Effect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HighlightLoop;                                     // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeHighlight2;                                    // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeHighlight1;                                    // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                B_Content;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                b_HighlightLoop;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                B_Particle;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                B_Punctiform;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                B_SoundEffect;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                B_Stretched;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePunctiform;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageStretched;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Particle;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Particle_Container;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Punctiform;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Punctiform_Scale;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OV_Stretched_Scale;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Content;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Particle;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_EffectTextureType;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EProgressBarFillType                          FillType;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentPercent;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Effects                             Effect;                                            // 0x0378(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastPercent;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDesignTime;                                     // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A[0x6];                                      // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        UIAudio;                                           // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectActive;                                      // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FLinearColor& Color)> StartProgressChangeColor;       // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              StopProgressChangeColor;                           // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddAttributes(class UImage* Image);
	void AddEffect(const struct FS_Effects& Effect_0);
	void AddEffectTextureType();
	void Anim_Fade(bool FadeIn_0, double PlaybackSpeed);
	void Anim_Highlight1(double PlaybackSpeed);
	void Anim_Highlight2(double PlaybackSpeed);
	void Anim_HighlightLoop(bool StartStop, double PlaybackSpeed);
	void ClearParticles();
	void Construct();
	void CreateParticle(int32 NumParticles);
	void EventPreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Effect(int32 EntryPoint);
	double FindMinSize(const struct FVector2D& Size_0);
	void GetAddRotationToParticles(bool* Add_Rotation_to_Particles);
	void GetDecayTime(double* Decay_Time);
	void GetEffectAngle(double* Effect_Angle);
	void GetEffectColor(struct FLinearColor* Effect_Color);
	void GetEffectScale(struct FVector2D* EffectScale);
	void GetEffectShear(struct FVector2D* Effect_Shear);
	void GetEffectTexture(class UObject** Custom_Effect_Texture);
	void GetEffectTranslation(struct FVector2D* Transition);
	void GetEffectType(EEffectType* Effect_Texture_Type);
	void GetNumParticles(int32* NumParticles);
	void GetParticleSpread(double* Particle_Spread);
	void GetPlaybackSpeed(double* Playback_Speed);
	void GetProgressBar(class UProgressBarLinear_C* ProgressBar);
	void GetSoundEffect(class USoundBase** Sound_Effect);
	void GetSoundVolume(double* Sound_Volume_Multiplier);
	void GetSpecificPercentValue(double* Specific_Percent_Value);
	void GetTriggerMethod(ETriggerMethod* Trigger);
	bool IsEffectTypeParticle();
	bool IsEffectTypeProgressChangeColor();
	bool IsEffectTypeSoundEffect();
	bool IsEffectTypeSoundEffectLooped();
	bool IsTriggeredAlways();
	bool IsTriggeredAlwaysOnSpecificPercentValue();
	bool IsTriggerSpecificPercent();
	void OnAnimationFinished_Event_0();
	void OnAudioFinished_Event_0();
	void SetFillType(EProgressBarFillType FillType_0);
	void SetSize(const struct FVector2D& Size_0);
	void StartEffect();
	void StopEffect();
	void SwitchEffectType(int32 Index_0);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TriggerEffect();
	void UpdatePercent(double Percent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Effect_C">();
	}
	static class UWB_Effect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Effect_C>();
	}
};
static_assert(alignof(UWB_Effect_C) == 0x000008, "Wrong alignment on UWB_Effect_C");
static_assert(sizeof(UWB_Effect_C) == 0x000450, "Wrong size on UWB_Effect_C");
static_assert(offsetof(UWB_Effect_C, UberGraphFrame) == 0x0002C0, "Member 'UWB_Effect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, HighlightLoop) == 0x0002C8, "Member 'UWB_Effect_C::HighlightLoop' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, FadeHighlight2) == 0x0002D0, "Member 'UWB_Effect_C::FadeHighlight2' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, FadeHighlight1) == 0x0002D8, "Member 'UWB_Effect_C::FadeHighlight1' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, FadeIn) == 0x0002E0, "Member 'UWB_Effect_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, B_Content) == 0x0002E8, "Member 'UWB_Effect_C::B_Content' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, b_HighlightLoop) == 0x0002F0, "Member 'UWB_Effect_C::b_HighlightLoop' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, B_Particle) == 0x0002F8, "Member 'UWB_Effect_C::B_Particle' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, B_Punctiform) == 0x000300, "Member 'UWB_Effect_C::B_Punctiform' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, B_SoundEffect) == 0x000308, "Member 'UWB_Effect_C::B_SoundEffect' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, B_Stretched) == 0x000310, "Member 'UWB_Effect_C::B_Stretched' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, ImagePunctiform) == 0x000318, "Member 'UWB_Effect_C::ImagePunctiform' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, ImageStretched) == 0x000320, "Member 'UWB_Effect_C::ImageStretched' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, OV_Particle) == 0x000328, "Member 'UWB_Effect_C::OV_Particle' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, OV_Particle_Container) == 0x000330, "Member 'UWB_Effect_C::OV_Particle_Container' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, OV_Punctiform) == 0x000338, "Member 'UWB_Effect_C::OV_Punctiform' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, OV_Punctiform_Scale) == 0x000340, "Member 'UWB_Effect_C::OV_Punctiform_Scale' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, OV_Stretched_Scale) == 0x000348, "Member 'UWB_Effect_C::OV_Stretched_Scale' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, SB_Content) == 0x000350, "Member 'UWB_Effect_C::SB_Content' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, SB_Particle) == 0x000358, "Member 'UWB_Effect_C::SB_Particle' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, WS_EffectTextureType) == 0x000360, "Member 'UWB_Effect_C::WS_EffectTextureType' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, FillType) == 0x000368, "Member 'UWB_Effect_C::FillType' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, CurrentPercent) == 0x000370, "Member 'UWB_Effect_C::CurrentPercent' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, Effect) == 0x000378, "Member 'UWB_Effect_C::Effect' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, Size) == 0x000400, "Member 'UWB_Effect_C::Size' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, LastPercent) == 0x000410, "Member 'UWB_Effect_C::LastPercent' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, bIsDesignTime) == 0x000418, "Member 'UWB_Effect_C::bIsDesignTime' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, IsActive) == 0x000419, "Member 'UWB_Effect_C::IsActive' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, UIAudio) == 0x000420, "Member 'UWB_Effect_C::UIAudio' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, EffectActive) == 0x000428, "Member 'UWB_Effect_C::EffectActive' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, StartProgressChangeColor) == 0x000430, "Member 'UWB_Effect_C::StartProgressChangeColor' has a wrong offset!");
static_assert(offsetof(UWB_Effect_C, StopProgressChangeColor) == 0x000440, "Member 'UWB_Effect_C::StopProgressChangeColor' has a wrong offset!");

}

