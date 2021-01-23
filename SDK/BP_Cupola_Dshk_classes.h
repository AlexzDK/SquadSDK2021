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

// BlueprintGeneratedClass BP_Cupola_Dshk.BP_Cupola_Dshk_C
// 0x0008 (FullSize[0x0B28] - InheritedSize[0x0B20])
class ABP_Cupola_Dshk_C : public ABP_GenericVehicleOpenTurretWeapon_C
{
public:
	class UStaticMeshComponent*                        shield;                                                    // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cupola_Dshk.BP_Cupola_Dshk_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
