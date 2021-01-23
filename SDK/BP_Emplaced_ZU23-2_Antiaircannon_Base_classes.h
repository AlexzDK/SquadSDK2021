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

// BlueprintGeneratedClass BP_Emplaced_ZU23-2_Antiaircannon_Base.BP_Emplaced_ZU23-2_Antiaircannon_Base_C
// 0x000B (FullSize[0x0918] - InheritedSize[0x090D])
class ABP_Emplaced_ZU23_2_Antiaircannon_Base_C : public ABP_GenericDeployableTripodVehicle_C
{
public:
	unsigned char                                      UnknownData_814L[0x3];                                     // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBPComponent_RadialModel_C*                  BPComponent_RadialModel;                                   // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emplaced_ZU23-2_Antiaircannon_Base.BP_Emplaced_ZU23-2_Antiaircannon_Base_C");
		return ptr;
	}



	class USceneComponent* GetWeaponAttachComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
