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

// AnimBlueprintGeneratedClass Kornet_Skeleton_AnimBlueprint.Kornet_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UKornet_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9937499B450FE5B48F8ADE9439F57F36;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D3B463084BD245B70B4C07ADE20BE5FB;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2E4A50874652E3A7058D92937B6FB2F5; // 0x0300(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BC6E2C6E4323A05D5639A9B4692762B2; // 0x0318(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C3A74734CEAB54AAA6B11AE64AA15BE;       // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5BEDA8DA43FC4E8E411BDFB323FBE37F;       // 0x0420(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_AACC7F39476C10772AA9338863D7EA85; // 0x0468(0x0188)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E9BA676E477FB3C4F06AABAF4E18C495; // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Kornet_Skeleton_AnimBlueprint.Kornet_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Kornet_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
