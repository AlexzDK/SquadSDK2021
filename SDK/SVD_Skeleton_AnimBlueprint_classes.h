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

// AnimBlueprintGeneratedClass SVD_Skeleton_AnimBlueprint.SVD_Skeleton_AnimBlueprint_C
// 0x02C0 (FullSize[0x0570] - InheritedSize[0x02B0])
class USVD_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_115B668D428E4DD65DC859B7776962A7;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9F19172544B66D25203850843D724F6C; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD2DBF0C4FEDA870ABDD8BBC3073B50C; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5ABC3CC94A9D3AAB87B349B79E941C78;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7D10649543E1B532ADF4D99F70177E36;       // 0x0468(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15D2C6C14816A3103AC15EB07B959A23; // 0x04B0(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_833CA5EA4DD87ED7EFDD32B5E1C76631;       // 0x0528(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SVD_Skeleton_AnimBlueprint.SVD_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SVD_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
