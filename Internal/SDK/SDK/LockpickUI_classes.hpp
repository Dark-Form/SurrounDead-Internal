﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockpickUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LockpickUI.LockpickUI_C
// 0x0058 (0x0318 - 0x02C0)
class ULockpickUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ExitTxt;                                           // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LockpickDiff;                                      // 0x02D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LockpickTxt;                                       // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockStatic;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULockWidget_C*                          LockWidget;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_LockPickObject_C*                   Object;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                   JigRef;                                            // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULockPickingComponent_C*                LPRef;                                             // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Successful;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseLockpick;                                       // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30A[0x6];                                      // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PinsAngle;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BreakLockpick();
	void Construct();
	void ExecuteUbergraph_LockpickUI(int32 EntryPoint);
	class FText ExitText();
	class FText GetLockpickAmount(int32* Lockpicks);
	class FText GetLockpickAmountText();
	class FText GetLockpickDiffText();
	void OnInitialized();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PausePressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockpickUI_C">();
	}
	static class ULockpickUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockpickUI_C>();
	}
};
static_assert(alignof(ULockpickUI_C) == 0x000008, "Wrong alignment on ULockpickUI_C");
static_assert(sizeof(ULockpickUI_C) == 0x000318, "Wrong size on ULockpickUI_C");
static_assert(offsetof(ULockpickUI_C, UberGraphFrame) == 0x0002C0, "Member 'ULockpickUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, ExitTxt) == 0x0002C8, "Member 'ULockpickUI_C::ExitTxt' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, LockpickDiff) == 0x0002D0, "Member 'ULockpickUI_C::LockpickDiff' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, LockpickTxt) == 0x0002D8, "Member 'ULockpickUI_C::LockpickTxt' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, LockStatic) == 0x0002E0, "Member 'ULockpickUI_C::LockStatic' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, LockWidget) == 0x0002E8, "Member 'ULockpickUI_C::LockWidget' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, Object) == 0x0002F0, "Member 'ULockpickUI_C::Object' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, JigRef) == 0x0002F8, "Member 'ULockpickUI_C::JigRef' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, LPRef) == 0x000300, "Member 'ULockpickUI_C::LPRef' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, Successful) == 0x000308, "Member 'ULockpickUI_C::Successful' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, UseLockpick) == 0x000309, "Member 'ULockpickUI_C::UseLockpick' has a wrong offset!");
static_assert(offsetof(ULockpickUI_C, PinsAngle) == 0x000310, "Member 'ULockpickUI_C::PinsAngle' has a wrong offset!");

}

