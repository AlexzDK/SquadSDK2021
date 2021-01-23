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

// BlueprintGeneratedClass BP_Emplaced_ZU23-2_Antiaircannon_Weapon_Deployable.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_Deployable_C
// 0x0014 (FullSize[0x0B28] - InheritedSize[0x0B14])
class ABP_Emplaced_ZU23_2_Antiaircannon_Weapon_Deployable_C : public ABP_GenericDeployableWeapon_C
{
public:
	unsigned char                                      UnknownData_OD5D[0x4];                                     // 0x0B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQBlastComponent*                           SQBlast;                                                   // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emplaced_ZU23-2_Antiaircannon_Weapon_Deployable.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_Deployable_C");
		return ptr;
	}



	void BlueprintOnFire(const struct FVector& Origin);
	void ExecuteUbergraph_BP_Emplaced_ZU23_2_Antiaircannon_Weapon_Deployable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
