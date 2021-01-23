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

// BlueprintGeneratedClass BP_T72B3_Turret.BP_T72B3_Turret_C
// 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
class ABP_T72B3_Turret_C : public ABP_GenericVehicleClosedTurret_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_T72B3_Turret.BP_T72B3_Turret_C");
		return ptr;
	}



	void InpActEvt_DesignateTarget_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ServerSetStabilizationHeading();
	void ExecuteUbergraph_BP_T72B3_Turret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
