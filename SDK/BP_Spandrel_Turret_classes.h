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

// BlueprintGeneratedClass BP_Spandrel_Turret.BP_Spandrel_Turret_C
// 0x0070 (FullSize[0x04A0] - InheritedSize[0x0430])
class ABP_Spandrel_Turret_C : public ASQVehicleTurretClosedTop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RocketCollision;                                           // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        TurretCollision;                                           // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleInventoryComponent*                SQVehicleInventory;                                        // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVelocityRotatingMovementComponent*        PitchMovement;                                             // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVelocityRotatingMovementComponent*        YawMovement;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQRotationMovementAudioComponent*           SQRotationMovementAudio;                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FirstPersonCamera;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             GunAttachPoint;                                            // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Spandrel_Turret;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_lerp_99ADC222455538CBB18B008830716284;          // 0x0490(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_99ADC222455538CBB18B008830716284;    // 0x0494(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LAFM[0x3];                                     // 0x0495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spandrel_Turret.BP_Spandrel_Turret_C");
		return ptr;
	}



	class USQMovementComponentBase* GetPitchMovementComponent();
	class USQMovementComponentBase* GetYawMovementComponent();
	class USceneComponent* GetSoldierAttachComponent();
	class USkinnedMeshComponent* GetMasterPoseComponent();
	class USceneComponent* GetWeaponAttachComponent();
	class USceneComponent* GetADSCameraLocationComponent();
	class USceneComponent* Get3PAttachComponent();
	class USceneComponent* Get1PAttachComponent();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_ToggleStabilization_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_ToggleStabilization_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ResetZoom();
	void BP_OnVehicleZoom();
	void ExecuteUbergraph_BP_Spandrel_Turret(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
