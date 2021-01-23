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

// AnimBlueprintGeneratedClass ppsh41_drum_Skeleton_AnimBlueprint.ppsh41_drum_Skeleton_AnimBlueprint_C
// 0x03C8 (FullSize[0x0678] - InheritedSize[0x02B0])
class Uppsh41_drum_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_117F63D946C32D0F7F70B8B3B1E59F5F;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CF5B0F6341E2BB0A09C43099D5A0C958; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2844C5634B95E2DB3D0D078973674719; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A5E39AC84FDBF3F89933EAB724067ADE;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8A82D4F84820005781E491B9ACC106F7;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CFAB889540376D766A7843A87832EA78;       // 0x04B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_283D6A384E4A31E75ADAEEB8340FA945; // 0x04F8(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6AD2FB0B4D5CE8E02E3F18904C73A270; // 0x0570(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_48C54C484280B19C45CBF4B4011A5106; // 0x0630(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ppsh41_drum_Skeleton_AnimBlueprint.ppsh41_drum_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ppsh41_drum_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
