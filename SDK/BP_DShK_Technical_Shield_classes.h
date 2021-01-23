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

// BlueprintGeneratedClass BP_DShK_Technical_Shield.BP_DShK_Technical_Shield_C
// 0x0008 (FullSize[0x0B30] - InheritedSize[0x0B28])
class ABP_DShK_Technical_Shield_C : public ABP_DShK_Technical_C
{
public:
	class UStaticMeshComponent*                        shield;                                                    // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DShK_Technical_Shield.BP_DShK_Technical_Shield_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
