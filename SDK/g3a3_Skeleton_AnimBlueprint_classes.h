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

// AnimBlueprintGeneratedClass g3a3_Skeleton_AnimBlueprint.g3a3_Skeleton_AnimBlueprint_C
// 0x02C0 (FullSize[0x0570] - InheritedSize[0x02B0])
class Ug3a3_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2CD67318413AE9872EE5CF8269C9C7A4;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3C7CD753477B7BF805BCB793A249A2C7;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_00497FE348865818659AB69142546786;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A5414EC246561385E05DEA9F562512C3;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E71D8C1748D2695D3235AEBF6F4C0F3E;       // 0x03C0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A1CFB22B4D21DD87950BE7B7D2CACE0F;       // 0x0408(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_974966C740FAAC11C0C7E7A068F1E183; // 0x0450(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_589AE10E4E2AF8B6B1914293305A1B1A; // 0x0468(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F7B55B2B4AF68BB29883EFAFCF5AD34F; // 0x0528(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass g3a3_Skeleton_AnimBlueprint.g3a3_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_g3a3_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
