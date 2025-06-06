﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomQuestTask

#include "Basic.hpp"

#include "Narrative_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CustomQuestTask.BP_CustomQuestTask_C
// 0x00E0 (0x03A0 - 0x02C0)
class UBP_CustomQuestTask_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Cross;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         TaskDesc;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            TaskCompleteColor;                                 // 0x02D8(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TaskFailedColor;                                   // 0x02EC(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TaskIncompleteColor;                               // 0x0300(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestTask                             QuestTask;                                         // 0x0318(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                             TaskCompleteIcon;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TaskIncompleteIcon;                                // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Failed_;                                           // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNarrativeTask*                         Task;                                              // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TaskComplete;                                      // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description;                                       // 0x0388(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_BP_CustomQuestTask(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CustomQuestTask_C">();
	}
	static class UBP_CustomQuestTask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CustomQuestTask_C>();
	}
};
static_assert(alignof(UBP_CustomQuestTask_C) == 0x000008, "Wrong alignment on UBP_CustomQuestTask_C");
static_assert(sizeof(UBP_CustomQuestTask_C) == 0x0003A0, "Wrong size on UBP_CustomQuestTask_C");
static_assert(offsetof(UBP_CustomQuestTask_C, UberGraphFrame) == 0x0002C0, "Member 'UBP_CustomQuestTask_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, Cross) == 0x0002C8, "Member 'UBP_CustomQuestTask_C::Cross' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskDesc) == 0x0002D0, "Member 'UBP_CustomQuestTask_C::TaskDesc' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskCompleteColor) == 0x0002D8, "Member 'UBP_CustomQuestTask_C::TaskCompleteColor' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskFailedColor) == 0x0002EC, "Member 'UBP_CustomQuestTask_C::TaskFailedColor' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskIncompleteColor) == 0x000300, "Member 'UBP_CustomQuestTask_C::TaskIncompleteColor' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, QuestTask) == 0x000318, "Member 'UBP_CustomQuestTask_C::QuestTask' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskCompleteIcon) == 0x000360, "Member 'UBP_CustomQuestTask_C::TaskCompleteIcon' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskIncompleteIcon) == 0x000368, "Member 'UBP_CustomQuestTask_C::TaskIncompleteIcon' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, Failed_) == 0x000370, "Member 'UBP_CustomQuestTask_C::Failed_' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, Task) == 0x000378, "Member 'UBP_CustomQuestTask_C::Task' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, TaskComplete) == 0x000380, "Member 'UBP_CustomQuestTask_C::TaskComplete' has a wrong offset!");
static_assert(offsetof(UBP_CustomQuestTask_C, Description) == 0x000388, "Member 'UBP_CustomQuestTask_C::Description' has a wrong offset!");

}

