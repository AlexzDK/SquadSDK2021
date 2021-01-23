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

// AnimBlueprintGeneratedClass g3a4_Skeleton_AnimBlueprint.g3a4_Skeleton_AnimBlueprint_C
// 0x03F8 (FullSize[0x06A8] - InheritedSize[0x02B0])
class Ug3a4_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6FFB5506462B3C65895D848EC7E6573B;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E2A419BD45A3FE96823799AE5E647D83;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7CDADD3E45DF3BD22A7AB3A4D054CBDB;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_017762EF475136F67D6CF2B9F2F4D78F;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E21ADCC4636FA5633A26DB8B070AA0C;       // 0x03C0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D42E274847654077B569F1966CDE3499;       // 0x0408(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1C7A33BB4952D27D5E9C5FA4670EF3AB; // 0x0450(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6E2C3D048B2E08671051DAB0449F17F; // 0x0510(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5BDA3BBB49481C246A2D8E8FFA8FD3E0; // 0x0588(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_169B356D4B35B136D67521A6E0041E7E; // 0x0648(0x0018)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_6DE70F3346A00405513FEF987552EFDA; // 0x0660(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass g3a4_Skeleton_AnimBlueprint.g3a4_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_g3a4_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
