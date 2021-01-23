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

// AnimBlueprintGeneratedClass M18_Skeleton_AnimBlueprint.M18_Skeleton_AnimBlueprint_C
// 0x009C (FullSize[0x0338] - InheritedSize[0x029C])
class UM18_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_MY7W[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_76902F8240B16511934C558ACA9B2D90;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F577A7CE442A12DA2A27F9A0D0758186;       // 0x02D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6BE7AD7F47CD665DF91F8C8551514C9D; // 0x0320(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M18_Skeleton_AnimBlueprint.M18_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M18_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
