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

// AnimBlueprintGeneratedClass MG3_DoorGun_Skeleton_AnimBlueprint.MG3_DoorGun_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UMG3_DoorGun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_224F2BD14637D583B31A69BF40CDE741;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C5105BA6498B2D96098579A71956A2E4;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C437894C491CA60F0C1770A8940F8C1C; // 0x0300(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B60E139A4428904161CB9B9574796441; // 0x0318(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AFF9ED2247C1AAC2325C2798386FC43E;       // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_80EE34954308E763233163BE13F31573;       // 0x0420(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C0D2727C47CBEAD6AA6C23A4BDD09CDD; // 0x0468(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D3EFCA9F4B4F4B00EF57D6A702833F0F; // 0x04B0(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MG3_DoorGun_Skeleton_AnimBlueprint.MG3_DoorGun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MG3_DoorGun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
