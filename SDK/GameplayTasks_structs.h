#pragma once

// Name: Squad, Version: 13-01-2021


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop                     = 0,
	StartAtEnd                     = 1,
	MAX                            = 2,

};

// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	MAX                            = 5,

};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	MAX                            = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{
	unsigned char                                      UnknownData_W7U2[0x2];                                     // 0x0000(0x0002) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
