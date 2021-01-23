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

// BlueprintGeneratedClass AI_BotCharacter.AI_BotCharacter_C
// 0x0050 (FullSize[0x03A0] - InheritedSize[0x0350])
class AAI_BotCharacter_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPawnSensingComponent*                       PawnSensing;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BotCharacter_C*                          My_Bot;                                                    // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Target_Seen;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Target_Lost;                                               // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APawn*                                       Last_Sight_Pawn;                                           // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                SightLossTimer;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AI_BotCharacter.AI_BotCharacter_C");
		return ptr;
	}



	void Pawn_Seen(class APawn* In_Pawn);
	void Calculate_Perception(class AActor* Actor);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	void Invalidate_Sight_Pawn();
	void ExecuteUbergraph_AI_BotCharacter(int EntryPoint);
	void Target_Lost__DelegateSignature(class AActor* Target);
	void Target_Seen__DelegateSignature(class AActor* Target);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
