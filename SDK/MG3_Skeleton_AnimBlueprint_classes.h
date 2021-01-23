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

// AnimBlueprintGeneratedClass MG3_Skeleton_AnimBlueprint.MG3_Skeleton_AnimBlueprint_C
// 0x03C8 (FullSize[0x0678] - InheritedSize[0x02B0])
class UMG3_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_889550E3447F7665313491AE5A283400;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20B447E04AF2E3200119A08D47F3BCDF; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_696274414F0955C262C520B44D6D0E0C;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E66818454BD1257CC1DC7596B71A2882;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4191374C46BDCE62E71C248B1E0BD066;       // 0x0438(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_AC115F8B423279B9B8083DA586E5E5F0; // 0x0480(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_19DD999348A71B9908993DBF3540DCF6; // 0x0498(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9EFA883D4CDB11E9E68FF3971502DDFA; // 0x04E0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_72BD10F346B96F140B212F98B4E83415; // 0x05A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C1461E2E4E8A082AB0EB328ABA795132;       // 0x05E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4F0B87B74A19189E1A62EF9FA5AC3ECE;       // 0x0630(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MG3_Skeleton_AnimBlueprint.MG3_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MG3_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
