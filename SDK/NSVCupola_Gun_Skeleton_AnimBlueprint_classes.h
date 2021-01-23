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

// AnimBlueprintGeneratedClass NSVCupola_Gun_Skeleton_AnimBlueprint.NSVCupola_Gun_Skeleton_AnimBlueprint_C
// 0x0370 (FullSize[0x05F0] - InheritedSize[0x0280])
class UNSVCupola_Gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B51BD11342A30B2724967D8D1494FEA0;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E32FAD7487A721055E94380F54DEDF2;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C2165CA84A43CF77A31AF6B5116EFC79; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_BB51ECAB41FC697E6BD0D6930F43E7E0; // 0x0318(0x0188)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3F8AB86347E95912D32ED09E829A4EF3; // 0x04A0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_214C5E8D40DFEBB46E16DA96E13FA3C8;       // 0x0560(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_87D60F6649EE0E26D638C8A05791074E; // 0x05A8(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NSVCupola_Gun_Skeleton_AnimBlueprint.NSVCupola_Gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_NSVCupola_Gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
