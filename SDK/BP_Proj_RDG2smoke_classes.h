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

// BlueprintGeneratedClass BP_Proj_RDG2smoke.BP_Proj_RDG2smoke_C
// 0x000C (FullSize[0x05CC] - InheritedSize[0x05C0])
class ABP_Proj_RDG2smoke_C : public ABP_Grenade_Proj_Smoke_C
{
public:
	class UAudioComponent*                             Audio;                                                     // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeDelay_1;                                              // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Proj_RDG2smoke.BP_Proj_RDG2smoke_C");
		return ptr;
	}



	void CreateSmoke();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
