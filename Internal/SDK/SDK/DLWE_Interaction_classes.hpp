﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLWE_Interaction

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DLWE_Interaction.DLWE_Interaction_C
// 0x0290 (0x0530 - 0x02A0)
class UDLWE_Interaction_C final : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AUltra_Dynamic_Weather_C*               UDW;                                               // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Size;                                              // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UDW_Valid;                                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUDS_DLWE_Interaction_Settings_C*       Interaction_Settings;                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Tick_Timer;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Tick_Interval;                             // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ticking;                                           // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Current_Average_Speed;                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Last_Trace_Location;                               // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Collision_Check_Radius;                            // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_of_Last_Material_Check;                   // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Puddle_Depth;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Snow_Depth;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dust_Depth;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Last_Draw_Location;                                // 0x0338(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Last_Tick_Location;                                // 0x0350(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed_Total;                                       // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                Speed_History;                                     // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Speed_Step;                                        // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Ground_Location;                                   // 0x0388(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Ground_Normal;                                     // 0x03A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Snow_Trail_Particles;                              // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Puddle_Ripple_System;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Water_Movement_Sound;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Snow_Movement_Sound;                               // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Sound_Update_Timer;                                // 0x03D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Snow_Sound_Volume;                         // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed_On_This_Tick;                                // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Snow_Sound_Target_Volume;                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Current_Water_Sound_Volume;                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Landscape_Hit;                                     // 0x0400(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Run_General_Surface_Impacts;                       // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E9[0x7];                                      // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Puddle_Fluid_Depth;                                // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Water_Sound_Target_Volume;                         // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hit_Puddle_Fluid_Volume;                           // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_501[0x7];                                      // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Dust_Threshold_Distance;                           // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Puddle_Threshold_Distance;                         // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Last_Update_Hit_Landscape;                         // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Non_Mobile_Features;                           // 0x0519(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A[0x6];                                      // 0x051A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FHitResult& Ground_Collision_Hit)> Impacted_Ground;   // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Activated_Component(class UActorComponent* Component, bool bReset);
	void Clear_Position_History();
	double Collision_Trace_Length();
	void Create_Persistent_Sound_and_Niagara_Components();
	void Deactivated_Component(class UActorComponent* Component);
	void Disable_Sound_and_Particles();
	void Distance_Check();
	void Draw_Surface_Interactions();
	void ExecuteUbergraph_DLWE_Interaction(int32 EntryPoint);
	void General_Surface_Impact();
	void Get_UDW();
	void Impact_Surface();
	void Play_Puddle_Splash_Sound();
	void Puddle_Impact();
	void Query_Puddle_Volume(TArray<struct FHitResult>& Hits);
	void ReceiveBeginPlay();
	void Ripple_Size(double* Size_0);
	void Set_Current_Speed();
	void Dust_Impact();
	void Sound_Update();
	void Spawn_Ripple(const struct FVector& Location, const struct FVector& Normal, double Size_0);
	void Startup_Variables();
	void Stop_Running();
	void Tick_Function();
	void Trace_for_DLWE_Surface();
	void Update_Snow_Sound_Target_Volume();
	void Update_Water_Sound_Target_Volume();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DLWE_Interaction_C">();
	}
	static class UDLWE_Interaction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLWE_Interaction_C>();
	}
};
static_assert(alignof(UDLWE_Interaction_C) == 0x000010, "Wrong alignment on UDLWE_Interaction_C");
static_assert(sizeof(UDLWE_Interaction_C) == 0x000530, "Wrong size on UDLWE_Interaction_C");
static_assert(offsetof(UDLWE_Interaction_C, UberGraphFrame) == 0x0002A0, "Member 'UDLWE_Interaction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, UDW) == 0x0002A8, "Member 'UDLWE_Interaction_C::UDW' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Size) == 0x0002B0, "Member 'UDLWE_Interaction_C::Size' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, UDW_Valid) == 0x0002B8, "Member 'UDLWE_Interaction_C::UDW_Valid' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Interaction_Settings) == 0x0002C0, "Member 'UDLWE_Interaction_C::Interaction_Settings' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Tick_Timer) == 0x0002C8, "Member 'UDLWE_Interaction_C::Tick_Timer' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Current_Tick_Interval) == 0x0002D0, "Member 'UDLWE_Interaction_C::Current_Tick_Interval' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Ticking) == 0x0002D8, "Member 'UDLWE_Interaction_C::Ticking' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Current_Average_Speed) == 0x0002E0, "Member 'UDLWE_Interaction_C::Current_Average_Speed' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Last_Trace_Location) == 0x0002E8, "Member 'UDLWE_Interaction_C::Last_Trace_Location' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Collision_Check_Radius) == 0x000300, "Member 'UDLWE_Interaction_C::Collision_Check_Radius' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Location_of_Last_Material_Check) == 0x000308, "Member 'UDLWE_Interaction_C::Location_of_Last_Material_Check' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Puddle_Depth) == 0x000320, "Member 'UDLWE_Interaction_C::Puddle_Depth' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Snow_Depth) == 0x000328, "Member 'UDLWE_Interaction_C::Snow_Depth' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Dust_Depth) == 0x000330, "Member 'UDLWE_Interaction_C::Dust_Depth' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Last_Draw_Location) == 0x000338, "Member 'UDLWE_Interaction_C::Last_Draw_Location' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Last_Tick_Location) == 0x000350, "Member 'UDLWE_Interaction_C::Last_Tick_Location' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Speed_Total) == 0x000368, "Member 'UDLWE_Interaction_C::Speed_Total' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Speed_History) == 0x000370, "Member 'UDLWE_Interaction_C::Speed_History' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Speed_Step) == 0x000380, "Member 'UDLWE_Interaction_C::Speed_Step' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Ground_Location) == 0x000388, "Member 'UDLWE_Interaction_C::Ground_Location' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Ground_Normal) == 0x0003A0, "Member 'UDLWE_Interaction_C::Ground_Normal' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Snow_Trail_Particles) == 0x0003B8, "Member 'UDLWE_Interaction_C::Snow_Trail_Particles' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Puddle_Ripple_System) == 0x0003C0, "Member 'UDLWE_Interaction_C::Puddle_Ripple_System' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Water_Movement_Sound) == 0x0003C8, "Member 'UDLWE_Interaction_C::Water_Movement_Sound' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Snow_Movement_Sound) == 0x0003D0, "Member 'UDLWE_Interaction_C::Snow_Movement_Sound' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Sound_Update_Timer) == 0x0003D8, "Member 'UDLWE_Interaction_C::Sound_Update_Timer' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Current_Snow_Sound_Volume) == 0x0003E0, "Member 'UDLWE_Interaction_C::Current_Snow_Sound_Volume' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Speed_On_This_Tick) == 0x0003E8, "Member 'UDLWE_Interaction_C::Speed_On_This_Tick' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Snow_Sound_Target_Volume) == 0x0003F0, "Member 'UDLWE_Interaction_C::Snow_Sound_Target_Volume' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Current_Water_Sound_Volume) == 0x0003F8, "Member 'UDLWE_Interaction_C::Current_Water_Sound_Volume' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Landscape_Hit) == 0x000400, "Member 'UDLWE_Interaction_C::Landscape_Hit' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Run_General_Surface_Impacts) == 0x0004E8, "Member 'UDLWE_Interaction_C::Run_General_Surface_Impacts' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Puddle_Fluid_Depth) == 0x0004F0, "Member 'UDLWE_Interaction_C::Puddle_Fluid_Depth' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Water_Sound_Target_Volume) == 0x0004F8, "Member 'UDLWE_Interaction_C::Water_Sound_Target_Volume' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Hit_Puddle_Fluid_Volume) == 0x000500, "Member 'UDLWE_Interaction_C::Hit_Puddle_Fluid_Volume' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Dust_Threshold_Distance) == 0x000508, "Member 'UDLWE_Interaction_C::Dust_Threshold_Distance' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Puddle_Threshold_Distance) == 0x000510, "Member 'UDLWE_Interaction_C::Puddle_Threshold_Distance' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Last_Update_Hit_Landscape) == 0x000518, "Member 'UDLWE_Interaction_C::Last_Update_Hit_Landscape' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Use_Non_Mobile_Features) == 0x000519, "Member 'UDLWE_Interaction_C::Use_Non_Mobile_Features' has a wrong offset!");
static_assert(offsetof(UDLWE_Interaction_C, Impacted_Ground) == 0x000520, "Member 'UDLWE_Interaction_C::Impacted_Ground' has a wrong offset!");

}

