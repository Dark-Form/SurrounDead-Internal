﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SecurityCamera_AI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_SecurityCamera_AI.BP_SecurityCamera_AI_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature final
{
public:
	bool                                          bIsBeyondLastLayer;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LayerIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSeen;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(sizeof(BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature) == 0x00000C, "Wrong size on BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");
static_assert(offsetof(BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsBeyondLastLayer) == 0x000000, "Member 'BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, LayerIndex) == 0x000004, "Member 'BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature, bIsSeen) == 0x000008, "Member 'BP_SecurityCamera_AI_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature::bIsSeen' has a wrong offset!");

// Function BP_SecurityCamera_AI.BP_SecurityCamera_AI_C.ExecuteUbergraph_BP_SecurityCamera_AI
// 0x0098 (0x0098 - 0x0000)
struct BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_CustomEvent_Scale;                          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Damage;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      K2Node_Event_DamageType;                           // 0x0068(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            K2Node_Event_InstigatedBy;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsBeyondLastLayer;     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_LayerIndex;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSeen;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Server_Turret_Damaged_Damage_ImplicitCast; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI) == 0x000008, "Wrong alignment on BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI");
static_assert(sizeof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI) == 0x000098, "Wrong size on BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, EntryPoint) == 0x000000, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_CustomEvent_Scale) == 0x000008, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_CustomEvent_Scale' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000038, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000050, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000058, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_Event_Damage) == 0x000060, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_Event_DamageType) == 0x000068, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_Event_InstigatedBy) == 0x000070, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_Event_DamageCauser) == 0x000078, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_ComponentBoundEvent_bIsBeyondLastLayer) == 0x000080, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_ComponentBoundEvent_bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_ComponentBoundEvent_LayerIndex) == 0x000084, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_ComponentBoundEvent_LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_ComponentBoundEvent_bIsSeen) == 0x000088, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_ComponentBoundEvent_bIsSeen' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, K2Node_SwitchInteger_CmpSuccess) == 0x000089, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI, CallFunc_Server_Turret_Damaged_Damage_ImplicitCast) == 0x000090, "Member 'BP_SecurityCamera_AI_C_ExecuteUbergraph_BP_SecurityCamera_AI::CallFunc_Server_Turret_Damaged_Damage_ImplicitCast' has a wrong offset!");

// Function BP_SecurityCamera_AI.BP_SecurityCamera_AI_C.IsObjectDamageable?
// 0x0001 (0x0001 - 0x0000)
struct BP_SecurityCamera_AI_C_IsObjectDamageable_ final
{
public:
	bool                                          Damageable_;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SecurityCamera_AI_C_IsObjectDamageable_) == 0x000001, "Wrong alignment on BP_SecurityCamera_AI_C_IsObjectDamageable_");
static_assert(sizeof(BP_SecurityCamera_AI_C_IsObjectDamageable_) == 0x000001, "Wrong size on BP_SecurityCamera_AI_C_IsObjectDamageable_");
static_assert(offsetof(BP_SecurityCamera_AI_C_IsObjectDamageable_, Damageable_) == 0x000000, "Member 'BP_SecurityCamera_AI_C_IsObjectDamageable_::Damageable_' has a wrong offset!");

// Function BP_SecurityCamera_AI.BP_SecurityCamera_AI_C.Multicast Spawn Emitter
// 0x0018 (0x0018 - 0x0000)
struct BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter final
{
public:
	struct FVector                                Scale;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter) == 0x000008, "Wrong alignment on BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter");
static_assert(sizeof(BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter) == 0x000018, "Wrong size on BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter");
static_assert(offsetof(BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter, Scale) == 0x000000, "Member 'BP_SecurityCamera_AI_C_Multicast_Spawn_Emitter::Scale' has a wrong offset!");

// Function BP_SecurityCamera_AI.BP_SecurityCamera_AI_C.ReceiveAnyDamage
// 0x0020 (0x0020 - 0x0000)
struct BP_SecurityCamera_AI_C_ReceiveAnyDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SecurityCamera_AI_C_ReceiveAnyDamage) == 0x000008, "Wrong alignment on BP_SecurityCamera_AI_C_ReceiveAnyDamage");
static_assert(sizeof(BP_SecurityCamera_AI_C_ReceiveAnyDamage) == 0x000020, "Wrong size on BP_SecurityCamera_AI_C_ReceiveAnyDamage");
static_assert(offsetof(BP_SecurityCamera_AI_C_ReceiveAnyDamage, Damage) == 0x000000, "Member 'BP_SecurityCamera_AI_C_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'BP_SecurityCamera_AI_C_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'BP_SecurityCamera_AI_C_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_SecurityCamera_AI_C_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'BP_SecurityCamera_AI_C_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

}

