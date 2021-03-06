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

// BlueprintGeneratedClass BP_Refleks_Proj2.BP_Refleks_Proj2_C
// 0x0038 (FullSize[0x0558] - InheritedSize[0x0520])
class ABP_Refleks_Proj2_C : public ASQMortarProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FlightVariationOverTime_Sine_E62E3BF94DC16AA311AB8DBDA20583C7; // 0x0530(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    FlightVariationOverTime__Direction_E62E3BF94DC16AA311AB8DBDA20583C7; // 0x0534(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K4Y4[0x3];                                     // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FlightVariationOverTime;                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnRate;                                                  // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlightVariation;                                           // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             BPEffectOnUnderMinFlightTime;                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  BPSoundonUnderMinFlightTime;                               // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Refleks_Proj2.BP_Refleks_Proj2_C");
		return ptr;
	}



	void FlightVariationOverTime__FinishedFunc();
	void FlightVariationOverTime__UpdateFunc();
	void TowDirectionInput(const struct FVector& TowDirection);
	void ReceiveBeginPlay();
	void OnImpact(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Refleks_Proj2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
