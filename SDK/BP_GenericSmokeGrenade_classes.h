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

// BlueprintGeneratedClass BP_GenericSmokeGrenade.BP_GenericSmokeGrenade_C
// 0x0010 (FullSize[0x0588] - InheritedSize[0x0578])
class ABP_GenericSmokeGrenade_C : public ABP_GenericGrenade_C
{
public:
	struct FLinearColor                                SmokeColor;                                                // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericSmokeGrenade.BP_GenericSmokeGrenade_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
