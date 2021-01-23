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

// AnimBlueprintGeneratedClass sks_Skeleton_AnimBlueprint.sks_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class Usks_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_68D44DD244E9771E8FBB9696D296134D;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_32D94AA9418799929C5626970E9CEBC0; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B888621A4E2CC45F6A2A6AA612FE67F0; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E892D4384860BB34A38702A5074A3900;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4A93CAB84690CF2257FE1781A5FDDF36;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5A16DF3B499283E569ADB1BC12C00ED2;       // 0x04B0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A49CACA747452ACA7603C9BBE56F09E3; // 0x04F8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1F7BBF0C492C7D97B30FE9A45F972724; // 0x0510(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E0E213924472D8F9E60762BCBD05ED28; // 0x05D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass sks_Skeleton_AnimBlueprint.sks_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_sks_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
