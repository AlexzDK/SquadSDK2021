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

// BlueprintGeneratedClass BP_CommandActor_Mortar_Radius.BP_CommandActor_Mortar_Radius_C
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class ABP_CommandActor_Mortar_Radius_C : public ABP_CommandActor_ArtilleryBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommandActor_Mortar_Radius.BP_CommandActor_Mortar_Radius_C");
		return ptr;
	}



	void Get_Radius(float* Radius);
	void Get_Distance(float* Dist);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
