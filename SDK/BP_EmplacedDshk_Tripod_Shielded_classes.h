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

// BlueprintGeneratedClass BP_EmplacedDshk_Tripod_Shielded.BP_EmplacedDshk_Tripod_Shielded_C
// 0x000B (FullSize[0x0918] - InheritedSize[0x090D])
class ABP_EmplacedDshk_Tripod_Shielded_C : public ABP_EmplacedDshk_Tripod_C
{
public:
	unsigned char                                      UnknownData_WNES[0x3];                                     // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        ShieldCollision;                                           // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmplacedDshk_Tripod_Shielded.BP_EmplacedDshk_Tripod_Shielded_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
