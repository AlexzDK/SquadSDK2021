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

// BlueprintGeneratedClass BP_EmplacedSPG9_Tripod.BP_EmplacedSPG9_Tripod_C
// 0x0000 (FullSize[0x090D] - InheritedSize[0x090D])
class ABP_EmplacedSPG9_Tripod_C : public ABP_GenericDeployableTripodVehicle_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmplacedSPG9_Tripod.BP_EmplacedSPG9_Tripod_C");
		return ptr;
	}



	class USceneComponent* GetSoldierAttachComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
