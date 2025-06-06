﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpecOpsNVGLocalAttachment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AMainLocalAttachment_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpecOpsNVGLocalAttachment.BP_SpecOpsNVGLocalAttachment_C
// 0x0018 (0x02E8 - 0x02D0)
class ABP_SpecOpsNVGLocalAttachment_C final : public ABP_AMainLocalAttachment_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SpecOpsNVGLocalAttachment_C;     // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         NVGTL_TL_F30B97124F77A6BEA413A1B19A8FF24D;         // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            NVGTL__Direction_F30B97124F77A6BEA413A1B19A8FF24D; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     NVGTL;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SpecOpsNVGLocalAttachment(int32 EntryPoint);
	void NVGTL__FinishedFunc();
	void NVGTL__UpdateFunc();
	void Jig_SetAttachmentActiveState(const struct FGameplayTag& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpecOpsNVGLocalAttachment_C">();
	}
	static class ABP_SpecOpsNVGLocalAttachment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpecOpsNVGLocalAttachment_C>();
	}
};
static_assert(alignof(ABP_SpecOpsNVGLocalAttachment_C) == 0x000008, "Wrong alignment on ABP_SpecOpsNVGLocalAttachment_C");
static_assert(sizeof(ABP_SpecOpsNVGLocalAttachment_C) == 0x0002E8, "Wrong size on ABP_SpecOpsNVGLocalAttachment_C");
static_assert(offsetof(ABP_SpecOpsNVGLocalAttachment_C, UberGraphFrame_BP_SpecOpsNVGLocalAttachment_C) == 0x0002D0, "Member 'ABP_SpecOpsNVGLocalAttachment_C::UberGraphFrame_BP_SpecOpsNVGLocalAttachment_C' has a wrong offset!");
static_assert(offsetof(ABP_SpecOpsNVGLocalAttachment_C, NVGTL_TL_F30B97124F77A6BEA413A1B19A8FF24D) == 0x0002D8, "Member 'ABP_SpecOpsNVGLocalAttachment_C::NVGTL_TL_F30B97124F77A6BEA413A1B19A8FF24D' has a wrong offset!");
static_assert(offsetof(ABP_SpecOpsNVGLocalAttachment_C, NVGTL__Direction_F30B97124F77A6BEA413A1B19A8FF24D) == 0x0002DC, "Member 'ABP_SpecOpsNVGLocalAttachment_C::NVGTL__Direction_F30B97124F77A6BEA413A1B19A8FF24D' has a wrong offset!");
static_assert(offsetof(ABP_SpecOpsNVGLocalAttachment_C, NVGTL) == 0x0002E0, "Member 'ABP_SpecOpsNVGLocalAttachment_C::NVGTL' has a wrong offset!");

}

