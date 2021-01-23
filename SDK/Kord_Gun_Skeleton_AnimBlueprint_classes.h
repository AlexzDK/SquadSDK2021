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

// AnimBlueprintGeneratedClass Kord_Gun_Skeleton_AnimBlueprint.Kord_Gun_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UKord_Gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6149AC014A0560896B7AE0B38D478CF2;       // 0x0288(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_EA896CBB4ED719DD213391AC317D4541; // 0x02B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F4260DD14F4E18916F56458FA478E735;       // 0x0440(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_30BE10BF4D2CCBDDBFA87EBDD93C7A17; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5A07D9C240207DDE9052AF8F3894023C; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_89CC2CAC4C9D6D714F086DB0E4E1FA85; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_26CCB42147A5AB72D3C8CF979797C30D;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_87CCF246455E13AC28FB208CDE2F9B96;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Kord_Gun_Skeleton_AnimBlueprint.Kord_Gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Kord_Gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
