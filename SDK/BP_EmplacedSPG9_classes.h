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

// BlueprintGeneratedClass BP_EmplacedSPG9.BP_EmplacedSPG9_C
// 0x0014 (FullSize[0x0B28] - InheritedSize[0x0B14])
class ABP_EmplacedSPG9_C : public ABP_GenericDeployableWeapon_C
{
public:
	unsigned char                                      UnknownData_2JBN[0x4];                                     // 0x0B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQBlastComponent*                           SquadBlast;                                                // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmplacedSPG9.BP_EmplacedSPG9_C");
		return ptr;
	}



	void UserConstructionScript();
	void BlueprintOnFire(const struct FVector& Origin);
	void BlueprintOnEquip();
	void ExecuteUbergraph_BP_EmplacedSPG9(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
