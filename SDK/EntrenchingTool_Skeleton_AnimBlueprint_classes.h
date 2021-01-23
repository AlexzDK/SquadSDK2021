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

// AnimBlueprintGeneratedClass EntrenchingTool_Skeleton_AnimBlueprint.EntrenchingTool_Skeleton_AnimBlueprint_C
// 0x00E4 (FullSize[0x0380] - InheritedSize[0x029C])
class UEntrenchingTool_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_JREW[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_884E150541F02F404DA65C9110CC78D9;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_23C1B8F447DD1D5CB5F1E28C836BE0E6;       // 0x02D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_88FDFC5C4636CF834D9987A8738C8E66;       // 0x0320(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_64362078470E6860E622F1B1A0DED747; // 0x0368(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass EntrenchingTool_Skeleton_AnimBlueprint.EntrenchingTool_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_EntrenchingTool_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
