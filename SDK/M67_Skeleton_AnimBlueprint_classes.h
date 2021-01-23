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

// AnimBlueprintGeneratedClass M67_Skeleton_AnimBlueprint.M67_Skeleton_AnimBlueprint_C
// 0x009C (FullSize[0x0338] - InheritedSize[0x029C])
class UM67_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_CQFB[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F67B69F3473717C60A0EE1AB2B07ABD1;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6F9B8FDC4A10B0519DABAD95E69A7711;       // 0x02D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4E1692E64031765EF65A68B7E3D789CF; // 0x0320(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M67_Skeleton_AnimBlueprint.M67_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M67_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
