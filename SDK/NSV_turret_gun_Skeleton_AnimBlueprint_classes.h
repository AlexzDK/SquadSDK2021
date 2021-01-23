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

// AnimBlueprintGeneratedClass NSV_turret_gun_Skeleton_AnimBlueprint.NSV_turret_gun_Skeleton_AnimBlueprint_C
// 0x0370 (FullSize[0x05F0] - InheritedSize[0x0280])
class UNSV_turret_gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4731C9AE42045FA70B5E028B0A7F589E;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_05DDBA4F4C885E2C39CA6BAF3EEB6AD3;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_ABD13B1941E18B0CF356308567C59919; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_665FE64F42B79A5796A3A0B5B3AE14E5; // 0x0318(0x0188)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_18925F36445A15B6BCEBCE89D50598BD; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_50F6D89341DEA834DCCCBDB54C252734; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4D68125F491FA66E3E8A3AA4534B79F1;       // 0x05A8(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NSV_turret_gun_Skeleton_AnimBlueprint.NSV_turret_gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_NSV_turret_gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
