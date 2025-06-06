﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_BatteryChargerUI

#include "Basic.hpp"

#include "W_BatteryChargerUI_classes.hpp"
#include "W_BatteryChargerUI_parameters.hpp"


namespace SDK
{

// Function W_BatteryChargerUI.W_BatteryChargerUI_C.ExecuteUbergraph_W_BatteryChargerUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BatteryChargerUI_C::ExecuteUbergraph_W_BatteryChargerUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "ExecuteUbergraph_W_BatteryChargerUI");

	Params::W_BatteryChargerUI_C_ExecuteUbergraph_W_BatteryChargerUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetAllAttachments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>*                    Attachments                                            (Parm, OutParm)

void UW_BatteryChargerUI_C::GetAllAttachments(TArray<class FName>* Attachments)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetAllAttachments");

	Params::W_BatteryChargerUI_C_GetAllAttachments Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Attachments != nullptr)
		*Attachments = std::move(Parms.Attachments);
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetContainerByAttachmentType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C**                 JigContainer                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32*                                  ContainerIndex                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BatteryChargerUI_C::GetContainerByAttachmentType(const struct FGameplayTag& Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetContainerByAttachmentType");

	Params::W_BatteryChargerUI_C_GetContainerByAttachmentType Parms{};

	Parms.Type = std::move(Type);

	UObject::ProcessEvent(Func, &Parms);

	if (JigContainer != nullptr)
		*JigContainer = Parms.JigContainer;

	if (ContainerIndex != nullptr)
		*ContainerIndex = Parms.ContainerIndex;
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetDropWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropItemBackGwidget_C**          DropWRef                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_BatteryChargerUI_C::GetDropWidget(class UDropItemBackGwidget_C** DropWRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetDropWidget");

	Params::W_BatteryChargerUI_C_GetDropWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DropWRef != nullptr)
		*DropWRef = Parms.DropWRef;
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetJSIContainerByPlayerSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C**                 Container                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C**                     EquippedItem                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsPending_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BatteryChargerUI_C::GetJSIContainerByPlayerSlots(const struct FGameplayTag& Slot_0, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetJSIContainerByPlayerSlots");

	Params::W_BatteryChargerUI_C_GetJSIContainerByPlayerSlots Parms{};

	Parms.Slot_0 = std::move(Slot_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Container != nullptr)
		*Container = Parms.Container;

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

	if (IsPending_ != nullptr)
		*IsPending_ = Parms.IsPending_;
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetListOfNonAddContainers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>*         Containers                                             (Parm, OutParm, ContainsInstancedReference)

void UW_BatteryChargerUI_C::GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetListOfNonAddContainers");

	Params::W_BatteryChargerUI_C_GetListOfNonAddContainers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetLootContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**                     Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_BatteryChargerUI_C::GetLootContent(class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetLootContent");

	Params::W_BatteryChargerUI_C_GetLootContent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetValidReloadContainers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>*         Containers                                             (Parm, OutParm, ContainsInstancedReference)

void UW_BatteryChargerUI_C::GetValidReloadContainers(TArray<class UJSIContainer_C*>* Containers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetValidReloadContainers");

	Params::W_BatteryChargerUI_C_GetValidReloadContainers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.PreInitSpecialContainer
// (BlueprintCallable, BlueprintEvent)

void UW_BatteryChargerUI_C::PreInitSpecialContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "PreInitSpecialContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.SetActionbarFollower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                      JigRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool*                                   Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BatteryChargerUI_C::SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "SetActionbarFollower");

	Params::W_BatteryChargerUI_C_SetActionbarFollower Parms{};

	Parms.JigRef = JigRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function W_BatteryChargerUI.W_BatteryChargerUI_C.GetListOfContainers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UJSIContainer_C*>*         Containers                                             (Parm, OutParm, ContainsInstancedReference)

void UW_BatteryChargerUI_C::GetListOfContainers(TArray<class UJSIContainer_C*>* Containers) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_BatteryChargerUI_C", "GetListOfContainers");

	Params::W_BatteryChargerUI_C_GetListOfContainers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);
}

}

