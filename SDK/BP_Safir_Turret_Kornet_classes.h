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

// BlueprintGeneratedClass BP_Safir_Turret_Kornet.BP_Safir_Turret_Kornet_C
// 0x0046 (FullSize[0x04A1] - InheritedSize[0x045B])
class ABP_Safir_Turret_Kornet_C : public ABP_GenericVehicleOpenTurret_C
{
public:
	unsigned char                                      UnknownData_Q4H2[0x5];                                     // 0x045B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              InterpolateZoom_lerp_504E23004D22C38DF2DE5992FF72372B;     // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    InterpolateZoom__Direction_504E23004D22C38DF2DE5992FF72372B; // 0x046C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_55FO[0x3];                                     // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          InterpolateZoom;                                           // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ZoomLevel;                                                 // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentZoom;                                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      ZoomLevels;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      TurretOverlay;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 PlayerControllerRef;                                       // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseVehicleZoom;                                           // 0x04A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Safir_Turret_Kornet.BP_Safir_Turret_Kornet_C");
		return ptr;
	}



	void InterpolateZoom__FinishedFunc();
	void InterpolateZoom__UpdateFunc();
	void InpActEvt_Focus_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Focus_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_VehicleZoom_K2Node_InputActionEvent_1(const struct FKey& Key);
	void CycleZoom();
	void ResetZoom();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void NetworkResetZoom();
	void ExecuteUbergraph_BP_Safir_Turret_Kornet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
