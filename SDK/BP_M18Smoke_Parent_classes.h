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

// BlueprintGeneratedClass BP_M18Smoke_Parent.BP_M18Smoke_Parent_C
// 0x0010 (FullSize[0x0598] - InheritedSize[0x0588])
class ABP_M18Smoke_Parent_C : public ABP_GenericSmokeGrenade_C
{
public:
	struct FLinearColor                                GrenadeColor;                                              // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M18Smoke_Parent.BP_M18Smoke_Parent_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
