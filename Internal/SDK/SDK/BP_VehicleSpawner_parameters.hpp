﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VehicleSpawner

#include "Basic.hpp"

#include "Struct_VehicleSpawner_structs.hpp"
#include "Struct_VehicleDT_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ComponentsToSave
// 0x0010 (0x0010 - 0x0000)
struct BP_VehicleSpawner_C_ComponentsToSave final
{
public:
	TArray<class UActorComponent*>                Components;                                        // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(BP_VehicleSpawner_C_ComponentsToSave) == 0x000008, "Wrong alignment on BP_VehicleSpawner_C_ComponentsToSave");
static_assert(sizeof(BP_VehicleSpawner_C_ComponentsToSave) == 0x000010, "Wrong size on BP_VehicleSpawner_C_ComponentsToSave");
static_assert(offsetof(BP_VehicleSpawner_C_ComponentsToSave, Components) == 0x000000, "Member 'BP_VehicleSpawner_C_ComponentsToSave::Components' has a wrong offset!");

// Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner
// 0x0170 (0x0170 - 0x0000)
struct BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEMSAsyncWait*                          CallFunc_AsyncWaitForOperation_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_SpawnSelectVehicles_Vehicle;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomChance_ReturnValue;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_VehicleMaster_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x0140(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_VehicleMaster_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner) == 0x000010, "Wrong alignment on BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner");
static_assert(sizeof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner) == 0x000170, "Wrong size on BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, EntryPoint) == 0x000000, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_AsyncWaitForOperation_ReturnValue) == 0x000018, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_AsyncWaitForOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_SpawnSelectVehicles_Vehicle) == 0x000028, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_SpawnSelectVehicles_Vehicle' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_RandomChance_ReturnValue) == 0x000090, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_RandomChance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_BreakTransform_Location) == 0x000098, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_BreakTransform_Rotation) == 0x0000B0, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_BreakTransform_Scale) == 0x0000C8, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_GetAllActorsOfClass_OutActors) == 0x000140, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000150, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000160, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000168, "Member 'BP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_VehicleSpawner.BP_VehicleSpawner_C.RandomChance
// 0x0030 (0x0030 - 0x0000)
struct BP_VehicleSpawner_C_RandomChance final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Chance;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatCVar_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VehicleSpawner_C_RandomChance) == 0x000008, "Wrong alignment on BP_VehicleSpawner_C_RandomChance");
static_assert(sizeof(BP_VehicleSpawner_C_RandomChance) == 0x000030, "Wrong size on BP_VehicleSpawner_C_RandomChance");
static_assert(offsetof(BP_VehicleSpawner_C_RandomChance, ReturnValue) == 0x000000, "Member 'BP_VehicleSpawner_C_RandomChance::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_RandomChance, Chance) == 0x000008, "Member 'BP_VehicleSpawner_C_RandomChance::Chance' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_RandomChance, CallFunc_GetFloatCVar_ReturnValue) == 0x000010, "Member 'BP_VehicleSpawner_C_RandomChance::CallFunc_GetFloatCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_RandomChance, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'BP_VehicleSpawner_C_RandomChance::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_RandomChance, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'BP_VehicleSpawner_C_RandomChance::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_RandomChance, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'BP_VehicleSpawner_C_RandomChance::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnSelectVehicles
// 0x01C0 (0x01C0 - 0x0000)
struct BP_VehicleSpawner_C_SpawnSelectVehicles final
{
public:
	class UClass*                                 Vehicle;                                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_VehicleSpawner                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleSpawner                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0028(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleDT                      CallFunc_Array_Random_OutItem;                     // 0x0048(0x0030)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleDT                      CallFunc_Array_Random_OutItem_1;                   // 0x0080(0x0030)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex_1;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleSpawner                 CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x00B8(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleSpawner                 CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x00D8(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleDT                      CallFunc_Array_Random_OutItem_2;                   // 0x00F8(0x0030)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex_2;                  // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleDT                      CallFunc_Array_Random_OutItem_3;                   // 0x0130(0x0030)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex_3;                  // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleSpawner                 CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x0168(0x0018)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_182[0x6];                                      // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_VehicleDT                      CallFunc_Array_Random_OutItem_4;                   // 0x0188(0x0030)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex_4;                  // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VehicleSpawner_C_SpawnSelectVehicles) == 0x000008, "Wrong alignment on BP_VehicleSpawner_C_SpawnSelectVehicles");
static_assert(sizeof(BP_VehicleSpawner_C_SpawnSelectVehicles) == 0x0001C0, "Wrong size on BP_VehicleSpawner_C_SpawnSelectVehicles");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, Vehicle) == 0x000000, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::Vehicle' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000020, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000028, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000040, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutItem) == 0x000048, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutIndex) == 0x000078, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutItem_1) == 0x000080, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutItem_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutIndex_1) == 0x0000B0, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutIndex_1' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_OutRow_2) == 0x0000B8, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_OutRow_2' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_ReturnValue_2) == 0x0000D0, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_OutRow_3) == 0x0000D8, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_OutRow_3' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_ReturnValue_3) == 0x0000F0, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutItem_2) == 0x0000F8, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutItem_2' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutIndex_2) == 0x000128, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutIndex_2' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutItem_3) == 0x000130, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutItem_3' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutIndex_3) == 0x000160, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutIndex_3' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_OutRow_4) == 0x000168, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_OutRow_4' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_GetDataTableRowFromName_ReturnValue_4) == 0x000180, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_GetDataTableRowFromName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, K2Node_SwitchEnum_CmpSuccess) == 0x000181, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutItem_4) == 0x000188, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutItem_4' has a wrong offset!");
static_assert(offsetof(BP_VehicleSpawner_C_SpawnSelectVehicles, CallFunc_Array_Random_OutIndex_4) == 0x0001B8, "Member 'BP_VehicleSpawner_C_SpawnSelectVehicles::CallFunc_Array_Random_OutIndex_4' has a wrong offset!");

}

