﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VehicleDrivingComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BaseComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VehicleDrivingComponent.VehicleDrivingComponent_C
// 0x0010 (0x00C8 - 0x00B8)
class UVehicleDrivingComponent_C final : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_VehicleDrivingComponent_C;          // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_VehicleMaster_C*                    Vehicle;                                           // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VehicleDrivingComponent(int32 EntryPoint);
	void GetName(class FString* Name_0);
	void InpActEvt_IA_Flashlight_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveBackwards_K2Node_EnhancedInputActionEvent_10(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveBackwards_K2Node_EnhancedInputActionEvent_11(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveForward_K2Node_EnhancedInputActionEvent_12(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveForward_K2Node_EnhancedInputActionEvent_13(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveLeft_K2Node_EnhancedInputActionEvent_8(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveLeft_K2Node_EnhancedInputActionEvent_9(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveRight_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_MoveRight_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_VehicleFlip_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_VehicleHandbrake_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_VehicleHandbrake_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_VehicleHorn_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_VehicleRadio_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VehicleDrivingComponent_C">();
	}
	static class UVehicleDrivingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicleDrivingComponent_C>();
	}
};
static_assert(alignof(UVehicleDrivingComponent_C) == 0x000008, "Wrong alignment on UVehicleDrivingComponent_C");
static_assert(sizeof(UVehicleDrivingComponent_C) == 0x0000C8, "Wrong size on UVehicleDrivingComponent_C");
static_assert(offsetof(UVehicleDrivingComponent_C, UberGraphFrame_VehicleDrivingComponent_C) == 0x0000B8, "Member 'UVehicleDrivingComponent_C::UberGraphFrame_VehicleDrivingComponent_C' has a wrong offset!");
static_assert(offsetof(UVehicleDrivingComponent_C, Vehicle) == 0x0000C0, "Member 'UVehicleDrivingComponent_C::Vehicle' has a wrong offset!");

}

