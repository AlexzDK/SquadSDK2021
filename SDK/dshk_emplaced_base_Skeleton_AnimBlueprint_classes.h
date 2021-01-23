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

// AnimBlueprintGeneratedClass dshk_emplaced_base_Skeleton_AnimBlueprint.dshk_emplaced_base_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class Udshk_emplaced_base_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9D4CE5CE4DE77233D8420A906F37FC48;       // 0x0288(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_97565BE443403CCB614CF1B5A5E20FE7; // 0x02B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A2AC0C4540C2D8CC21CE069BB49B9D1E;       // 0x0440(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_FDA55D51431F71BA988E54925DCEF14C; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9B83D06543ED8CE92A433BB87569B479; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D6DD3D144B815EF2E80415A2DDE8BFB4; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A265EC0845999F26F0497481A77CC20D;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B89A193B4DD4000ED63300B7CB8B3BA6;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass dshk_emplaced_base_Skeleton_AnimBlueprint.dshk_emplaced_base_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_dshk_emplaced_base_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
