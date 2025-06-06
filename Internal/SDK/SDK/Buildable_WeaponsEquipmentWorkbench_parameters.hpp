﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_WeaponsEquipmentWorkbench

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "S_JigPayload_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Buildable_WeaponsEquipmentWorkbench.Buildable_WeaponsEquipmentWorkbench_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature final
{
public:
	bool                                          bIsBeyondLastLayer;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LayerIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSeen;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(sizeof(Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x00000C, "Wrong size on Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsBeyondLastLayer) == 0x000000, "Member 'Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, LayerIndex) == 0x000004, "Member 'Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::LayerIndex' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsSeen) == 0x000008, "Member 'Buildable_WeaponsEquipmentWorkbench_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsSeen' has a wrong offset!");

// Function Buildable_WeaponsEquipmentWorkbench.Buildable_WeaponsEquipmentWorkbench_C.ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench
// 0x00E0 (0x00E0 - 0x0000)
struct Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsBeyondLastLayer;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_LayerIndex;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSeen;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetInventoryWidgetReference_InventoryWidgetRef; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInventoryWidgetReference_IsVisible_;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_CraftingWorkbenchUI_C*               K2Node_DynamicCast_AsW_Crafting_Workbench_UI;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Actor;                                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryVisible__Result;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface; // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1; // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RequestServerData_Result;                 // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Player_C>         K2Node_DynamicCast_AsBPI_Player;                   // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_SetupInventoryWidget_InventoryWidgetRef;  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_Option;                               // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_ByActor;                              // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_JigPayload                          K2Node_Event_Payload;                              // 0x00A8(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_AddJigWidgetToContent_Result;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench) == 0x000008, "Wrong alignment on Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench");
static_assert(sizeof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench) == 0x0000E0, "Wrong size on Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, EntryPoint) == 0x000000, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::EntryPoint' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_ComponentBoundEvent_bIsBeyondLastLayer) == 0x000004, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_ComponentBoundEvent_bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_ComponentBoundEvent_LayerIndex) == 0x000008, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_ComponentBoundEvent_LayerIndex' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_ComponentBoundEvent_bIsSeen) == 0x00000C, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_ComponentBoundEvent_bIsSeen' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_GetInventoryWidgetReference_InventoryWidgetRef) == 0x000010, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_GetInventoryWidgetReference_InventoryWidgetRef' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_GetInventoryWidgetReference_IsVisible_) == 0x000018, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_GetInventoryWidgetReference_IsVisible_' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_AsW_Crafting_Workbench_UI) == 0x000020, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_AsW_Crafting_Workbench_UI' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_K2_SetTimer_ReturnValue) == 0x000030, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_Event_Actor) == 0x000038, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_Event_Actor' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_IsInventoryVisible__Result) == 0x000040, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_IsInventoryVisible__Result' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_AsBP_Jig_Character_Interface) == 0x000048, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_AsBP_Jig_Character_Interface' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_AsBP_Jig_Character_Interface_1) == 0x000060, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_AsBP_Jig_Character_Interface_1' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_RequestServerData_Result) == 0x000071, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_RequestServerData_Result' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_AsBPI_Player) == 0x000078, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_AsBPI_Player' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_DynamicCast_bSuccess_3) == 0x000088, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_SetupInventoryWidget_InventoryWidgetRef) == 0x000090, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_SetupInventoryWidget_InventoryWidgetRef' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_Event_Option) == 0x000098, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_Event_Option' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_Event_ByActor) == 0x0000A0, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_Event_ByActor' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, K2Node_Event_Payload) == 0x0000A8, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::K2Node_Event_Payload' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, CallFunc_AddJigWidgetToContent_Result) == 0x0000D8, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::CallFunc_AddJigWidgetToContent_Result' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x0000D9, "Member 'Buildable_WeaponsEquipmentWorkbench_C_ExecuteUbergraph_Buildable_WeaponsEquipmentWorkbench::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");

// Function Buildable_WeaponsEquipmentWorkbench.Buildable_WeaponsEquipmentWorkbench_C.OnInteractBuildable
// 0x0008 (0x0008 - 0x0000)
struct Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable) == 0x000008, "Wrong alignment on Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable");
static_assert(sizeof(Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable) == 0x000008, "Wrong size on Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable, Actor) == 0x000000, "Member 'Buildable_WeaponsEquipmentWorkbench_C_OnInteractBuildable::Actor' has a wrong offset!");

// Function Buildable_WeaponsEquipmentWorkbench.Buildable_WeaponsEquipmentWorkbench_C.OnServerExecuteInteract
// 0x0040 (0x0040 - 0x0000)
struct Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract final
{
public:
	struct FGameplayTag                           Option;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ByActor;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_JigPayload                          Payload;                                           // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract) == 0x000008, "Wrong alignment on Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract");
static_assert(sizeof(Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract) == 0x000040, "Wrong size on Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract, Option) == 0x000000, "Member 'Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract::Option' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract, ByActor) == 0x000008, "Member 'Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract::ByActor' has a wrong offset!");
static_assert(offsetof(Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract, Payload) == 0x000010, "Member 'Buildable_WeaponsEquipmentWorkbench_C_OnServerExecuteInteract::Payload' has a wrong offset!");

}

