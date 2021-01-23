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

// BlueprintGeneratedClass BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C
// 0x007A (FullSize[0x044A] - InheritedSize[0x03D0])
class ABP_Technical_Turret_UB32_C : public ASQVehicleSeat
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera1pComponent;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AdsCamera1pPositionComponent;                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Camera1pPositionComponent;                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQRotationMovementAudioComponent*           SQRotationMovementAudio;                                   // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQRotatingMovementComponent*                YawMovement;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQRotatingMovementComponent*                PitchMovement;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MisslePod_Collision;                                       // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        UB_32_mount;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             GunMountComponent;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Turret_SkeletalMesh;                                       // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleInventoryComponent*                SQVehicleInventory;                                        // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      TurretOverlay;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 PlayerControllerRef;                                       // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResetOrientationPitch;                                     // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ResetOrientationYaw;                                       // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C");
		return ptr;
	}



	void IsCurrentWeaponInputEnabled(bool* bInputEnabled);
	bool IsSoldierAlive();
	class USceneComponent* GetADSCameraLocationComponent();
	class USceneComponent* GetDefaultCameraLocationComponent();
	class USceneComponent* GetSoldierAttachComponent();
	class USceneComponent* GetWeaponAttachComponent();
	class USkinnedMeshComponent* GetMasterPoseComponent();
	class USceneComponent* Get1PAttachComponent();
	class USceneComponent* Get3PAttachComponent();
	void UserConstructionScript();
	void InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_43(float AxisValue);
	void InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58(float AxisValue);
	void InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62(float AxisValue);
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void ExecuteUbergraph_BP_Technical_Turret_UB32(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
