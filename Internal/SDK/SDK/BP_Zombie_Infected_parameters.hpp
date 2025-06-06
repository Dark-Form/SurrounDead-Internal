﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Zombie_Infected

#include "Basic.hpp"

#include "AIOptimizer_structs.hpp"


namespace SDK::Params
{

// Function BP_Zombie_Infected.BP_Zombie_Infected_C.BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature final
{
public:
	bool                                          bIsBeyondLastLayer;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LayerIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSeen;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature) == 0x000004, "Wrong alignment on BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature");
static_assert(sizeof(BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature) == 0x00000C, "Wrong size on BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature");
static_assert(offsetof(BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature, bIsBeyondLastLayer) == 0x000000, "Member 'BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature::bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature, LayerIndex) == 0x000004, "Member 'BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature::LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature, bIsSeen) == 0x000008, "Member 'BP_Zombie_Infected_C_BndEvt__BP_Zombie_Master_AIOSubject_K2Node_ComponentBoundEvent_2_OnOptimizationUpdate__DelegateSignature::bIsSeen' has a wrong offset!");

// Function BP_Zombie_Infected.BP_Zombie_Infected_C.ExecuteUbergraph_BP_Zombie_Infected
// 0x0070 (0x0070 - 0x0000)
struct BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsBeyondLastLayer;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_LayerIndex;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSeen;                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIOptimizerSubsystem*                  CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatCVar_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatCVar_ReturnValue_1;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAIOSubjectHandle                      CallFunc_K2_DespawnSubject_SubjectHandle;          // 0x0054(0x0004)(NoDestructor)
	bool                                          CallFunc_K2_DespawnSubject_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected) == 0x000008, "Wrong alignment on BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected");
static_assert(sizeof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected) == 0x000070, "Wrong size on BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, EntryPoint) == 0x000000, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, K2Node_ComponentBoundEvent_bIsBeyondLastLayer) == 0x000004, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::K2Node_ComponentBoundEvent_bIsBeyondLastLayer' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, K2Node_ComponentBoundEvent_LayerIndex) == 0x000008, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::K2Node_ComponentBoundEvent_LayerIndex' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, K2Node_ComponentBoundEvent_bIsSeen) == 0x00000C, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::K2Node_ComponentBoundEvent_bIsSeen' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000010, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_GetFloatCVar_ReturnValue) == 0x000020, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_GetFloatCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_FTrunc_ReturnValue) == 0x000030, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_GetFloatCVar_ReturnValue_1) == 0x000038, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_GetFloatCVar_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_FTrunc_ReturnValue_1) == 0x000048, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x00004C, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000050, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_K2_DespawnSubject_SubjectHandle) == 0x000054, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_K2_DespawnSubject_SubjectHandle' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_K2_DespawnSubject_ReturnValue) == 0x000058, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_K2_DespawnSubject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000068, "Member 'BP_Zombie_Infected_C_ExecuteUbergraph_BP_Zombie_Infected::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

}

