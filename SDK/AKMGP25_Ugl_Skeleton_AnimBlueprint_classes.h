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

// AnimBlueprintGeneratedClass AKMGP25_Ugl_Skeleton_AnimBlueprint.AKMGP25_Ugl_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class UAKMGP25_Ugl_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0E1E18FC4D6C0EC30C343E8200D63F42;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B70B93354D0D7EA08D7C4A8ED706FD10; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6BCC0F3445BD3959096778B5D9E84A60;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1FA86FCE48843EEC5803A09F45712F30;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_06A76153461C236C1001E8A865456CB5;       // 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35C49298427143186AF8E1B83669EC69; // 0x0480(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B55015964250EFB97C888F94A15A41F8; // 0x04F8(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EC4358F344CA0F17B4003A924AECCD64; // 0x05B8(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CD5D358D471F48A7FCA2ACB246CE104D; // 0x05D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AKMGP25_Ugl_Skeleton_AnimBlueprint.AKMGP25_Ugl_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AKMGP25_Ugl_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
