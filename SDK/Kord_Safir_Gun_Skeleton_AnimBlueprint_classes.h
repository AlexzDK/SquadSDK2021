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

// AnimBlueprintGeneratedClass Kord_Safir_Gun_Skeleton_AnimBlueprint.Kord_Safir_Gun_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UKord_Safir_Gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C3742D284DD919149B4393A1F626FE0B;       // 0x0288(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9D2FE78A4B32DF583DF9D4A25E3C9B16; // 0x02B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_63698A15446261E6252FA7B089AAFFE3;       // 0x0440(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1D91851846C1AFEEEE8D47A24E09D4EC; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_AB6C10C24C36B1A5D4537AA4372CC848; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_28AA0C7F4CBBD5C72C8FFB9B7F691ACA; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15EB0F0E4D3F7CC57BEE8DA44D82F8A1;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_38058DD741FA6CB285B8EF83CB5EB974;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Kord_Safir_Gun_Skeleton_AnimBlueprint.Kord_Safir_Gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Kord_Safir_Gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
