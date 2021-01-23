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

// BlueprintGeneratedClass BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C
// 0x0029 (FullSize[0x08B9] - InheritedSize[0x0890])
class ABP_GenericDeployableMortarVehicle_C : public ASQDeployableMortarVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQRotationMovementAudioComponent*           SQRotationMovementAudio;                                   // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        WeaponCollision;                                           // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractBox;                                               // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BPTurretOverlay;                                           // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsPossessed;                                              // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericDeployableMortarVehicle.BP_GenericDeployableMortarVehicle_C");
		return ptr;
	}



	class USceneComponent* GetADSCameraLocationComponent();
	void UserConstructionScript();
	void ReceiveUnpossessed(class AController* OldController);
	void LookUp(float Rate);
	void ReceiveBeginPlay();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void ExecuteUbergraph_BP_GenericDeployableMortarVehicle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
