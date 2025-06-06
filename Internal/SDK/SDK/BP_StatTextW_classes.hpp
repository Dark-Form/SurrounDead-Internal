﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StatTextW

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_StatTextW.BP_StatTextW_C
// 0x0028 (0x02E8 - 0x02C0)
class UBP_StatTextW_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_56;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   StatName;                                          // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   StatValue;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_BP_StatTextW(int32 EntryPoint);
	void GetStat(const struct FGameplayTag& Tag, class FText* Name_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StatTextW_C">();
	}
	static class UBP_StatTextW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StatTextW_C>();
	}
};
static_assert(alignof(UBP_StatTextW_C) == 0x000008, "Wrong alignment on UBP_StatTextW_C");
static_assert(sizeof(UBP_StatTextW_C) == 0x0002E8, "Wrong size on UBP_StatTextW_C");
static_assert(offsetof(UBP_StatTextW_C, UberGraphFrame) == 0x0002C0, "Member 'UBP_StatTextW_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_StatTextW_C, TextBlock) == 0x0002C8, "Member 'UBP_StatTextW_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UBP_StatTextW_C, TextBlock_56) == 0x0002D0, "Member 'UBP_StatTextW_C::TextBlock_56' has a wrong offset!");
static_assert(offsetof(UBP_StatTextW_C, StatName) == 0x0002D8, "Member 'UBP_StatTextW_C::StatName' has a wrong offset!");
static_assert(offsetof(UBP_StatTextW_C, StatValue) == 0x0002E0, "Member 'UBP_StatTextW_C::StatValue' has a wrong offset!");

}

