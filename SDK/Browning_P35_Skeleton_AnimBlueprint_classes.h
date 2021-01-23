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

// AnimBlueprintGeneratedClass Browning_P35_Skeleton_AnimBlueprint.Browning_P35_Skeleton_AnimBlueprint_C
// 0x0368 (FullSize[0x0618] - InheritedSize[0x02B0])
class UBrowning_P35_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AA647F1249342C55F446D78E2E79CE63;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6305BFF940A850E23AD6F997C920BC7C; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1A8A4B1B4A668854317C7BB4DF45B4F7;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F86AAE554ED135A0280D65B420EDB7F9;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2823D763455C80383692CDB4CFD6A0AE;       // 0x0438(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_10636BFD41855A3D920144AF93968D9D; // 0x0480(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DA62BA94E65738920F745AF34834CBE; // 0x0498(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_62494A2942DF9A21F1057E91CD18D7D4; // 0x0510(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_85E9C945415792BA003655A860B861D7; // 0x0558(0x00C0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Browning_P35_Skeleton_AnimBlueprint.Browning_P35_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Browning_P35_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
