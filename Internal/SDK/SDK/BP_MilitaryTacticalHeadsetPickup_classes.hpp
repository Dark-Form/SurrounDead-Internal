﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MilitaryTacticalHeadsetPickup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_StaticMeshPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MilitaryTacticalHeadsetPickup.BP_MilitaryTacticalHeadsetPickup_C
// 0x0008 (0x0318 - 0x0310)
class ABP_MilitaryTacticalHeadsetPickup_C final : public ABP_StaticMeshPickup_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MilitaryTacticalHeadsetPickup_C; // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Jig_ToggleAttachmentActiveState();
	void Jig_StartReloading(class UActorComponent* MPCom, class UJSIContainer_C* MagContainer, class UJSI_Slot_C* WithMag, bool* Result);
	void Jig_SetPendingMag(class ABP_AMainLocalAttachment_C* MagRef, class UJigsawItem_DataAsset_C* DA, bool* Result);
	void Jig_SetAttachmentState(const TArray<struct FGuid>& UID, const struct FGameplayTag& NewState, bool PreExecuteClientSide_);
	void Jig_SetAttachmentInfo(const struct FGuid& UID, class UJigsawItem_DataAsset_C* AttachmentInfo, bool* Result);
	void Jig_SetAttachmentActiveState(const struct FGameplayTag& Value);
	void Jig_OnMontageNotify(class FName NotifyName);
	void Jig_OnAttachmentSnapInspector();
	void Jig_GetPrimitiveComponent(class UPrimitiveComponent** Comp);
	void Jig_GetPendingMag(bool FindMagIfNoPending_, class ABP_AMainLocalAttachment_C** MagRef);
	void Jig_GetEquipMontage(bool CanChamber_, class UAnimMontage** EquipMontage);
	void Jig_GetAvailableAttachmentStates(struct FGameplayTagContainer* States);
	void Jig_GetAttachmentInfo(struct FGuid* UID, class UJigsawItem_DataAsset_C** AttachmentInfo);
	void Jig_GetAttachmentByType(const struct FGameplayTag& Type, class ABP_AMainLocalAttachment_C** Attachment, bool* Found);
	void Jig_GetAttachmentArrayByType(const struct FGameplayTag& Type, TArray<class ABP_AMainLocalAttachment_C*>* Attachment, bool* Found);
	void Jig_GetAttachmentActiveState(struct FGameplayTag* Result);
	void Jig_GetADSSocketLocation(struct FVector* SocketLoc, bool* SocketFound);
	void Jig_ExecuteChamberWeapon(class UActorComponent* MPComp, const struct FGameplayTag& PlayerSlots, bool* Result, class UAnimMontage** ChamberMontage, double* Speed);
	void Jig_CheckCanReload(class UActorComponent* MPComp, const struct FGameplayTag& PlayerSlots, bool* Result, class UJSIContainer_C** ContainerMag, class UAnimMontage** ReloadMontage, bool* HasInternalMag, bool* CanChamber_, class UJSI_Slot_C** ReloadWith, class UAnimMontage** LoopReloadAnim);
	void Jig_CanChamberWeapon(class UActorComponent* MPComp, const struct FGameplayTag& PlayerSlots, bool* Result);
	void Jig_AttachmentRemoved(TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, struct FGameplayTag* AttachmentType);
	void Jig_AttachmentInstalled(const struct FGuid& MainUID, TArray<struct FS_RepAttachmentInfo>& Attachments, bool* Result, struct FGameplayTag* AttachmentType);
	void ExecuteUbergraph_BP_MilitaryTacticalHeadsetPickup(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MilitaryTacticalHeadsetPickup_C">();
	}
	static class ABP_MilitaryTacticalHeadsetPickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MilitaryTacticalHeadsetPickup_C>();
	}
};
static_assert(alignof(ABP_MilitaryTacticalHeadsetPickup_C) == 0x000008, "Wrong alignment on ABP_MilitaryTacticalHeadsetPickup_C");
static_assert(sizeof(ABP_MilitaryTacticalHeadsetPickup_C) == 0x000318, "Wrong size on ABP_MilitaryTacticalHeadsetPickup_C");
static_assert(offsetof(ABP_MilitaryTacticalHeadsetPickup_C, UberGraphFrame_BP_MilitaryTacticalHeadsetPickup_C) == 0x000310, "Member 'ABP_MilitaryTacticalHeadsetPickup_C::UberGraphFrame_BP_MilitaryTacticalHeadsetPickup_C' has a wrong offset!");

}

