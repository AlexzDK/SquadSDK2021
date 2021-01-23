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

// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	MAX                            = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0010
struct FActorSequenceObjectReferences
{
	TArray<struct FActorSequenceObjectReference>       Array;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0028
struct FActorSequenceObjectReference
{
	EActorSequenceObjectReferenceType                  Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TTAI[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ActorId;                                                   // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MPDI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PathToComponent;                                           // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0020
struct FActorSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FActorSequenceObjectReferences>      References;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
