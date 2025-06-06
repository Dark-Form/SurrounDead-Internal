﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TechTree

#include "Basic.hpp"

#include "TechTree_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class TechTree.TechNodeArrowWidget
// 0x0018 (0x02D8 - 0x02C0)
class UTechNodeArrowWidget final : public UUserWidget
{
public:
	ETechNodePinType                              PinType;                                           // 0x02C0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConnectionAngle;                                   // 0x02C4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechnologyAsset*                       ParentTechnology;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechnologyAsset*                       ChildTechnology;                                   // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnNodeArrowInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechNodeArrowWidget">();
	}
	static class UTechNodeArrowWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechNodeArrowWidget>();
	}
};
static_assert(alignof(UTechNodeArrowWidget) == 0x000008, "Wrong alignment on UTechNodeArrowWidget");
static_assert(sizeof(UTechNodeArrowWidget) == 0x0002D8, "Wrong size on UTechNodeArrowWidget");
static_assert(offsetof(UTechNodeArrowWidget, PinType) == 0x0002C0, "Member 'UTechNodeArrowWidget::PinType' has a wrong offset!");
static_assert(offsetof(UTechNodeArrowWidget, ConnectionAngle) == 0x0002C4, "Member 'UTechNodeArrowWidget::ConnectionAngle' has a wrong offset!");
static_assert(offsetof(UTechNodeArrowWidget, ParentTechnology) == 0x0002C8, "Member 'UTechNodeArrowWidget::ParentTechnology' has a wrong offset!");
static_assert(offsetof(UTechNodeArrowWidget, ChildTechnology) == 0x0002D0, "Member 'UTechNodeArrowWidget::ChildTechnology' has a wrong offset!");

// Class TechTree.TechNodeWidget
// 0x0008 (0x02C8 - 0x02C0)
class UTechNodeWidget : public UUserWidget
{
public:
	class UTechnologyAsset*                       TechnologyAsset;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnTechNodeInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechNodeWidget">();
	}
	static class UTechNodeWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechNodeWidget>();
	}
};
static_assert(alignof(UTechNodeWidget) == 0x000008, "Wrong alignment on UTechNodeWidget");
static_assert(sizeof(UTechNodeWidget) == 0x0002C8, "Wrong size on UTechNodeWidget");
static_assert(offsetof(UTechNodeWidget, TechnologyAsset) == 0x0002C0, "Member 'UTechNodeWidget::TechnologyAsset' has a wrong offset!");

// Class TechTree.TechnologyAsset
// 0x00D0 (0x0100 - 0x0030)
class UTechnologyAsset : public UPrimaryDataAsset
{
public:
	struct FSlateBrush                            TechIcon;                                          // 0x0030(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechnologyAsset">();
	}
	static class UTechnologyAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechnologyAsset>();
	}
};
static_assert(alignof(UTechnologyAsset) == 0x000010, "Wrong alignment on UTechnologyAsset");
static_assert(sizeof(UTechnologyAsset) == 0x000100, "Wrong size on UTechnologyAsset");
static_assert(offsetof(UTechnologyAsset, TechIcon) == 0x000030, "Member 'UTechnologyAsset::TechIcon' has a wrong offset!");

// Class TechTree.TechnologySaveGame
// 0x0060 (0x0088 - 0x0028)
class UTechnologySaveGame : public USaveGame
{
public:
	TArray<class UTechnologyAsset*>               UnlockedTechnologies;                              // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UTechnologyTree*, struct FUnlockedTechnologiesData> MultipleTreesUnlockedTechnologies; // 0x0038(0x0050)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechnologySaveGame">();
	}
	static class UTechnologySaveGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechnologySaveGame>();
	}
};
static_assert(alignof(UTechnologySaveGame) == 0x000008, "Wrong alignment on UTechnologySaveGame");
static_assert(sizeof(UTechnologySaveGame) == 0x000088, "Wrong size on UTechnologySaveGame");
static_assert(offsetof(UTechnologySaveGame, UnlockedTechnologies) == 0x000028, "Member 'UTechnologySaveGame::UnlockedTechnologies' has a wrong offset!");
static_assert(offsetof(UTechnologySaveGame, MultipleTreesUnlockedTechnologies) == 0x000038, "Member 'UTechnologySaveGame::MultipleTreesUnlockedTechnologies' has a wrong offset!");

