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

// AnimBlueprintGeneratedClass F1_Grenade_Skeleton_AnimBlueprint.F1_Grenade_Skeleton_AnimBlueprint_C
// 0x009C (FullSize[0x0338] - InheritedSize[0x029C])
class UF1_Grenade_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_Z433[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EC6730D047B1274E0FDA3CA508C4D2BE;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_42C30FF24FEDAAC9F7A378AA65D9D258;       // 0x02D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_BFFE817B4167C786BF5FBD9B102511A8; // 0x0320(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F1_Grenade_Skeleton_AnimBlueprint.F1_Grenade_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F1_Grenade_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
