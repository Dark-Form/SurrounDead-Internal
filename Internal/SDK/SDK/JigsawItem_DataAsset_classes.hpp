﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JigsawItem_DataAsset

#include "Basic.hpp"

#include "ClothingSettings_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "DefaultAttachments_structs.hpp"
#include "S_RandomStatsConfig_structs.hpp"
#include "S_LocalAttContainerIndexSocket_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_ItemStat_structs.hpp"
#include "S_ItemStatText_structs.hpp"
#include "Enum_BuildingSnapTypes_structs.hpp"
#include "RandomContainerItem_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass JigsawItem_DataAsset.JigsawItem_DataAsset_C
// 0x0500 (0x0530 - 0x0030)
class UJigsawItem_DataAsset_C final : public UPrimaryDataAsset
{
public:
	class FName                                   ItemId;                                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Name_0;                                            // 0x0038(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Description;                                       // 0x0050(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              SlotDimensions;                                    // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Type;                                              // 0x0078(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Rarity;                                            // 0x0080(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanStack_;                                         // 0x008C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxStack;                                          // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  UniqueServerID;                                    // 0x0094(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Weight;                                            // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsArmor_;                                          // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Price;                                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Durability;                                        // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDurability;                                     // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBeConsumed_;                                    // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             ConsumeSound;                                      // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           RemoveMedicalEffects;                              // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                           ConsumeMontage;                                    // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        QuickConsumeValue;                                 // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnConsumeAllDestroyItem_;                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ReduceDurabilityAmount;                            // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PickupClass;                                       // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               InInventoryImage;                                  // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               EquippedImage;                                     // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsContainer_;                                      // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDefaultAttachments>            DefaultAttachments;                                // 0x0130(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ContainerCapacity;                                 // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SupportsAttachments_;                              // 0x0144(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 SpecialContainerWidget;                            // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      ContainerDimensions;                               // 0x0150(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ContainerSupportedItems;                           // 0x0160(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UJigsawItem_DataAsset_C*>        ContainerOnlySupportedIDs;                         // 0x0180(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OpenContainerOnDoubleClick_;                       // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddSpecialContainerToInspector;                    // 0x0191(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_192[0x6];                                      // 0x0192(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ContextMenuOptions;                                // 0x0198(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  OverItemOptions;                                   // 0x01B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_RandomStatsConfig                   RandomStats;                                       // 0x01D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FS_ItemStat>                    ItemStats;                                         // 0x01F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                             EquippedTransform;                                 // 0x0200(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EquipSocket;                                       // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PrimaryUnequipSocket;                              // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PrimaryUnequipSocketBackpack;                      // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StaticMeshToInspect;                               // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          SkeletalMeshToInspect;                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     AlternateMaterialToInspect;                        // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             InspectTransform;                                  // 0x0290(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FOV;                                               // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxZoomIn;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxZoomOut;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseAsInventoryImage_;                              // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShareSnapWithSimilarItems_;                        // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30A[0x6];                                      // 0x030A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ActionbarTransform;                                // 0x0310(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ActionbarFOV;                                      // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Local_AttachSocket;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_LocalAttContainerIndexSocket> Local_AttachToSocketByContainerIndex;             // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Local_AttachmentType;                              // 0x0390(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  AttachmentPossibleStates;                          // 0x0398(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 Local_ActorClass;                                  // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowEquippedContentByDefault_;                     // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxWeight;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SecondaryUnequipSocket;                            // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SecondaryUnequipSocketBackpack;                    // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ThrowableClass;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MinimumThrowableDamage;                            // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaximumThrowableDamage;                            // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FlashlightIntensity;                               // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      FlashlightMaterial;                                // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        BinocularsZoomValue;                               // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClothingSettings                      ClothingSettings;                                  // 0x0410(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ItemStatText>                TextStats;                                         // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	Enum_BuildingSnapTypes                        SnapType;                                          // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9[0x7];                                      // 0x04B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            BuildMesh;                                         // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BuildActorClass;                                   // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        BuildBoundsCheckMultiplier;                        // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BuildBoundsOverlapOffset;                          // 0x04D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BuildAllowBuildingInNoBuildZones;                  // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F1[0x3];                                      // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NIghtVisionDTRow;                                  // 0x04F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC[0x4];                                      // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FOVZoom;                                           // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RepairItemAmount;                                  // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDistance_;                                     // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBeDisassembled_;                                // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_512[0x6];                                      // 0x0512(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRandomContainerItem>           DisassemblyItems;                                  // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JigsawItem_DataAsset_C">();
	}
	static class UJigsawItem_DataAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJigsawItem_DataAsset_C>();
	}
};
static_assert(alignof(UJigsawItem_DataAsset_C) == 0x000010, "Wrong alignment on UJigsawItem_DataAsset_C");
static_assert(sizeof(UJigsawItem_DataAsset_C) == 0x000530, "Wrong size on UJigsawItem_DataAsset_C");
static_assert(offsetof(UJigsawItem_DataAsset_C, ItemId) == 0x000030, "Member 'UJigsawItem_DataAsset_C::ItemId' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Name_0) == 0x000038, "Member 'UJigsawItem_DataAsset_C::Name_0' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Description) == 0x000050, "Member 'UJigsawItem_DataAsset_C::Description' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SlotDimensions) == 0x000068, "Member 'UJigsawItem_DataAsset_C::SlotDimensions' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Type) == 0x000078, "Member 'UJigsawItem_DataAsset_C::Type' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Rarity) == 0x000080, "Member 'UJigsawItem_DataAsset_C::Rarity' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Count) == 0x000088, "Member 'UJigsawItem_DataAsset_C::Count' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, CanStack_) == 0x00008C, "Member 'UJigsawItem_DataAsset_C::CanStack_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MaxStack) == 0x000090, "Member 'UJigsawItem_DataAsset_C::MaxStack' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, UniqueServerID) == 0x000094, "Member 'UJigsawItem_DataAsset_C::UniqueServerID' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Weight) == 0x0000A8, "Member 'UJigsawItem_DataAsset_C::Weight' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, IsArmor_) == 0x0000B0, "Member 'UJigsawItem_DataAsset_C::IsArmor_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Price) == 0x0000B8, "Member 'UJigsawItem_DataAsset_C::Price' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Durability) == 0x0000C0, "Member 'UJigsawItem_DataAsset_C::Durability' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MaxDurability) == 0x0000C8, "Member 'UJigsawItem_DataAsset_C::MaxDurability' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, CanBeConsumed_) == 0x0000D0, "Member 'UJigsawItem_DataAsset_C::CanBeConsumed_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ConsumeSound) == 0x0000D8, "Member 'UJigsawItem_DataAsset_C::ConsumeSound' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, RemoveMedicalEffects) == 0x0000E0, "Member 'UJigsawItem_DataAsset_C::RemoveMedicalEffects' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ConsumeMontage) == 0x0000F0, "Member 'UJigsawItem_DataAsset_C::ConsumeMontage' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, QuickConsumeValue) == 0x0000F8, "Member 'UJigsawItem_DataAsset_C::QuickConsumeValue' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, OnConsumeAllDestroyItem_) == 0x000100, "Member 'UJigsawItem_DataAsset_C::OnConsumeAllDestroyItem_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ReduceDurabilityAmount) == 0x000108, "Member 'UJigsawItem_DataAsset_C::ReduceDurabilityAmount' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, PickupClass) == 0x000110, "Member 'UJigsawItem_DataAsset_C::PickupClass' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, InInventoryImage) == 0x000118, "Member 'UJigsawItem_DataAsset_C::InInventoryImage' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, EquippedImage) == 0x000120, "Member 'UJigsawItem_DataAsset_C::EquippedImage' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, IsContainer_) == 0x000128, "Member 'UJigsawItem_DataAsset_C::IsContainer_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, DefaultAttachments) == 0x000130, "Member 'UJigsawItem_DataAsset_C::DefaultAttachments' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ContainerCapacity) == 0x000140, "Member 'UJigsawItem_DataAsset_C::ContainerCapacity' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SupportsAttachments_) == 0x000144, "Member 'UJigsawItem_DataAsset_C::SupportsAttachments_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SpecialContainerWidget) == 0x000148, "Member 'UJigsawItem_DataAsset_C::SpecialContainerWidget' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ContainerDimensions) == 0x000150, "Member 'UJigsawItem_DataAsset_C::ContainerDimensions' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ContainerSupportedItems) == 0x000160, "Member 'UJigsawItem_DataAsset_C::ContainerSupportedItems' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ContainerOnlySupportedIDs) == 0x000180, "Member 'UJigsawItem_DataAsset_C::ContainerOnlySupportedIDs' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, OpenContainerOnDoubleClick_) == 0x000190, "Member 'UJigsawItem_DataAsset_C::OpenContainerOnDoubleClick_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, AddSpecialContainerToInspector) == 0x000191, "Member 'UJigsawItem_DataAsset_C::AddSpecialContainerToInspector' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ContextMenuOptions) == 0x000198, "Member 'UJigsawItem_DataAsset_C::ContextMenuOptions' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, OverItemOptions) == 0x0001B8, "Member 'UJigsawItem_DataAsset_C::OverItemOptions' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, RandomStats) == 0x0001D8, "Member 'UJigsawItem_DataAsset_C::RandomStats' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ItemStats) == 0x0001F0, "Member 'UJigsawItem_DataAsset_C::ItemStats' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, EquippedTransform) == 0x000200, "Member 'UJigsawItem_DataAsset_C::EquippedTransform' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, EquipSocket) == 0x000260, "Member 'UJigsawItem_DataAsset_C::EquipSocket' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, PrimaryUnequipSocket) == 0x000268, "Member 'UJigsawItem_DataAsset_C::PrimaryUnequipSocket' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, PrimaryUnequipSocketBackpack) == 0x000270, "Member 'UJigsawItem_DataAsset_C::PrimaryUnequipSocketBackpack' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, StaticMeshToInspect) == 0x000278, "Member 'UJigsawItem_DataAsset_C::StaticMeshToInspect' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SkeletalMeshToInspect) == 0x000280, "Member 'UJigsawItem_DataAsset_C::SkeletalMeshToInspect' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, AlternateMaterialToInspect) == 0x000288, "Member 'UJigsawItem_DataAsset_C::AlternateMaterialToInspect' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, InspectTransform) == 0x000290, "Member 'UJigsawItem_DataAsset_C::InspectTransform' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, FOV) == 0x0002F0, "Member 'UJigsawItem_DataAsset_C::FOV' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MaxZoomIn) == 0x0002F8, "Member 'UJigsawItem_DataAsset_C::MaxZoomIn' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MaxZoomOut) == 0x000300, "Member 'UJigsawItem_DataAsset_C::MaxZoomOut' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, UseAsInventoryImage_) == 0x000308, "Member 'UJigsawItem_DataAsset_C::UseAsInventoryImage_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ShareSnapWithSimilarItems_) == 0x000309, "Member 'UJigsawItem_DataAsset_C::ShareSnapWithSimilarItems_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ActionbarTransform) == 0x000310, "Member 'UJigsawItem_DataAsset_C::ActionbarTransform' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ActionbarFOV) == 0x000370, "Member 'UJigsawItem_DataAsset_C::ActionbarFOV' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Local_AttachSocket) == 0x000378, "Member 'UJigsawItem_DataAsset_C::Local_AttachSocket' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Local_AttachToSocketByContainerIndex) == 0x000380, "Member 'UJigsawItem_DataAsset_C::Local_AttachToSocketByContainerIndex' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Local_AttachmentType) == 0x000390, "Member 'UJigsawItem_DataAsset_C::Local_AttachmentType' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, AttachmentPossibleStates) == 0x000398, "Member 'UJigsawItem_DataAsset_C::AttachmentPossibleStates' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, Local_ActorClass) == 0x0003B8, "Member 'UJigsawItem_DataAsset_C::Local_ActorClass' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ShowEquippedContentByDefault_) == 0x0003C0, "Member 'UJigsawItem_DataAsset_C::ShowEquippedContentByDefault_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MaxWeight) == 0x0003C8, "Member 'UJigsawItem_DataAsset_C::MaxWeight' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SecondaryUnequipSocket) == 0x0003D0, "Member 'UJigsawItem_DataAsset_C::SecondaryUnequipSocket' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SecondaryUnequipSocketBackpack) == 0x0003D8, "Member 'UJigsawItem_DataAsset_C::SecondaryUnequipSocketBackpack' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ThrowableClass) == 0x0003E0, "Member 'UJigsawItem_DataAsset_C::ThrowableClass' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MinimumThrowableDamage) == 0x0003E8, "Member 'UJigsawItem_DataAsset_C::MinimumThrowableDamage' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, MaximumThrowableDamage) == 0x0003F0, "Member 'UJigsawItem_DataAsset_C::MaximumThrowableDamage' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, FlashlightIntensity) == 0x0003F8, "Member 'UJigsawItem_DataAsset_C::FlashlightIntensity' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, FlashlightMaterial) == 0x000400, "Member 'UJigsawItem_DataAsset_C::FlashlightMaterial' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, BinocularsZoomValue) == 0x000408, "Member 'UJigsawItem_DataAsset_C::BinocularsZoomValue' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ClothingSettings) == 0x000410, "Member 'UJigsawItem_DataAsset_C::ClothingSettings' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, TextStats) == 0x0004A8, "Member 'UJigsawItem_DataAsset_C::TextStats' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, SnapType) == 0x0004B8, "Member 'UJigsawItem_DataAsset_C::SnapType' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, BuildMesh) == 0x0004C0, "Member 'UJigsawItem_DataAsset_C::BuildMesh' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, BuildActorClass) == 0x0004C8, "Member 'UJigsawItem_DataAsset_C::BuildActorClass' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, BuildBoundsCheckMultiplier) == 0x0004D0, "Member 'UJigsawItem_DataAsset_C::BuildBoundsCheckMultiplier' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, BuildBoundsOverlapOffset) == 0x0004D8, "Member 'UJigsawItem_DataAsset_C::BuildBoundsOverlapOffset' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, BuildAllowBuildingInNoBuildZones) == 0x0004F0, "Member 'UJigsawItem_DataAsset_C::BuildAllowBuildingInNoBuildZones' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, NIghtVisionDTRow) == 0x0004F4, "Member 'UJigsawItem_DataAsset_C::NIghtVisionDTRow' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, FOVZoom) == 0x000500, "Member 'UJigsawItem_DataAsset_C::FOVZoom' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, RepairItemAmount) == 0x000508, "Member 'UJigsawItem_DataAsset_C::RepairItemAmount' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, ShowDistance_) == 0x000510, "Member 'UJigsawItem_DataAsset_C::ShowDistance_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, CanBeDisassembled_) == 0x000511, "Member 'UJigsawItem_DataAsset_C::CanBeDisassembled_' has a wrong offset!");
static_assert(offsetof(UJigsawItem_DataAsset_C, DisassemblyItems) == 0x000518, "Member 'UJigsawItem_DataAsset_C::DisassemblyItems' has a wrong offset!");

}

