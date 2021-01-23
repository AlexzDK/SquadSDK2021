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

// AnimBlueprintGeneratedClass AKMGP25_Skeleton_AnimBlueprint.AKMGP25_Skeleton_AnimBlueprint_C
// 0x03C8 (FullSize[0x0678] - InheritedSize[0x02B0])
class UAKMGP25_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1AD20EA0443DB2C8D2044794BBB83C85;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0C88A8E141E407760306E1BC83A7CC8C;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8995B3DF454581AA666D008596E48997;       // 0x0330(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_442810534C74259221C6AEA353EDF793; // 0x0378(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5B953D96498872F8C5867F836A2BA35A;       // 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_198FD23646CDEC8277093993A6411657; // 0x0438(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E96B35FF4AAAE3F2F07AA1B2DB108E43; // 0x04B0(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_051A44534C5CA8E2ABD515B68385674E; // 0x0570(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A16ECD904F7E5E4D00FE5BAAA543EC8F; // 0x0630(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AKMGP25_Skeleton_AnimBlueprint.AKMGP25_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AKMGP25_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
