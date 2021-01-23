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

// AnimBlueprintGeneratedClass MG3_Elcan_Skeleton_AnimBlueprint.MG3_Elcan_Skeleton_AnimBlueprint_C
// 0x0510 (FullSize[0x07C0] - InheritedSize[0x02B0])
class UMG3_Elcan_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_04B144074BB8C763A989A6B061810325;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E9F7A0D042C82C14A0EC57BEC6F57DA7; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E78F672943C04E0255E08D9528799B65;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4CE7406A45261A129DB562B2ED79C517;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_56295D3F45ECC5143EDC4C9254333927;       // 0x0438(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4BD187B240000C4DBAEA50BC914C375F; // 0x0480(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6FC3335B4F9E8811B39241B7E872AB01; // 0x0498(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B62EF66843D16E4AFAFD6D9912098232; // 0x04E0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0EB5BFB842BBC3A3686E919E4DF57C3D; // 0x05A0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_718F0B3D46AD53881A60CEBC88E35B18; // 0x05E8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1ED630E143B7DDDD3C625D93E3F2700E; // 0x0608(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D820E8D84C17CC2A4CDCB2B814F07338; // 0x0710(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3EE2E63F447A1C41CD53E68E820FC8F9;       // 0x0730(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7B9DB232417C85ED71126995134657F3;       // 0x0778(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MG3_Elcan_Skeleton_AnimBlueprint.MG3_Elcan_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MG3_Elcan_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
