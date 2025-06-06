﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_ZombieDog

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimBP_ZombieDog_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_ZombieDog.AnimBP_ZombieDog_C
// 0x0510 (0x0860 - 0x0350)
class UAnimBP_ZombieDog_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_ZombieDog::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;             // 0x0358(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03B8(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x03E0(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0450(0x0020)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x0470(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x04E8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0508(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x05D0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0650(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0678(0x00F0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0768(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x07B0(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x07D8(0x0048)()
	struct FVector                                K2Node_PropertyAccess;                             // 0x0820(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dead;                                              // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_839[0x7];                                      // 0x0839(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Speed;                                             // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterZombie_C*                     Zombie;                                            // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTransitionToMovement_;                          // 0x0850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanTransitionToIdle_;                              // 0x0851(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimNotify_Footstep();
	void BlueprintInitializeAnimation();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void CombatState(int32 BlendSpace);
	void DeathState(bool Dead_0);
	void ExecuteUbergraph_AnimBP_ZombieDog(int32 EntryPoint);
	void GetSpeed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_ZombieDog_C">();
	}
	static class UAnimBP_ZombieDog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_ZombieDog_C>();
	}
};
static_assert(alignof(UAnimBP_ZombieDog_C) == 0x000010, "Wrong alignment on UAnimBP_ZombieDog_C");
static_assert(sizeof(UAnimBP_ZombieDog_C) == 0x000860, "Wrong size on UAnimBP_ZombieDog_C");
static_assert(offsetof(UAnimBP_ZombieDog_C, UberGraphFrame) == 0x000350, "Member 'UAnimBP_ZombieDog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, __AnimBlueprintMutables) == 0x000358, "Member 'UAnimBP_ZombieDog_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UAnimBP_ZombieDog_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UAnimBP_ZombieDog_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_Root) == 0x000370, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_TransitionResult_1) == 0x000390, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_TransitionResult) == 0x0003B8, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_BlendSpacePlayer) == 0x0003E0, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_StateResult_1) == 0x000450, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_RandomPlayer) == 0x000470, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_StateResult) == 0x0004E8, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_StateMachine) == 0x000508, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_SaveCachedPose) == 0x0005D0, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_UseCachedPose_1) == 0x000650, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_LayeredBoneBlend) == 0x000678, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_Slot_1) == 0x000768, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_UseCachedPose) == 0x0007B0, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, AnimGraphNode_Slot) == 0x0007D8, "Member 'UAnimBP_ZombieDog_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, K2Node_PropertyAccess) == 0x000820, "Member 'UAnimBP_ZombieDog_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, Dead) == 0x000838, "Member 'UAnimBP_ZombieDog_C::Dead' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, Speed) == 0x000840, "Member 'UAnimBP_ZombieDog_C::Speed' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, Zombie) == 0x000848, "Member 'UAnimBP_ZombieDog_C::Zombie' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, CanTransitionToMovement_) == 0x000850, "Member 'UAnimBP_ZombieDog_C::CanTransitionToMovement_' has a wrong offset!");
static_assert(offsetof(UAnimBP_ZombieDog_C, CanTransitionToIdle_) == 0x000851, "Member 'UAnimBP_ZombieDog_C::CanTransitionToIdle_' has a wrong offset!");

}

