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

// BlueprintGeneratedClass BP_Emplaced_ZU23-2_Antiaircannon_Weapon.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_C
// 0x0010 (FullSize[0x0B30] - InheritedSize[0x0B20])
class ABP_Emplaced_ZU23_2_Antiaircannon_Weapon_C : public ABP_GenericVehicleOpenTurretWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQBlastComponent*                           SQBlast;                                                   // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emplaced_ZU23-2_Antiaircannon_Weapon.BP_Emplaced_ZU23-2_Antiaircannon_Weapon_C");
		return ptr;
	}



	void BlueprintOnFire(const struct FVector& Origin);
	void ExecuteUbergraph_BP_Emplaced_ZU23_2_Antiaircannon_Weapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
