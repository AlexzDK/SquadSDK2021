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

// AnimBlueprintGeneratedClass MPL50_Shovel_Skeleton_AnimBlueprint.MPL50_Shovel_Skeleton_AnimBlueprint_C
// 0x00E4 (FullSize[0x0380] - InheritedSize[0x029C])
class UMPL50_Shovel_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_WJBQ[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5DCCEA8E4EC8E61B52B2868A598A6745;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E1DD42F34A9F23BC5212BA8BC1C3CBD4;       // 0x02D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6FC60EAC4DC1E207500A8B99FC2523AA;       // 0x0320(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_49EFCE064F8BBE0996EC949B9D07B792; // 0x0368(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MPL50_Shovel_Skeleton_AnimBlueprint.MPL50_Shovel_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MPL50_Shovel_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
