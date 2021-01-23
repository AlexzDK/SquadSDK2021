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

// BlueprintGeneratedClass BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C
// 0x0020 (FullSize[0x0540] - InheritedSize[0x0520])
class ABP_Mortarround_SMOKE2_C : public ASQMortarProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             DescendingAudio;                                           // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   ReachedNearGroundSound;                                    // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mortarround_SMOKE2.BP_Mortarround_SMOKE2_C");
		return ptr;
	}



	void BPOnNearGroundDistanceReached();
	void BPOnBeginDescending();
	void ExecuteUbergraph_BP_Mortarround_SMOKE2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
