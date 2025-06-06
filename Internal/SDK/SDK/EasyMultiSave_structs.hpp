﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EasyMultiSave

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum EasyMultiSave.ENextStepType
// NumValues: 0x0003
enum class ENextStepType : uint8
{
	SaveLevel                                = 0,
	FinishSave                               = 1,
	ENextStepType_MAX                        = 2,
};

// Enum EasyMultiSave.EUpdateActorResult
// NumValues: 0x0004
enum class EUpdateActorResult : uint8
{
	RES_Success                              = 0,
	RES_Skip                                 = 1,
	RES_ShouldSpawnNewActor                  = 2,
	RES_MAX                                  = 3,
};

// Enum EasyMultiSave.EDataLoadType
// NumValues: 0x0004
enum class EDataLoadType : uint8
{
	DATA_Level                               = 0,
	DATA_Player                              = 1,
	DATA_Object                              = 2,
	DATA_MAX                                 = 3,
};

// Enum EasyMultiSave.EActorType
// NumValues: 0x0009
enum class EActorType : uint8
{
	AT_Runtime                               = 0,
	AT_Placed                                = 1,
	AT_LevelScript                           = 2,
	AT_PlayerActor                           = 3,
	AT_PlayerPawn                            = 4,
	AT_GameObject                            = 5,
	AT_Persistent                            = 6,
	AT_Destroyed                             = 7,
	AT_MAX                                   = 8,
};

// Enum EasyMultiSave.ESaveGameMode
// NumValues: 0x0004
enum class ESaveGameMode : uint8
{
	MODE_Player                              = 0,
	MODE_Level                               = 1,
	MODE_All                                 = 2,
	MODE_MAX                                 = 3,
};

// Enum EasyMultiSave.EAsyncCheckType
// NumValues: 0x0004
enum class EAsyncCheckType : uint8
{
	CT_Both                                  = 0,
	CT_Save                                  = 1,
	CT_Load                                  = 2,
	CT_MAX                                   = 3,
};

// Enum EasyMultiSave.ESaveErrorType
// NumValues: 0x0004
enum class ESaveErrorType : uint8
{
	ER_Player                                = 0,
	ER_Level                                 = 1,
	ER_Object                                = 2,
	ER_MAX                                   = 3,
};

// Enum EasyMultiSave.EPrepareType
// NumValues: 0x0004
enum class EPrepareType : uint8
{
	PT_Default                               = 0,
	PT_RuntimeOnly                           = 1,
	PT_FullReload                            = 2,
	PT_MAX                                   = 3,
};

// Enum EasyMultiSave.ELoadMethod
// NumValues: 0x0004
enum class ELoadMethod : uint8
{
	LM_Default                               = 0,
	LM_Deferred                              = 1,
	LM_Thread                                = 2,
	LM_MAX                                   = 3,
};

// Enum EasyMultiSave.EFileSaveMethod
// NumValues: 0x0003
enum class EFileSaveMethod : uint8
{
	FM_Desktop                               = 0,
	FM_Console                               = 1,
	FM_MAX                                   = 2,
};

// Enum EasyMultiSave.ESaveTypeFlags
// NumValues: 0x0003
enum class ESaveTypeFlags : uint8
{
	SF_Player                                = 0,
	SF_Level                                 = 1,
	SF_MAX                                   = 2,
};

// Enum EasyMultiSave.ELoadTypeFlags
// NumValues: 0x0003
enum class ELoadTypeFlags : uint8
{
	LF_Player                                = 0,
	LF_Level                                 = 1,
	LF_MAX                                   = 2,
};

// Enum EasyMultiSave.EMultiLevelSaveMethod
// NumValues: 0x0005
enum class EMultiLevelSaveMethod : uint8
{
	ML_Disabled                              = 0,
	ML_Normal                                = 1,
	ML_Stream                                = 2,
	ML_Full                                  = 3,
	ML_MAX                                   = 4,
};

// Enum EasyMultiSave.EThumbnailImageFormat
// NumValues: 0x0003
enum class EThumbnailImageFormat : uint8
{
	Png                                      = 0,
	Jpeg                                     = 1,
	EThumbnailImageFormat_MAX                = 2,
};

