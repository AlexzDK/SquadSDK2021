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

// AnimBlueprintGeneratedClass RPK_Skeleton_AnimBlueprint.RPK_Skeleton_AnimBlueprint_C
// 0x02C0 (FullSize[0x0570] - InheritedSize[0x02B0])
class URPK_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9A899F1D40C1CBDC87877E9DD434D9BF;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9653E64242A73855298FB8BBD2FC5255;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EEF86CE34929C39A10420890B4220C71;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_31713A0B4F4A95A6B19A8CB283C41EA0;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CF7904DE4E6050E64D254BA8C9A61E31;       // 0x03C0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_42F19DE94754F6BABC119099B0AFA369;       // 0x0408(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8EF57DAB471DC3229FE985B6DEDDE22F; // 0x0450(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CA8BB3C649C75FC3ED20DABBB6FB753D; // 0x0510(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E81D8B504D091D444F4AAF95E7F51266; // 0x0528(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPK_Skeleton_AnimBlueprint.RPK_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_RPK_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
