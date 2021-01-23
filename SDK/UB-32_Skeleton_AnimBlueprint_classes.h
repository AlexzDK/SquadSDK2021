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

// AnimBlueprintGeneratedClass UB-32_Skeleton_AnimBlueprint.UB-32_Skeleton_AnimBlueprint_C
// 0x0098 (FullSize[0x0348] - InheritedSize[0x02B0])
class UUB_32_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7C1262D6420F664FBE9DA9A8661EAC0F;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0BE5EDF74F4F0A04876A7799F5A96817;       // 0x02E8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_243939D24E81D75C1C189D897B4F3B3B; // 0x0330(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass UB-32_Skeleton_AnimBlueprint.UB-32_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_UB_32_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
