﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_FindRoamLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_FindRoamLocation.BTT_FindRoamLocation_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTT_FindRoamLocation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SmartAIComponent_C*                 AI_Component;                                      // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Move_To_Location;                                  // 0x00B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Find_Location_Checks;                              // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Base_Roam_Location(struct FVector* Location);
	void ExecuteUbergraph_BTT_FindRoamLocation(int32 EntryPoint);
	void ReceiveExecute(class AActor* OwnerActor);
	void Roam_Location(struct FVector* Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_FindRoamLocation_C">();
	}
	static class UBTT_FindRoamLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_FindRoamLocation_C>();
	}
};
static_assert(alignof(UBTT_FindRoamLocation_C) == 0x000008, "Wrong alignment on UBTT_FindRoamLocation_C");
static_assert(sizeof(UBTT_FindRoamLocation_C) == 0x0000D8, "Wrong size on UBTT_FindRoamLocation_C");
static_assert(offsetof(UBTT_FindRoamLocation_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_FindRoamLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_FindRoamLocation_C, AI_Component) == 0x0000B0, "Member 'UBTT_FindRoamLocation_C::AI_Component' has a wrong offset!");
static_assert(offsetof(UBTT_FindRoamLocation_C, Move_To_Location) == 0x0000B8, "Member 'UBTT_FindRoamLocation_C::Move_To_Location' has a wrong offset!");
static_assert(offsetof(UBTT_FindRoamLocation_C, Find_Location_Checks) == 0x0000D0, "Member 'UBTT_FindRoamLocation_C::Find_Location_Checks' has a wrong offset!");

}

