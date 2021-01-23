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

// BlueprintGeneratedClass BP_EmplacedBGM71TOW_Tripod.BP_EmplacedBGM71TOW_Tripod_C
// 0x0001 (FullSize[0x090E] - InheritedSize[0x090D])
class ABP_EmplacedBGM71TOW_Tripod_C : public ABP_GenericDeployableTripodVehicle_C
{
public:
	bool                                               bIsPossessed;                                              // 0x090D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmplacedBGM71TOW_Tripod.BP_EmplacedBGM71TOW_Tripod_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
