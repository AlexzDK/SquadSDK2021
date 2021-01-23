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

// AnimBlueprintGeneratedClass spandrel_tubes_Skeleton_AnimBlueprint.spandrel_tubes_Skeleton_AnimBlueprint_C
// 0x01A0 (FullSize[0x0420] - InheritedSize[0x0280])
class Uspandrel_tubes_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3ED56F9B4E89B2C07BCB8C82DE454D4D;       // 0x0288(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F803294845E9E03234DC2D8708315C10; // 0x02B8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7630C1334C4F1557990133BC870417D5; // 0x0378(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C6C69C114A13B3B08BCB81B81507BA48; // 0x03C0(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21C7B882437A3E98665402B003CAC453;       // 0x03D8(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass spandrel_tubes_Skeleton_AnimBlueprint.spandrel_tubes_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_spandrel_tubes_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
