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

// AnimBlueprintGeneratedClass Dshk_Cupola_Gun_Skeleton_AnimBlueprint.Dshk_Cupola_Gun_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UDshk_Cupola_Gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FA7BB0104A63B7761B9E4CB68DDC046F;       // 0x0288(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_164085BB4F7A6250CEE01AA57542C1DC; // 0x02B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7DE7B9AD4B3B3DD5E3A8F382983D371B;       // 0x0440(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_05E2DF1F47D477ADDD4E82AB7FB7C202; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7584F8634547B722806371873DC49146; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BAFBB84C46F2201BF1D2E4932C40BC3D; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D6366FFC48956FBF04CE9D976F19144E;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EEA28E8441CE389272768A8038CD40FD;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dshk_Cupola_Gun_Skeleton_AnimBlueprint.Dshk_Cupola_Gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Dshk_Cupola_Gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
