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

// AnimBlueprintGeneratedClass g3a3_hk79_ugl_Skeleton_AnimBlueprint.g3a3_hk79_ugl_Skeleton_AnimBlueprint_C
// 0x02F0 (FullSize[0x05A0] - InheritedSize[0x02B0])
class Ug3a3_hk79_ugl_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_907641AD467ABA75296D7A995AA277A7;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_97D21ACE42A843B33201EF96476695E5; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D075DC73421036F69B8998B919865D1B;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_320D2F8C4B431971AD75FD970638FC47;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6739A38B462BE852A39EA899A3664F66;       // 0x0438(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7F2F15484FAF51D9B9BC34B3B1C67FEB; // 0x0480(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7B65754345A83271CEB4CB9CEF33451B; // 0x0498(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3017C33440E93EB83BBBD09349B00AD2; // 0x04E0(0x00C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass g3a3_hk79_ugl_Skeleton_AnimBlueprint.g3a3_hk79_ugl_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_g3a3_hk79_ugl_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
