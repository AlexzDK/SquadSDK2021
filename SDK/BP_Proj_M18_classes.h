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

// BlueprintGeneratedClass BP_Proj_M18.BP_Proj_M18_C
// 0x0028 (FullSize[0x05E8] - InheritedSize[0x05C0])
class ABP_Proj_M18_C : public ABP_Grenade_Proj_Smoke_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SmokePop;                                                  // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SpoonEject;                                                // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                GrenadeColor;                                              // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Proj_M18.BP_Proj_M18_C");
		return ptr;
	}



	void CreateSmoke();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Proj_M18(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
