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

// AnimBlueprintGeneratedClass m249_100round_Skeleton_AnimBlueprint.m249_100round_Skeleton_AnimBlueprint_C
// 0x03C8 (FullSize[0x0678] - InheritedSize[0x02B0])
class Um249_100round_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3512EE3543FEACF6D7DADFA874490122;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1BE83C6F41BEF23DDB58E796A05569A2;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5B397B6C4FE8D94E3DA8009C3128A269;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_51C582D645992FE093C76DB8DF7F5F37;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7AD75EC6456EC4D2292F258339A2F77D;       // 0x03C0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_175B386E46D365631444C9B021554191; // 0x0408(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EA5C019F48AEBE4015367D8AEAEABD42; // 0x04C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B0AFB5E7444462307A4086A7DFB1038C;       // 0x0510(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_95E5BE844E5A889D55C8BAB84D8857B9; // 0x0558(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_75BA941C4B714A63C2242C8CABC27951; // 0x0570(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_71A1FE9242BEABB4A2A80E97100409A4; // 0x0630(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass m249_100round_Skeleton_AnimBlueprint.m249_100round_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_m249_100round_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
