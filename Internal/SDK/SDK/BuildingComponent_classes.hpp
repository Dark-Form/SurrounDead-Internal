﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildingComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BaseComponent_classes.hpp"
#include "Enum_BuildingSnapTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BuildingComponent.BuildingComponent_C
// 0x01F8 (0x02B0 - 0x00B8)
class UBuildingComponent_C final : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BuildingComponent_C;                // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          BuildModeOn_;                                      // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBuild;                                          // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  BuildUID;                                          // 0x00C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0xC];                                       // 0x00D4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             BuildTransform;                                    // 0x00E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BuildGhost;                                        // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AddLocation;                                       // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Normal;                                            // 0x0168(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Hit_Actor;                                         // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PickupRef;                                         // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0190(0x00E8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        RotationZ;                                         // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     SocketTransforms;                                  // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SnappingEnabled_;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UJigsawItem_DataAsset_C*                DARef;                                             // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ReplacingObject_;                                  // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ReplacingActor;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BoundsCheck(float DivideScale, bool InvertBool, const struct FVector& BoundsOverlapOffset, bool* Hit);
	void BuildCycle();
	void ChangeRotationZ(bool Increase_, double Value, bool* Success);
	void CheckForSnap(Enum_BuildingSnapTypes Type);
	void Event_LaunchBuildMode(class UJigsawItem_DataAsset_C* DA, bool Replacing_, class AActor* ReplacingActor_0);
	void Event_NoBuildZone();
	void Event_StopBuildMode();
	void ExecuteUbergraph_BuildingComponent(int32 EntryPoint);
	void GetNearestTransform(const struct FVector& Location, TArray<struct FTransform>& Transforms, struct FTransform* ResultTransform);
	void GiveBuildColour(bool IsGreen_);
	bool IsPlaceableOnLandscape(const class UObject* Object);
	void LoadComponent();
	void RotateSnap(const struct FTransform& SocketTransform, class AActor* Actor, struct FRotator* Rotator);
	void SpawnBuild(const struct FTransform& SpawnTransform);
	void SpawnBuildGhost(class UStaticMesh* Mesh);
	void Svr_SpawnBuild(const struct FTransform& SpawnTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuildingComponent_C">();
	}
	static class UBuildingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildingComponent_C>();
	}
};
static_assert(alignof(UBuildingComponent_C) == 0x000010, "Wrong alignment on UBuildingComponent_C");
static_assert(sizeof(UBuildingComponent_C) == 0x0002B0, "Wrong size on UBuildingComponent_C");
static_assert(offsetof(UBuildingComponent_C, UberGraphFrame_BuildingComponent_C) == 0x0000B8, "Member 'UBuildingComponent_C::UberGraphFrame_BuildingComponent_C' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, BuildModeOn_) == 0x0000C0, "Member 'UBuildingComponent_C::BuildModeOn_' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, CanBuild) == 0x0000C1, "Member 'UBuildingComponent_C::CanBuild' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, BuildUID) == 0x0000C4, "Member 'UBuildingComponent_C::BuildUID' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, BuildTransform) == 0x0000E0, "Member 'UBuildingComponent_C::BuildTransform' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, Camera) == 0x000140, "Member 'UBuildingComponent_C::Camera' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, BuildGhost) == 0x000148, "Member 'UBuildingComponent_C::BuildGhost' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, AddLocation) == 0x000150, "Member 'UBuildingComponent_C::AddLocation' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, Normal) == 0x000168, "Member 'UBuildingComponent_C::Normal' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, Hit_Actor) == 0x000180, "Member 'UBuildingComponent_C::Hit_Actor' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, PickupRef) == 0x000188, "Member 'UBuildingComponent_C::PickupRef' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, HitInfo) == 0x000190, "Member 'UBuildingComponent_C::HitInfo' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, RotationZ) == 0x000278, "Member 'UBuildingComponent_C::RotationZ' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, SocketTransforms) == 0x000280, "Member 'UBuildingComponent_C::SocketTransforms' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, SnappingEnabled_) == 0x000290, "Member 'UBuildingComponent_C::SnappingEnabled_' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, DARef) == 0x000298, "Member 'UBuildingComponent_C::DARef' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, ReplacingObject_) == 0x0002A0, "Member 'UBuildingComponent_C::ReplacingObject_' has a wrong offset!");
static_assert(offsetof(UBuildingComponent_C, ReplacingActor) == 0x0002A8, "Member 'UBuildingComponent_C::ReplacingActor' has a wrong offset!");

}

