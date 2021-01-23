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

// AnimBlueprintGeneratedClass KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C
// 0x0224 (FullSize[0x04A4] - InheritedSize[0x0280])
class UKPVT_UB32_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4F6837614202538420979CB106EE9BD7;       // 0x0288(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_65C7F14049B2F8FEE8FACA996C2F8E1E; // 0x02B8(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_74E7A4B241743BE5D828E3A4CC23E190; // 0x02D0(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_04EC68944C7BD363CE1710B5AE247FB1;       // 0x0458(0x0048)
	float                                              pitchValue;                                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass KPVT_UB32_Skeleton_AnimBlueprint.KPVT_UB32_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_KPVT_UB32_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
