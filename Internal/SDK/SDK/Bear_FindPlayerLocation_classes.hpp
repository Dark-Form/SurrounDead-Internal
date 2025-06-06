﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bear_FindPlayerLocation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bear_FindPlayerLocation.Bear_FindPlayerLocation_C
// 0x0030 (0x00D8 - 0x00A8)
class UBear_FindPlayerLocation_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 Location;                                          // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_Bear_FindPlayerLocation(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bear_FindPlayerLocation_C">();
	}
	static class UBear_FindPlayerLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBear_FindPlayerLocation_C>();
	}
};
static_assert(alignof(UBear_FindPlayerLocation_C) == 0x000008, "Wrong alignment on UBear_FindPlayerLocation_C");
static_assert(sizeof(UBear_FindPlayerLocation_C) == 0x0000D8, "Wrong size on UBear_FindPlayerLocation_C");
static_assert(offsetof(UBear_FindPlayerLocation_C, UberGraphFrame) == 0x0000A8, "Member 'UBear_FindPlayerLocation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBear_FindPlayerLocation_C, Location) == 0x0000B0, "Member 'UBear_FindPlayerLocation_C::Location' has a wrong offset!");

}

