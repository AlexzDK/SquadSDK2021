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

// AnimBlueprintGeneratedClass AKMS_Skeleton_AnimBlueprint.AKMS_Skeleton_AnimBlueprint_C
// 0x03B0 (FullSize[0x0660] - InheritedSize[0x02B0])
class UAKMS_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4FFC0B624D6FED45A107BE81A0EA3E3F;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4710E78247612B5B819A50B3BFBD1939;       // 0x02E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF44039B42D8A93B1F690092DEE17299; // 0x0330(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D5B590254407BC66F7D004B6577E6740; // 0x03A8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25EA419840D59601FCFC36B58A8701F6;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21FA8C5540E26F724E78DEB4D44F7C11;       // 0x04B0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A536AFFE4A22E0F206B6F29A6A93C645; // 0x04F8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_CAD086D64D39F8691BC4D3918EEA96A3; // 0x0510(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2D069E2945DFE4178503169510BDAF1F;       // 0x05D0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6CCFCF934552C4902EB9C4885E303431; // 0x0618(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AKMS_Skeleton_AnimBlueprint.AKMS_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AKMS_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
