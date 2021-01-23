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

// BlueprintGeneratedClass BP_BMP2_MEA_2A42_AP.BP_BMP2_MEA_2A42_AP_C
// 0x0008 (FullSize[0x0A48] - InheritedSize[0x0A40])
class ABP_BMP2_MEA_2A42_AP_C : public ABP_BTR82A_RUS_2A72_AP_C
{
public:
	float                                              StartFireTime;                                             // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverheatTime;                                              // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMP2_MEA_2A42_AP.BP_BMP2_MEA_2A42_AP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
