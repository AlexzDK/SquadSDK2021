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

// BlueprintGeneratedClass BP_helicopter_repair_pad.BP_helicopter_repair_pad_C
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class ABP_helicopter_repair_pad_C : public ABP_Deployable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Helipad_20m;                                            // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQMapIconComponent*                         SQMapIcon;                                                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USQVehicleDepotComponent*                    SQVehicleDepot;                                            // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Repair_rearm_radius;                                       // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_helicopter_repair_pad.BP_helicopter_repair_pad_C");
		return ptr;
	}



	void OnRep_PlayingEngineAudio();
	void SetTeam(int Team);
	void OnBuildStateChange_Event(ESQBuildState BuildState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_helicopter_repair_pad(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
