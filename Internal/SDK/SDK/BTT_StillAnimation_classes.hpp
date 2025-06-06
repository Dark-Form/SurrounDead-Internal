﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_StillAnimation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_StillAnimation.BTT_StillAnimation_C
// 0x0020 (0x00C8 - 0x00A8)
class UBTT_StillAnimation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SmartAIComponent_C*                 AI_Component;                                      // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Current_Anim;                                      // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Current_Anim_Index;                                // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_StillAnimation(int32 EntryPoint);
	void Next_Animation();
	void ReceiveExecute(class AActor* OwnerActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_StillAnimation_C">();
	}
	static class UBTT_StillAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_StillAnimation_C>();
	}
};
static_assert(alignof(UBTT_StillAnimation_C) == 0x000008, "Wrong alignment on UBTT_StillAnimation_C");
static_assert(sizeof(UBTT_StillAnimation_C) == 0x0000C8, "Wrong size on UBTT_StillAnimation_C");
static_assert(offsetof(UBTT_StillAnimation_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_StillAnimation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_StillAnimation_C, AI_Component) == 0x0000B0, "Member 'UBTT_StillAnimation_C::AI_Component' has a wrong offset!");
static_assert(offsetof(UBTT_StillAnimation_C, Current_Anim) == 0x0000B8, "Member 'UBTT_StillAnimation_C::Current_Anim' has a wrong offset!");
static_assert(offsetof(UBTT_StillAnimation_C, Current_Anim_Index) == 0x0000C0, "Member 'UBTT_StillAnimation_C::Current_Anim_Index' has a wrong offset!");

}

