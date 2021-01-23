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

// AnimBlueprintGeneratedClass PKM_Skeleton_AnimBlueprint.PKM_Skeleton_AnimBlueprint_C
// 0x03C8 (FullSize[0x0678] - InheritedSize[0x02B0])
class UPKM_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AEE4A1F04B0C3EDD91EF129FAD61964A;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0DDF66DB4C9B1CB4D9F75094BCDCB7AD;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25C9530249196A96B8F499BEA84652E8;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F855C7D44AB6AD8CA214BE92A0C2CDBE;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F56DE9174C19A58EF38884977307548F;       // 0x03C0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_66F2640843E41C7144F71C829C60922A; // 0x0408(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_124EB7EF46A52B3DEE8F1985FB13949E;       // 0x04C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_16233EB84315565912D928A89F9C3719; // 0x0510(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7D2E635F44FDF88612C720B3B27D483E; // 0x0528(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C362876B433029ABE28D33BBB1D7EE5A; // 0x05E8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D9FBDD474B481CA38857C3BB24D49F4F; // 0x0630(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PKM_Skeleton_AnimBlueprint.PKM_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_PKM_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