// Class TechTree.TechnologyTree
// 0x0278 (0x02A0 - 0x0028)
class UTechnologyTree final : public UObject
{
public:
	struct FVector2D                              TreeSize;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETechTreeOrientation                          Orientation;                                       // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundImage;                                   // 0x0040(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         ConnectionLineThickness;                           // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ConnectionLineColor;                               // 0x0114(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UTechNodeWidget>            SlotTemplate;                                      // 0x0128(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SlotSize;                                          // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UTechNodeArrowWidget>       ArrowTemplate;                                     // 0x0140(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ArrowSize;                                         // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GridSnapSize;                                      // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowBoundaries;                                    // 0x015C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BoundariesColor;                                   // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BoundariesThickness;                               // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowPinArrows;                                     // 0x0174(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowAlignmentGrid;                                 // 0x0175(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_176[0x2];                                      // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              AlignmentGridSize;                                 // 0x0178(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              AlignmentGridOffset;                               // 0x0188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AlignmentGridColor;                                // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AlignmentGridThickness;                            // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTTTechNode*>                    TechNodes;                                         // 0x01B0(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UTechnologyAsset*, class UTTTechNode*> TechnologiesMap;                               // 0x01C0(0x0050)(BlueprintVisible, NativeAccessSpecifierPublic)
	class UEdGraph*                               UpdateGraph;                                       // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UniqueID;                                          // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UTTTechNode* TechNode, bool IsUnlocked)> OnTechnologyUnlockStateChanged; // 0x0220(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UTechnologyAsset*, class UTTTechNode*> UnlockedTechnologies;                          // 0x0230(0x0050)(Transient, NativeAccessSpecifierPublic)
	TArray<class UTTTechNode*>                    CurrentlyActiveNodes;                              // 0x0280(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UTechnologyTree*                        TechTreeTemplate;                                  // 0x0290(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_298[0x8];                                      // 0x0298(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetTechAssetName();
	bool HasUnlockedParents(class UTechnologyAsset* Technology);
	bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);

	TArray<struct FTechNodeLink> FilterConnections(const TArray<struct FTechNodeLink>& ConnectionsIn, const TArray<class UTechnologyAsset*>& IgnoredParentTechnologies, const TArray<class UTechnologyAsset*>& IgnoredChildTechnologies) const;
	TArray<struct FTechNodeLink> GetConnections() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechnologyTree">();
	}
	static class UTechnologyTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechnologyTree>();
	}
};
static_assert(alignof(UTechnologyTree) == 0x000010, "Wrong alignment on UTechnologyTree");
static_assert(sizeof(UTechnologyTree) == 0x0002A0, "Wrong size on UTechnologyTree");
static_assert(offsetof(UTechnologyTree, TreeSize) == 0x000028, "Member 'UTechnologyTree::TreeSize' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, Orientation) == 0x000038, "Member 'UTechnologyTree::Orientation' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, BackgroundImage) == 0x000040, "Member 'UTechnologyTree::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ConnectionLineThickness) == 0x000110, "Member 'UTechnologyTree::ConnectionLineThickness' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ConnectionLineColor) == 0x000114, "Member 'UTechnologyTree::ConnectionLineColor' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, SlotTemplate) == 0x000128, "Member 'UTechnologyTree::SlotTemplate' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, SlotSize) == 0x000130, "Member 'UTechnologyTree::SlotSize' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ArrowTemplate) == 0x000140, "Member 'UTechnologyTree::ArrowTemplate' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ArrowSize) == 0x000148, "Member 'UTechnologyTree::ArrowSize' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, GridSnapSize) == 0x000158, "Member 'UTechnologyTree::GridSnapSize' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ShowBoundaries) == 0x00015C, "Member 'UTechnologyTree::ShowBoundaries' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, BoundariesColor) == 0x000160, "Member 'UTechnologyTree::BoundariesColor' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, BoundariesThickness) == 0x000170, "Member 'UTechnologyTree::BoundariesThickness' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ShowPinArrows) == 0x000174, "Member 'UTechnologyTree::ShowPinArrows' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, ShowAlignmentGrid) == 0x000175, "Member 'UTechnologyTree::ShowAlignmentGrid' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, AlignmentGridSize) == 0x000178, "Member 'UTechnologyTree::AlignmentGridSize' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, AlignmentGridOffset) == 0x000188, "Member 'UTechnologyTree::AlignmentGridOffset' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, AlignmentGridColor) == 0x000198, "Member 'UTechnologyTree::AlignmentGridColor' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, AlignmentGridThickness) == 0x0001A8, "Member 'UTechnologyTree::AlignmentGridThickness' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, TechNodes) == 0x0001B0, "Member 'UTechnologyTree::TechNodes' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, TechnologiesMap) == 0x0001C0, "Member 'UTechnologyTree::TechnologiesMap' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, UpdateGraph) == 0x000210, "Member 'UTechnologyTree::UpdateGraph' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, UniqueID) == 0x000218, "Member 'UTechnologyTree::UniqueID' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, OnTechnologyUnlockStateChanged) == 0x000220, "Member 'UTechnologyTree::OnTechnologyUnlockStateChanged' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, UnlockedTechnologies) == 0x000230, "Member 'UTechnologyTree::UnlockedTechnologies' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, CurrentlyActiveNodes) == 0x000280, "Member 'UTechnologyTree::CurrentlyActiveNodes' has a wrong offset!");
static_assert(offsetof(UTechnologyTree, TechTreeTemplate) == 0x000290, "Member 'UTechnologyTree::TechTreeTemplate' has a wrong offset!");

