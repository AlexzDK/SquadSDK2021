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

// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ExactClass                     = 0,
	IsChildOf                      = 1,
	MAX                            = 2,

};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	Grid                           = 0,
	Vertical                       = 1,
	Horizontal                     = 2,
	MAX                            = 3,

};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	Vertical                       = 2,
	Horizontal                     = 3,
	MAX                            = 4,

};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	MAX                            = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.GameModeName
// 0x0028
struct FGameModeName
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                              GameMode;                                                  // 0x0010(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Desc;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PV8U[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
