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

// BlueprintGeneratedClass BP_Soldier_INS_Sapper.BP_Soldier_INS_Sapper_C
// 0x0008 (FullSize[0x1B80] - InheritedSize[0x1B78])
class ABP_Soldier_INS_Sapper_C : public ABP_Soldier_INS_Rifleman1_C
{
public:
	class UStaticMeshComponent*                        mine;                                                      // 0x1B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Soldier_INS_Sapper.BP_Soldier_INS_Sapper_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
