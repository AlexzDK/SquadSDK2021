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

// AnimBlueprintGeneratedClass RepairTool_Skeleton_AnimBlueprint.RepairTool_Skeleton_AnimBlueprint_C
// 0x00FC (FullSize[0x0398] - InheritedSize[0x029C])
class URepairTool_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_IDVH[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2CA16974E662DAA014BD59A7E3AD401;       // 0x02A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45A8B0CC452785363A036FB39565B673; // 0x02D8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B56D562B459172B1597196853096028C;       // 0x0350(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RepairTool_Skeleton_AnimBlueprint.RepairTool_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_RepairTool_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
