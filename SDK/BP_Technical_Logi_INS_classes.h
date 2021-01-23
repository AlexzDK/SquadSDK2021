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

// BlueprintGeneratedClass BP_Technical_Logi_INS.BP_Technical_Logi_INS_C
// 0x0011 (FullSize[0x0AE1] - InheritedSize[0x0AD0])
class ABP_Technical_Logi_INS_C : public ABP_Technical_Dshk_INS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SupplyDecoration;                                          // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Initialized;                                               // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Technical_Logi_INS.BP_Technical_Logi_INS_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_Technical_Logi_INS(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