// Enum EasyMultiSave.ESaveFileCheckType
// NumValues: 0x0005
enum class ESaveFileCheckType : uint8
{
	CheckForGame                             = 0,
	CheckForCustom                           = 1,
	CheckForCustomSlot                       = 2,
	CheckForSlotOnly                         = 3,
	ESaveFileCheckType_MAX                   = 4,
};

// Enum EasyMultiSave.EOldPackageEngine
// NumValues: 0x0004
enum class EOldPackageEngine : uint8
{
	EN_UE40                                  = 0,
	EN_UE50                                  = 1,
	EN_UE54                                  = 2,
	EN_MAX                                   = 3,
};

// Enum EasyMultiSave.EWorldPartitionMethod
// NumValues: 0x0005
enum class EWorldPartitionMethod : uint8
{
	Enabled                                  = 0,
	MemoryOnly                               = 1,
	LoadOnly                                 = 2,
	Disabled                                 = 3,
	EWorldPartitionMethod_MAX                = 4,
};

// Enum EasyMultiSave.EWorldPartitionInit
// NumValues: 0x0003
enum class EWorldPartitionInit : uint8
{
	Default                                  = 0,
	Skip                                     = 1,
	EWorldPartitionInit_MAX                  = 2,
};

// Enum EasyMultiSave.ELoadedStateMod
// NumValues: 0x0004
enum class ELoadedStateMod : uint8
{
	NoModify                                 = 0,
	Unloaded                                 = 1,
	Loaded                                   = 2,
	ELoadedStateMod_MAX                      = 3,
};

// ScriptStruct EasyMultiSave.SaveSlotInfo
// 0x0030 (0x0030 - 0x0000)
struct FSaveSlotInfo final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              Timestamp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Level;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         Players;                                           // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSaveSlotInfo) == 0x000008, "Wrong alignment on FSaveSlotInfo");
static_assert(sizeof(FSaveSlotInfo) == 0x000030, "Wrong size on FSaveSlotInfo");
static_assert(offsetof(FSaveSlotInfo, Name) == 0x000000, "Member 'FSaveSlotInfo::Name' has a wrong offset!");
static_assert(offsetof(FSaveSlotInfo, Timestamp) == 0x000010, "Member 'FSaveSlotInfo::Timestamp' has a wrong offset!");
static_assert(offsetof(FSaveSlotInfo, Level) == 0x000018, "Member 'FSaveSlotInfo::Level' has a wrong offset!");
static_assert(offsetof(FSaveSlotInfo, Players) == 0x000020, "Member 'FSaveSlotInfo::Players' has a wrong offset!");

// ScriptStruct EasyMultiSave.RawObjectSaveData
// 0x0018 (0x0018 - 0x0000)
struct FRawObjectSaveData final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0008(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRawObjectSaveData) == 0x000008, "Wrong alignment on FRawObjectSaveData");
static_assert(sizeof(FRawObjectSaveData) == 0x000018, "Wrong size on FRawObjectSaveData");
static_assert(offsetof(FRawObjectSaveData, Object) == 0x000000, "Member 'FRawObjectSaveData::Object' has a wrong offset!");
static_assert(offsetof(FRawObjectSaveData, ID) == 0x000008, "Member 'FRawObjectSaveData::ID' has a wrong offset!");

// ScriptStruct EasyMultiSave.ComponentSaveData
// 0x0080 (0x0080 - 0x0000)
struct alignas(0x10) FComponentSaveData final
{
public:
	uint8                                         Pad_0[0x80];                                       // 0x0000(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FComponentSaveData) == 0x000010, "Wrong alignment on FComponentSaveData");
static_assert(sizeof(FComponentSaveData) == 0x000080, "Wrong size on FComponentSaveData");

// ScriptStruct EasyMultiSave.GameObjectSaveData
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FGameObjectSaveData final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameObjectSaveData) == 0x000008, "Wrong alignment on FGameObjectSaveData");
static_assert(sizeof(FGameObjectSaveData) == 0x000020, "Wrong size on FGameObjectSaveData");