// Class TechTree.TechTreeManager
// 0x00A0 (0x0140 - 0x00A0)
class UTechTreeManager : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(class UTechnologyTree* TechTree, class UTTTechNode* TechNode, bool IsUnlocked)> OnTechnologyUnlockStateChanged; // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TMulticastInlineDelegate<void(class UTechnologyTree* TechTree)> OnTechTreeAssigned;              // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UTechnologySaveGame>        SaveGameTemplate;                                  // 0x00C0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMulticastInlineDelegate<void(const class UTechnologyTree* TechTree)> OnTechTreeRecovered;       // 0x00C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UTechnologyTree*                        TechnologyTree;                                    // 0x00D8(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTechTreeWidget*                        TechTreeWidget;                                    // 0x00E0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UTechnologyTree*, class UTechnologyTree*> AssignedTechTrees;                          // 0x00E8(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AssignTechTree(class UTechnologyTree* TechTree, class UTechTreeWidget* TechTreeWidget_0);
	class UTechnologyTree* GetAssignedTechTree();
	class UTTTechNode* GetNodeFromTechAsset(class UTechnologyAsset* Technology);
	int32 GetNumberTreesAssigned();
	class USaveGame* GetSavegameTechObject();
	class UTechTreeWidget* GetTechTreeWidget();
	void HandleTechnologyStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
	bool HasUnlockedParents(class UTechnologyAsset* Technology);
	bool IsChildTechnology(class UTTTechNode* ParentNode, class UTechnologyAsset* ChildNodeTechnology);
	bool IsTechnologyUnlocked(class UTechnologyAsset* Technology);
	void LoadTechFromObject(class USaveGame* SaveGameObject);
	void LoadTechStateFromSlot(const class FString& SlotName, const int32 UserIndex);
	void LockTechnology(class UTechnologyAsset* Technology);
	void Reset();
	void SaveTechStateFromSlot(const class FString& SlotName, const int32 UserIndex);
	void SaveTechToObject(class USaveGame* SaveGameObject);
	void SelectTechTree(class UTechnologyTree* TechTree);
	void UnlockTechnology(class UTechnologyAsset* Technology);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechTreeManager">();
	}
	static class UTechTreeManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechTreeManager>();
	}
};
static_assert(alignof(UTechTreeManager) == 0x000008, "Wrong alignment on UTechTreeManager");
static_assert(sizeof(UTechTreeManager) == 0x000140, "Wrong size on UTechTreeManager");
static_assert(offsetof(UTechTreeManager, OnTechnologyUnlockStateChanged) == 0x0000A0, "Member 'UTechTreeManager::OnTechnologyUnlockStateChanged' has a wrong offset!");
static_assert(offsetof(UTechTreeManager, OnTechTreeAssigned) == 0x0000B0, "Member 'UTechTreeManager::OnTechTreeAssigned' has a wrong offset!");
static_assert(offsetof(UTechTreeManager, SaveGameTemplate) == 0x0000C0, "Member 'UTechTreeManager::SaveGameTemplate' has a wrong offset!");
static_assert(offsetof(UTechTreeManager, OnTechTreeRecovered) == 0x0000C8, "Member 'UTechTreeManager::OnTechTreeRecovered' has a wrong offset!");
static_assert(offsetof(UTechTreeManager, TechnologyTree) == 0x0000D8, "Member 'UTechTreeManager::TechnologyTree' has a wrong offset!");
static_assert(offsetof(UTechTreeManager, TechTreeWidget) == 0x0000E0, "Member 'UTechTreeManager::TechTreeWidget' has a wrong offset!");
static_assert(offsetof(UTechTreeManager, AssignedTechTrees) == 0x0000E8, "Member 'UTechTreeManager::AssignedTechTrees' has a wrong offset!");

