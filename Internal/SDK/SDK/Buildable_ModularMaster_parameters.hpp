﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Buildable_ModularMaster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Buildable_ModularMaster.Buildable_ModularMaster_C.ExecuteUbergraph_Buildable_ModularMaster
// 0x00F8 (0x00F8 - 0x0000)
struct Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FText>                K2Node_MakeMap_Map;                                // 0x0008(0x0050)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD_Game_C*                            CallFunc_GetHUD_HUD;                               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABuildable_ModularMaster_C*>     CallFunc_GetSnappedObjects_OverlappingObjects;     // 0x0070(0x0010)(ReferenceParm)
	TMap<struct FGameplayTag, class FText>        K2Node_MakeMap_Map_1;                              // 0x0080(0x0050)(ConstParm)
	class ABuildable_ModularMaster_C*             CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Buildables_C>     K2Node_DynamicCast_AsBPI_Buildables;               // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster) == 0x000008, "Wrong alignment on Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster");
static_assert(sizeof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster) == 0x0000F8, "Wrong size on Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, EntryPoint) == 0x000000, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::EntryPoint' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, K2Node_MakeMap_Map) == 0x000008, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, Temp_int_Array_Index_Variable) == 0x000060, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_GetHUD_HUD) == 0x000068, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_GetHUD_HUD' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_GetSnappedObjects_OverlappingObjects) == 0x000070, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_GetSnappedObjects_OverlappingObjects' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, K2Node_MakeMap_Map_1) == 0x000080, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::K2Node_MakeMap_Map_1' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, K2Node_DynamicCast_AsBPI_Buildables) == 0x0000D8, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::K2Node_DynamicCast_AsBPI_Buildables' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_IsValid_ReturnValue) == 0x0000E9, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_Array_Length_ReturnValue) == 0x0000EC, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'Buildable_ModularMaster_C_ExecuteUbergraph_Buildable_ModularMaster::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Buildable_ModularMaster.Buildable_ModularMaster_C.GetSnappedObjects
// 0x0380 (0x0380 - 0x0000)
struct Buildable_ModularMaster_C_GetSnappedObjects final
{
public:
	TArray<class ABuildable_ModularMaster_C*>     OverlappingObjects;                                // 0x0000(0x0010)(Parm, OutParm)
	TArray<class ABuildable_ModularMaster_C*>     LocalOverlappingObjects;                           // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0050(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                       CallFunc_GetBounds_ReturnValue;                    // 0x00B0(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakBoxSphereBounds_Origin;              // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FHitResult>                     CallFunc_BoxTraceMultiForObjects_OutHits;          // 0x0188(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_BoxTraceMultiForObjects_ReturnValue;      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x01A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x028D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28E[0x2];                                      // 0x028E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0308(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0348(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildable_ModularMaster_C*             K2Node_DynamicCast_AsBuildable_Modular_Master;     // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x3];                                      // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Buildable_ModularMaster_C_GetSnappedObjects) == 0x000010, "Wrong alignment on Buildable_ModularMaster_C_GetSnappedObjects");
static_assert(sizeof(Buildable_ModularMaster_C_GetSnappedObjects) == 0x000380, "Wrong size on Buildable_ModularMaster_C_GetSnappedObjects");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, OverlappingObjects) == 0x000000, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::OverlappingObjects' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, LocalOverlappingObjects) == 0x000010, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::LocalOverlappingObjects' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, Temp_object_Variable) == 0x000020, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, Temp_int_Array_Index_Variable) == 0x000030, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000038, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000050, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_GetBounds_ReturnValue) == 0x0000B0, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_GetBounds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakBoxSphereBounds_Origin) == 0x0000E8, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakBoxSphereBounds_Origin' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakBoxSphereBounds_BoxExtent) == 0x000100, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakBoxSphereBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakBoxSphereBounds_SphereRadius) == 0x000118, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakBoxSphereBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00011C, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_TransformLocation_ReturnValue) == 0x000120, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakVector_X) == 0x000138, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakVector_Y) == 0x000140, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakVector_Z) == 0x000148, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000150, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_MakeVector_ReturnValue) == 0x000158, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, K2Node_MakeArray_Array) == 0x000170, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, Temp_int_Loop_Counter_Variable) == 0x000180, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BoxTraceMultiForObjects_OutHits) == 0x000188, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BoxTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BoxTraceMultiForObjects_ReturnValue) == 0x000198, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BoxTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Array_Length_ReturnValue) == 0x000288, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_bBlockingHit) == 0x00028C, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_bInitialOverlap) == 0x00028D, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_Time) == 0x000290, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_Distance) == 0x000294, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_Location) == 0x000298, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_ImpactPoint) == 0x0002B0, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_Normal) == 0x0002C8, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_ImpactNormal) == 0x0002E0, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_PhysMat) == 0x0002F8, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_HitActor) == 0x000300, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_HitComponent) == 0x000308, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_HitBoneName) == 0x000310, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_BoneName) == 0x000318, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_HitItem) == 0x000320, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_ElementIndex) == 0x000324, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_FaceIndex) == 0x000328, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_TraceStart) == 0x000330, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_BreakHitResult_TraceEnd) == 0x000348, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Less_IntInt_ReturnValue) == 0x000360, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, K2Node_DynamicCast_AsBuildable_Modular_Master) == 0x000368, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::K2Node_DynamicCast_AsBuildable_Modular_Master' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, K2Node_DynamicCast_bSuccess) == 0x000370, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Array_AddUnique_ReturnValue) == 0x000374, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_Add_IntInt_ReturnValue) == 0x000378, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Buildable_ModularMaster_C_GetSnappedObjects, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00037C, "Member 'Buildable_ModularMaster_C_GetSnappedObjects::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

