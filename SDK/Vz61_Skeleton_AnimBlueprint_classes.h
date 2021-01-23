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

// AnimBlueprintGeneratedClass Vz61_Skeleton_AnimBlueprint.Vz61_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class UVz61_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1E7DE4B8462E0ED606B918BB1E3D75EB;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E4E4A2664EA98C657E7794AA1A8B9EE1; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_634DF1B04CA021E45535ADAECC71419F; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15E521314778CE9C6EFA24B6020C8D1E;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DB7782A2443CB1C24B6F94B3DC0B3C43;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_563B9245436643175EED5781D99D0A27;       // 0x04B0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1311608A46F20E37920A90907DF61A20; // 0x04F8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7A2E2F634942931E38B696BBF309E5B6; // 0x05B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4590CDB7458EFB54F8925292509BC6A7; // 0x0600(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Vz61_Skeleton_AnimBlueprint.Vz61_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Vz61_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