// Class TechTree.TechTreeWidget
// 0x0078 (0x01F8 - 0x0180)
class UTechTreeWidget final : public UWidget
{
public:
	class UTechnologyTree*                        TechTree;                                          // 0x0180(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_188[0x40];                                     // 0x0188(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class UTechNodeWidget>> SlotWidgetsCached;                                 // 0x01C8(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UTechNodeArrowWidget>> ArrowWidgetsCached;                           // 0x01D8(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FTechNodeLink>                  ConnectionsCached;                                 // 0x01E8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	TArray<class UTechNodeArrowWidget*> GetArrowWidgets();
	class UTechNodeWidget* GetTechNode(class UTechnologyAsset* TechnologyAsset);
	TArray<class UTechNodeWidget*> GetTechNodeWidgets();
	void UpdateArrowPinWidgets();
	void UpdateConnections(const TArray<struct FTechNodeLink>& Connections);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TechTreeWidget">();
	}
	static class UTechTreeWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTechTreeWidget>();
	}
};
static_assert(alignof(UTechTreeWidget) == 0x000008, "Wrong alignment on UTechTreeWidget");
static_assert(sizeof(UTechTreeWidget) == 0x0001F8, "Wrong size on UTechTreeWidget");
static_assert(offsetof(UTechTreeWidget, TechTree) == 0x000180, "Member 'UTechTreeWidget::TechTree' has a wrong offset!");
static_assert(offsetof(UTechTreeWidget, SlotWidgetsCached) == 0x0001C8, "Member 'UTechTreeWidget::SlotWidgetsCached' has a wrong offset!");
static_assert(offsetof(UTechTreeWidget, ArrowWidgetsCached) == 0x0001D8, "Member 'UTechTreeWidget::ArrowWidgetsCached' has a wrong offset!");
static_assert(offsetof(UTechTreeWidget, ConnectionsCached) == 0x0001E8, "Member 'UTechTreeWidget::ConnectionsCached' has a wrong offset!");

// Class TechTree.TTBaseNode
// 0x0030 (0x0058 - 0x0028)
class UTTBaseNode : public UObject
{
public:
	int32                                         NodePosX;                                          // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NodePosY;                                          // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTTBaseNode*>                    ParentNodes;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTTBaseNode*>                    ChildNodes;                                        // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                        UniqueID;                                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TTBaseNode">();
	}
	static class UTTBaseNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTTBaseNode>();
	}
};
static_assert(alignof(UTTBaseNode) == 0x000008, "Wrong alignment on UTTBaseNode");
static_assert(sizeof(UTTBaseNode) == 0x000058, "Wrong size on UTTBaseNode");
static_assert(offsetof(UTTBaseNode, NodePosX) == 0x000028, "Member 'UTTBaseNode::NodePosX' has a wrong offset!");
static_assert(offsetof(UTTBaseNode, NodePosY) == 0x00002C, "Member 'UTTBaseNode::NodePosY' has a wrong offset!");
static_assert(offsetof(UTTBaseNode, ParentNodes) == 0x000030, "Member 'UTTBaseNode::ParentNodes' has a wrong offset!");
static_assert(offsetof(UTTBaseNode, ChildNodes) == 0x000040, "Member 'UTTBaseNode::ChildNodes' has a wrong offset!");
static_assert(offsetof(UTTBaseNode, UniqueID) == 0x000050, "Member 'UTTBaseNode::UniqueID' has a wrong offset!");

// Class TechTree.TTTechNode
// 0x0018 (0x0070 - 0x0058)
class UTTTechNode final : public UTTBaseNode
{
public:
	class UTechnologyAsset*                       TechnologyAsset;                                   // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUnlockedByDefault;                               // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0xF];                                       // 0x0061(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TTTechNode">();
	}
	static class UTTTechNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTTTechNode>();
	}
};
static_assert(alignof(UTTTechNode) == 0x000008, "Wrong alignment on UTTTechNode");
static_assert(sizeof(UTTTechNode) == 0x000070, "Wrong size on UTTTechNode");
static_assert(offsetof(UTTTechNode, TechnologyAsset) == 0x000058, "Member 'UTTTechNode::TechnologyAsset' has a wrong offset!");
static_assert(offsetof(UTTTechNode, IsUnlockedByDefault) == 0x000060, "Member 'UTTTechNode::IsUnlockedByDefault' has a wrong offset!");

}

