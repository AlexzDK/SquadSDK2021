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

// BlueprintGeneratedClass BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C
// 0x000D (FullSize[0x0468] - InheritedSize[0x045B])
class ABP_Technical_Turret_SPG9_C : public ABP_GenericVehicleOpenTurret_C
{
public:
	unsigned char                                      UnknownData_L1NU[0x5];                                     // 0x045B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Technical_Turret_SPG9.BP_Technical_Turret_SPG9_C");
		return ptr;
	}



	void InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Focus_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_BP_Technical_Turret_SPG9(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
