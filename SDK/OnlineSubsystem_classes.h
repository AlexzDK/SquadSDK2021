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
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystem.TurnBasedMatchInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedMatchInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.TurnBasedMatchInterface");
		return ptr;
	}



	void OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive);
	void OnMatchEnded(const struct FString& Match);
};

// Class OnlineSubsystem.NamedInterfaces
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>                     NamedInterfaces;                                           // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>                  NamedInterfaceDefs;                                        // 0x0038(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_STCK[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystem.NamedInterfaces");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
