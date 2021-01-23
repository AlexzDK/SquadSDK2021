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

// BlueprintGeneratedClass BP_BaseFobCreator.BP_BaseFobCreator_C
// 0x0098 (FullSize[0x0688] - InheritedSize[0x05F0])
class ABP_BaseFobCreator_C : public ASQForwardBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQMapIconComponent*                         SQMapIcon;                                                 // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            NearbyEnemyDetection;                                      // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASQForwardBase*                              fob;                                                       // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ServerDecreaseHealthHandle;                                // 0x0610(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         UsingSquadLeader;                                          // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ServerCheckValidUse;                                       // 0x0620(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              SLUseHealthLoss;                                           // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RespawnDelayPenaltyPerEnemy;                               // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumEnemiesToDisable;                                       // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldOverrunOnDestroy;                                   // 0x0634(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FHFH[0x3];                                     // 0x0635(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSQUsableData                               Enemy_Usable_Data;                                         // 0x0638(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasBeenOverrun;                                           // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QCIQ[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    FobBleedOutEffect;                                         // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseFobCreator.BP_BaseFobCreator_C");
		return ptr;
	}



	struct FSQUsableData GetUsableData();
	void Remove_Nearby_FOB_Request_Markers();
	struct FText GetFailedSpawnReasonText(ESQInvalidPlacementReason Reason);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPOnGhostMade();
	void ReceiveDestroyed();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void CompletedConstruction();
	void BPOnUsed(class AController* User);
	void BPStopUsed(class AController* User);
	void BPOverrun(bool bFriendly);
	void BPPostTicketTick(float Difference);
	void InvalidatePlacement();
	void BPOnIsBleedingChanged();
	void ExecuteUbergraph_BP_BaseFobCreator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
