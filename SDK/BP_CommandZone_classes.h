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

// BlueprintGeneratedClass BP_CommandZone.BP_CommandZone_C
// 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
class ABP_CommandZone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Collision;                                                 // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Toggle_Commander_Actions;                              // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A8TR[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Actions_Online_Message;                                    // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Actions_Offline_Message;                                   // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Role_Check;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommandZone.BP_CommandZone_C");
		return ptr;
	}



	void Leader_Role_Check();
	void Can_Allow_Actions(bool* Allow_Actions);
	void Compare_Teams(int B, bool* Same_Team);
	void Get_Overlapping_Commander(class ASQPlayerController** AsSQPlayer_Controller);
	void UserConstructionScript();
	void OnCommanderRevivedEvent_Event_1(class ASQPlayerState* CommanderPS);
	void Set_Actions_Allowed(class ASQPlayerController* Target_PC, bool bNewActionsEnabled);
	void ReceiveBeginPlay();
	void Bind_Commander_Changed();
	void Refresh_Commander_Actions_Allowed();
	void Commander_Changed(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Begin_Role_Checks();
	void ExecuteUbergraph_BP_CommandZone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
