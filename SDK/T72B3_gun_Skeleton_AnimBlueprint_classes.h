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

// AnimBlueprintGeneratedClass T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C
// 0x0224 (FullSize[0x04A4] - InheritedSize[0x0280])
class UT72B3_gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B1312F2A4E8FC6C0637F29B40AD2B14F;       // 0x0288(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DF8AB5BF4F477FF3505D84AF638138A2; // 0x02B8(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_18AE6ABC4480F58F91C0D1987B27B96D; // 0x02D0(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5DF87EF04A5BF41B1B6BE586CE5B7128;       // 0x0458(0x0048)
	float                                              pitchValue;                                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass T72B3_gun_Skeleton_AnimBlueprint.T72B3_gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_T72B3_gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
