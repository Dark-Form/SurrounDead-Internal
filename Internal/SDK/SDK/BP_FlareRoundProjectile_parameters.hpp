﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlareRoundProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FlareRoundProjectile.BP_FlareRoundProjectile_C.SkillCheck
// 0x0028 (0x0028 - 0x0000)
struct BP_FlareRoundProjectile_C_SkillCheck final
{
public:
	double                                        Damage;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Multiplier;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTechnologyUnlocked_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FlareRoundProjectile_C_SkillCheck) == 0x000008, "Wrong alignment on BP_FlareRoundProjectile_C_SkillCheck");
static_assert(sizeof(BP_FlareRoundProjectile_C_SkillCheck) == 0x000028, "Wrong size on BP_FlareRoundProjectile_C_SkillCheck");
static_assert(offsetof(BP_FlareRoundProjectile_C_SkillCheck, Damage) == 0x000000, "Member 'BP_FlareRoundProjectile_C_SkillCheck::Damage' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_SkillCheck, Multiplier) == 0x000008, "Member 'BP_FlareRoundProjectile_C_SkillCheck::Multiplier' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_SkillCheck, CallFunc_IsTechnologyUnlocked_ReturnValue) == 0x000010, "Member 'BP_FlareRoundProjectile_C_SkillCheck::CallFunc_IsTechnologyUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_SkillCheck, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'BP_FlareRoundProjectile_C_SkillCheck::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_SkillCheck, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_FlareRoundProjectile_C_SkillCheck::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_FlareRoundProjectile.BP_FlareRoundProjectile_C.ExecuteUbergraph_BP_FlareRoundProjectile
// 0x0120 (0x0120 - 0x0000)
struct BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0038(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile) == 0x000008, "Wrong alignment on BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile");
static_assert(sizeof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile) == 0x000120, "Wrong size on BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile");
static_assert(offsetof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile, EntryPoint) == 0x000000, "Member 'BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile, K2Node_ComponentBoundEvent_HitComponent) == 0x000008, "Member 'BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000020, "Member 'BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile, K2Node_ComponentBoundEvent_Hit) == 0x000038, "Member 'BP_FlareRoundProjectile_C_ExecuteUbergraph_BP_FlareRoundProjectile::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");

// Function BP_FlareRoundProjectile.BP_FlareRoundProjectile_C.BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_FlareRoundProjectile_C_BndEvt__BP_ProjectileRocket_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

}