// ScriptStruct EasyMultiSave.ActorSaveData
// 0x00B0 (0x00B0 - 0x0000)
struct alignas(0x10) FActorSaveData final
{
public:
	uint8                                         Pad_0[0xB0];                                       // 0x0000(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActorSaveData) == 0x000010, "Wrong alignment on FActorSaveData");
static_assert(sizeof(FActorSaveData) == 0x0000B0, "Wrong size on FActorSaveData");

// ScriptStruct EasyMultiSave.LevelScriptSaveData
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FLevelScriptSaveData final
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelScriptSaveData) == 0x000008, "Wrong alignment on FLevelScriptSaveData");
static_assert(sizeof(FLevelScriptSaveData) == 0x000028, "Wrong size on FLevelScriptSaveData");

// ScriptStruct EasyMultiSave.LevelArchive
// 0x0068 (0x0068 - 0x0000)
struct alignas(0x08) FLevelArchive final
{
public:
	uint8                                         Pad_0[0x68];                                       // 0x0000(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelArchive) == 0x000008, "Wrong alignment on FLevelArchive");
static_assert(sizeof(FLevelArchive) == 0x000068, "Wrong size on FLevelArchive");

// ScriptStruct EasyMultiSave.LevelStackArchive
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FLevelStackArchive final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelStackArchive) == 0x000008, "Wrong alignment on FLevelStackArchive");
static_assert(sizeof(FLevelStackArchive) == 0x000050, "Wrong size on FLevelStackArchive");

// ScriptStruct EasyMultiSave.PawnSaveData
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FPawnSaveData final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPawnSaveData) == 0x000008, "Wrong alignment on FPawnSaveData");
static_assert(sizeof(FPawnSaveData) == 0x000050, "Wrong size on FPawnSaveData");

// ScriptStruct EasyMultiSave.ControllerSaveData
// 0x0038 (0x0038 - 0x0000)
struct alignas(0x08) FControllerSaveData final
{
public:
	uint8                                         Pad_0[0x38];                                       // 0x0000(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FControllerSaveData) == 0x000008, "Wrong alignment on FControllerSaveData");
static_assert(sizeof(FControllerSaveData) == 0x000038, "Wrong size on FControllerSaveData");

// ScriptStruct EasyMultiSave.PlayerArchive
// 0x00B0 (0x00B0 - 0x0000)
struct alignas(0x08) FPlayerArchive final
{
public:
	uint8                                         Pad_0[0xB0];                                       // 0x0000(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPlayerArchive) == 0x000008, "Wrong alignment on FPlayerArchive");
static_assert(sizeof(FPlayerArchive) == 0x0000B0, "Wrong size on FPlayerArchive");

// ScriptStruct EasyMultiSave.PlayerPositionArchive
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FPlayerPositionArchive final
{
public:
	uint8                                         Pad_0[0x48];                                       // 0x0000(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPlayerPositionArchive) == 0x000008, "Wrong alignment on FPlayerPositionArchive");
static_assert(sizeof(FPlayerPositionArchive) == 0x000048, "Wrong size on FPlayerPositionArchive");

// ScriptStruct EasyMultiSave.PlayerStackArchive
// 0x0100 (0x0100 - 0x0000)
struct alignas(0x08) FPlayerStackArchive final
{
public:
	uint8                                         Pad_0[0x100];                                      // 0x0000(0x0100)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPlayerStackArchive) == 0x000008, "Wrong alignment on FPlayerStackArchive");
static_assert(sizeof(FPlayerStackArchive) == 0x000100, "Wrong size on FPlayerStackArchive");

// ScriptStruct EasyMultiSave.MultiLevelStreamingData
// 0x0070 (0x0070 - 0x0000)
struct alignas(0x08) FMultiLevelStreamingData final
{
public:
	uint8                                         Pad_0[0x70];                                       // 0x0000(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMultiLevelStreamingData) == 0x000008, "Wrong alignment on FMultiLevelStreamingData");
static_assert(sizeof(FMultiLevelStreamingData) == 0x000070, "Wrong size on FMultiLevelStreamingData");

// ScriptStruct EasyMultiSave.SaveVersionInfo
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FSaveVersionInfo final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSaveVersionInfo) == 0x000008, "Wrong alignment on FSaveVersionInfo");
static_assert(sizeof(FSaveVersionInfo) == 0x000020, "Wrong size on FSaveVersionInfo");

}

