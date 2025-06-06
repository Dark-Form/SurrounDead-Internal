﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StandardNote

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "S_JigPayload_structs.hpp"
#include "S_RandomStatsConfig_structs.hpp"


namespace SDK::Params
{

// Function BP_StandardNote.BP_StandardNote_C.BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature final
{
public:
	bool                                          bIsBeyondLastLayer;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LayerIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSeen;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(sizeof(BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x00000C, "Wrong size on BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(offsetof(BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsBeyondLastLayer) == 0x000000, "Member 'BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, LayerIndex) == 0x000004, "Member 'BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsSeen) == 0x000008, "Member 'BP_StandardNote_C_BndEvt__BP_MPLootContainer_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsSeen' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.ExecuteUbergraph_BP_StandardNote
// 0x0210 (0x0210 - 0x0000)
struct BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FText>                K2Node_MakeMap_Map;                                // 0x0008(0x0050)()
	TMap<class FName, class FText>                K2Node_MakeMap_Map_1;                              // 0x0058(0x0050)()
	bool                                          CallFunc_GetBoolCVar_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class FText>        K2Node_MakeMap_Map_2;                              // 0x00B0(0x0050)(ConstParm)
	class AHUD_Game_C*                            CallFunc_GetHUD_HUD;                               // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD_Game_C*                            CallFunc_GetHUD_HUD_1;                             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_1;                   // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_Option;                               // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPickupName_Result;                     // 0x0120(0x0018)()
	class AActor*                                 K2Node_Event_InteractingActor;                     // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class FText>        K2Node_Event_Options;                              // 0x0140(0x0050)(ConstParm)
	struct FGameplayTag                           K2Node_Event_Option_1;                             // 0x0190(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_2;                   // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_Option_2;                             // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_ByActor;                              // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_JigPayload                          K2Node_Event_Payload;                              // 0x01C0(0x0030)(HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_InteractingActor_3;                   // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsBeyondLastLayer;     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x3];                                      // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_LayerIndex;             // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSeen;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULetterUI_C*                            CallFunc_Create_ReturnValue;                       // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote) == 0x000008, "Wrong alignment on BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote");
static_assert(sizeof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote) == 0x000210, "Wrong size on BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, EntryPoint) == 0x000000, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_MakeMap_Map) == 0x000008, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_MakeMap_Map_1) == 0x000058, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_MakeMap_Map_1' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_GetBoolCVar_ReturnValue) == 0x0000A8, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_GetBoolCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_MakeMap_Map_2) == 0x0000B0, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_MakeMap_Map_2' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_GetHUD_HUD) == 0x000100, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_GetHUD_HUD' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_GetHUD_HUD_1) == 0x000108, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_GetHUD_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_InteractingActor_1) == 0x000110, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_InteractingActor_1' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_Option) == 0x000118, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_Option' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_GetPickupName_Result) == 0x000120, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_GetPickupName_Result' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_InteractingActor) == 0x000138, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_InteractingActor' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_Options) == 0x000140, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_Options' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_Option_1) == 0x000190, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_Option_1' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_GetPlayerPawn_ReturnValue) == 0x000198, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_GetPlayerController_ReturnValue) == 0x0001A0, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_InteractingActor_2) == 0x0001A8, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_InteractingActor_2' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_Option_2) == 0x0001B0, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_Option_2' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_ByActor) == 0x0001B8, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_ByActor' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_Payload) == 0x0001C0, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_Payload' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_Event_InteractingActor_3) == 0x0001F0, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_Event_InteractingActor_3' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_ComponentBoundEvent_bIsBeyondLastLayer) == 0x0001F8, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_ComponentBoundEvent_bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_ComponentBoundEvent_LayerIndex) == 0x0001FC, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_ComponentBoundEvent_LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, K2Node_ComponentBoundEvent_bIsSeen) == 0x000200, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::K2Node_ComponentBoundEvent_bIsSeen' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote, CallFunc_Create_ReturnValue) == 0x000208, "Member 'BP_StandardNote_C_ExecuteUbergraph_BP_StandardNote::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.GetInteractOptions
// 0x00A0 (0x00A0 - 0x0000)
struct BP_StandardNote_C_GetInteractOptions final
{
public:
	TMap<struct FGameplayTag, class FText>        Options;                                           // 0x0000(0x0050)(Parm, OutParm)
	TMap<struct FGameplayTag, class FText>        K2Node_MakeMap_Map;                                // 0x0050(0x0050)()
};
static_assert(alignof(BP_StandardNote_C_GetInteractOptions) == 0x000008, "Wrong alignment on BP_StandardNote_C_GetInteractOptions");
static_assert(sizeof(BP_StandardNote_C_GetInteractOptions) == 0x0000A0, "Wrong size on BP_StandardNote_C_GetInteractOptions");
static_assert(offsetof(BP_StandardNote_C_GetInteractOptions, Options) == 0x000000, "Member 'BP_StandardNote_C_GetInteractOptions::Options' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_GetInteractOptions, K2Node_MakeMap_Map) == 0x000050, "Member 'BP_StandardNote_C_GetInteractOptions::K2Node_MakeMap_Map' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.GetItemInfo
// 0x0078 (0x0078 - 0x0000)
struct BP_StandardNote_C_GetItemInfo final
{
public:
	class UJigsawItem_DataAsset_C*                Info;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_RandomStatsConfig                   RandomStatsConfig;                                 // 0x0010(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	TMap<class FString, class FString>            CustomData;                                        // 0x0028(0x0050)(Parm, OutParm)
};
static_assert(alignof(BP_StandardNote_C_GetItemInfo) == 0x000008, "Wrong alignment on BP_StandardNote_C_GetItemInfo");
static_assert(sizeof(BP_StandardNote_C_GetItemInfo) == 0x000078, "Wrong size on BP_StandardNote_C_GetItemInfo");
static_assert(offsetof(BP_StandardNote_C_GetItemInfo, Info) == 0x000000, "Member 'BP_StandardNote_C_GetItemInfo::Info' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_GetItemInfo, Count) == 0x000008, "Member 'BP_StandardNote_C_GetItemInfo::Count' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_GetItemInfo, RandomStatsConfig) == 0x000010, "Member 'BP_StandardNote_C_GetItemInfo::RandomStatsConfig' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_GetItemInfo, CustomData) == 0x000028, "Member 'BP_StandardNote_C_GetItemInfo::CustomData' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.GetJigMultiplayerComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_StandardNote_C_GetJigMultiplayerComponent final
{
public:
	class UActorComponent*                        JigComp;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_GetJigMultiplayerComponent) == 0x000008, "Wrong alignment on BP_StandardNote_C_GetJigMultiplayerComponent");
static_assert(sizeof(BP_StandardNote_C_GetJigMultiplayerComponent) == 0x000008, "Wrong size on BP_StandardNote_C_GetJigMultiplayerComponent");
static_assert(offsetof(BP_StandardNote_C_GetJigMultiplayerComponent, JigComp) == 0x000000, "Member 'BP_StandardNote_C_GetJigMultiplayerComponent::JigComp' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.GetMainSceneComp
// 0x0008 (0x0008 - 0x0000)
struct BP_StandardNote_C_GetMainSceneComp final
{
public:
	class USceneComponent*                        Comp;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_GetMainSceneComp) == 0x000008, "Wrong alignment on BP_StandardNote_C_GetMainSceneComp");
static_assert(sizeof(BP_StandardNote_C_GetMainSceneComp) == 0x000008, "Wrong size on BP_StandardNote_C_GetMainSceneComp");
static_assert(offsetof(BP_StandardNote_C_GetMainSceneComp, Comp) == 0x000000, "Member 'BP_StandardNote_C_GetMainSceneComp::Comp' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.GetPickupName
// 0x0018 (0x0018 - 0x0000)
struct BP_StandardNote_C_GetPickupName final
{
public:
	class FText                                   Result;                                            // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_StandardNote_C_GetPickupName) == 0x000008, "Wrong alignment on BP_StandardNote_C_GetPickupName");
static_assert(sizeof(BP_StandardNote_C_GetPickupName) == 0x000018, "Wrong size on BP_StandardNote_C_GetPickupName");
static_assert(offsetof(BP_StandardNote_C_GetPickupName, Result) == 0x000000, "Member 'BP_StandardNote_C_GetPickupName::Result' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.JigCanInteract
// 0x0001 (0x0001 - 0x0000)
struct BP_StandardNote_C_JigCanInteract final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_JigCanInteract) == 0x000001, "Wrong alignment on BP_StandardNote_C_JigCanInteract");
static_assert(sizeof(BP_StandardNote_C_JigCanInteract) == 0x000001, "Wrong size on BP_StandardNote_C_JigCanInteract");
static_assert(offsetof(BP_StandardNote_C_JigCanInteract, Result) == 0x000000, "Member 'BP_StandardNote_C_JigCanInteract::Result' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.JigSetCanInteract
// 0x0003 (0x0003 - 0x0000)
struct BP_StandardNote_C_JigSetCanInteract final
{
public:
	bool                                          CanInteract;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnablePhysics;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_JigSetCanInteract) == 0x000001, "Wrong alignment on BP_StandardNote_C_JigSetCanInteract");
static_assert(sizeof(BP_StandardNote_C_JigSetCanInteract) == 0x000003, "Wrong size on BP_StandardNote_C_JigSetCanInteract");
static_assert(offsetof(BP_StandardNote_C_JigSetCanInteract, CanInteract) == 0x000000, "Member 'BP_StandardNote_C_JigSetCanInteract::CanInteract' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_JigSetCanInteract, EnablePhysics) == 0x000001, "Member 'BP_StandardNote_C_JigSetCanInteract::EnablePhysics' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_JigSetCanInteract, Result) == 0x000002, "Member 'BP_StandardNote_C_JigSetCanInteract::Result' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.OnBeginInteract
// 0x0058 (0x0058 - 0x0000)
struct BP_StandardNote_C_OnBeginInteract final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class FText>        Options;                                           // 0x0008(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_StandardNote_C_OnBeginInteract) == 0x000008, "Wrong alignment on BP_StandardNote_C_OnBeginInteract");
static_assert(sizeof(BP_StandardNote_C_OnBeginInteract) == 0x000058, "Wrong size on BP_StandardNote_C_OnBeginInteract");
static_assert(offsetof(BP_StandardNote_C_OnBeginInteract, InteractingActor) == 0x000000, "Member 'BP_StandardNote_C_OnBeginInteract::InteractingActor' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnBeginInteract, Options) == 0x000008, "Member 'BP_StandardNote_C_OnBeginInteract::Options' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.OnExecuteInteract
// 0x0010 (0x0010 - 0x0000)
struct BP_StandardNote_C_OnExecuteInteract final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Option;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_OnExecuteInteract) == 0x000008, "Wrong alignment on BP_StandardNote_C_OnExecuteInteract");
static_assert(sizeof(BP_StandardNote_C_OnExecuteInteract) == 0x000010, "Wrong size on BP_StandardNote_C_OnExecuteInteract");
static_assert(offsetof(BP_StandardNote_C_OnExecuteInteract, InteractingActor) == 0x000000, "Member 'BP_StandardNote_C_OnExecuteInteract::InteractingActor' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnExecuteInteract, Option) == 0x000008, "Member 'BP_StandardNote_C_OnExecuteInteract::Option' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.OnExecuteInteractDialogue
// 0x0008 (0x0008 - 0x0000)
struct BP_StandardNote_C_OnExecuteInteractDialogue final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_OnExecuteInteractDialogue) == 0x000008, "Wrong alignment on BP_StandardNote_C_OnExecuteInteractDialogue");
static_assert(sizeof(BP_StandardNote_C_OnExecuteInteractDialogue) == 0x000008, "Wrong size on BP_StandardNote_C_OnExecuteInteractDialogue");
static_assert(offsetof(BP_StandardNote_C_OnExecuteInteractDialogue, InteractingActor) == 0x000000, "Member 'BP_StandardNote_C_OnExecuteInteractDialogue::InteractingActor' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.OnRequestServerInteract
// 0x0048 (0x0048 - 0x0000)
struct BP_StandardNote_C_OnRequestServerInteract final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Option;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FS_JigPayload                          Payload;                                           // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_OnRequestServerInteract) == 0x000008, "Wrong alignment on BP_StandardNote_C_OnRequestServerInteract");
static_assert(sizeof(BP_StandardNote_C_OnRequestServerInteract) == 0x000048, "Wrong size on BP_StandardNote_C_OnRequestServerInteract");
static_assert(offsetof(BP_StandardNote_C_OnRequestServerInteract, Actor) == 0x000000, "Member 'BP_StandardNote_C_OnRequestServerInteract::Actor' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnRequestServerInteract, Option) == 0x000008, "Member 'BP_StandardNote_C_OnRequestServerInteract::Option' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnRequestServerInteract, Payload) == 0x000010, "Member 'BP_StandardNote_C_OnRequestServerInteract::Payload' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnRequestServerInteract, Result) == 0x000040, "Member 'BP_StandardNote_C_OnRequestServerInteract::Result' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.OnServerExecuteInteract
// 0x0040 (0x0040 - 0x0000)
struct BP_StandardNote_C_OnServerExecuteInteract final
{
public:
	struct FGameplayTag                           Option;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ByActor;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_JigPayload                          Payload;                                           // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_OnServerExecuteInteract) == 0x000008, "Wrong alignment on BP_StandardNote_C_OnServerExecuteInteract");
static_assert(sizeof(BP_StandardNote_C_OnServerExecuteInteract) == 0x000040, "Wrong size on BP_StandardNote_C_OnServerExecuteInteract");
static_assert(offsetof(BP_StandardNote_C_OnServerExecuteInteract, Option) == 0x000000, "Member 'BP_StandardNote_C_OnServerExecuteInteract::Option' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnServerExecuteInteract, ByActor) == 0x000008, "Member 'BP_StandardNote_C_OnServerExecuteInteract::ByActor' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_OnServerExecuteInteract, Payload) == 0x000010, "Member 'BP_StandardNote_C_OnServerExecuteInteract::Payload' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.OnStopExecuteInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_StandardNote_C_OnStopExecuteInteract final
{
public:
	class AActor*                                 InteractingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_OnStopExecuteInteract) == 0x000008, "Wrong alignment on BP_StandardNote_C_OnStopExecuteInteract");
static_assert(sizeof(BP_StandardNote_C_OnStopExecuteInteract) == 0x000008, "Wrong size on BP_StandardNote_C_OnStopExecuteInteract");
static_assert(offsetof(BP_StandardNote_C_OnStopExecuteInteract, InteractingActor) == 0x000000, "Member 'BP_StandardNote_C_OnStopExecuteInteract::InteractingActor' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.SetInteractOption
// 0x0008 (0x0008 - 0x0000)
struct BP_StandardNote_C_SetInteractOption final
{
public:
	struct FGameplayTag                           Option;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_SetInteractOption) == 0x000004, "Wrong alignment on BP_StandardNote_C_SetInteractOption");
static_assert(sizeof(BP_StandardNote_C_SetInteractOption) == 0x000008, "Wrong size on BP_StandardNote_C_SetInteractOption");
static_assert(offsetof(BP_StandardNote_C_SetInteractOption, Option) == 0x000000, "Member 'BP_StandardNote_C_SetInteractOption::Option' has a wrong offset!");

// Function BP_StandardNote.BP_StandardNote_C.SetPickupCount
// 0x0008 (0x0008 - 0x0000)
struct BP_StandardNote_C_SetPickupCount final
{
public:
	int32                                         NewCount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StandardNote_C_SetPickupCount) == 0x000004, "Wrong alignment on BP_StandardNote_C_SetPickupCount");
static_assert(sizeof(BP_StandardNote_C_SetPickupCount) == 0x000008, "Wrong size on BP_StandardNote_C_SetPickupCount");
static_assert(offsetof(BP_StandardNote_C_SetPickupCount, NewCount) == 0x000000, "Member 'BP_StandardNote_C_SetPickupCount::NewCount' has a wrong offset!");
static_assert(offsetof(BP_StandardNote_C_SetPickupCount, Result) == 0x000004, "Member 'BP_StandardNote_C_SetPickupCount::Result' has a wrong offset!");

}

