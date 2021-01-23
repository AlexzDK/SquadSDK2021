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

// BlueprintGeneratedClass BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C
// 0x0010 (FullSize[0x04A0] - InheritedSize[0x0490])
class ABP_BMP2_MEA_Commander_Periscope_C : public ABP_BMP1_Periscope_INS_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BMP2_MEA_Commander_Periscope.BP_BMP2_MEA_Commander_Periscope_C");
		return ptr;
	}



	void InpActEvt_DesignateTarget_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ServerSetStabilizationHeading();
	void ExecuteUbergraph_BP_BMP2_MEA_Commander_Periscope(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
