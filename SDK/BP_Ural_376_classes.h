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

// BlueprintGeneratedClass BP_Ural_376.BP_Ural_375_C
// 0x00D0 (FullSize[0x0AF0] - InheritedSize[0x0A20])
class ABP_Ural_375_C : public ASQNWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        CommandZone;                                               // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPComponent_RadialModel_C*                  Vehicle_Radial;                                            // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleWheel*                             wheel_R3;                                                  // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleWheel*                             wheel_L3;                                                  // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleWheel*                             Wheel_R2;                                                  // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleWheel*                             Wheel_L2;                                                  // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleWheel*                             Wheel_R1;                                                  // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleWheel*                             Wheel_L1;                                                  // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleEngine*                            EngineComponent;                                           // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            DriverCamera;                                              // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         Driver_SpringArm;                                          // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleResourceWeaponInventoryComponent*  SQVehicleResourceWeaponInventory;                          // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Ural_375_Collision;                                        // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQMapIconComponent*                         SQMapIcon;                                                 // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleExitPointComponent*                SQVehicleExitPoint5;                                       // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleExitPointComponent*                SQVehicleExitPoint4;                                       // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleBurningComponent*                  SQVehicleBurning;                                          // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleExitPointComponent*                SQVehicleExitPoint3;                                       // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleExitPointComponent*                SQVehicleExitPoint2;                                       // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleExitPointComponent*                SQVehicleExitPoint1;                                       // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleExitPointComponent*                SQVehicleExitPoint;                                        // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            ExternalCamera;                                            // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         SpringArm;                                                 // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  WheelDestroyedSound;                                       // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             WheelDestroyedEffect;                                      // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ural_376.BP_Ural_375_C");
		return ptr;
	}



	void UpdateDamageWheelVisual(const struct FName& Bone, bool Destroyed, class USQVehicleWheel* Wheel, bool Do_Effects);
	void UserConstructionScript();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_ToggleView_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16(float AxisValue);
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18(float AxisValue);
	void DrivetrainComponentDestroyed(class USQDriveTrainComponent* DriveTrainComponent);
	void DrivetrainComponentRepaired(class USQDriveTrainComponent* DriveTrainComponent);
	void ExecuteUbergraph_BP_Ural_376(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
