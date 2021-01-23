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

// AnimBlueprintGeneratedClass m1937mortar_baseplate_Skeleton_AnimBlueprint.m1937mortar_baseplate_Skeleton_AnimBlueprint_C
// 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
class Um1937mortar_baseplate_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PVI8[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E421BE064F6E7072F8134BB78BD825A2;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_05621C664D5B08AD6951FB8F0075962F;       // 0x02A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5F8043D840B1C612E09E95BA8A3BB672; // 0x02F0(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass m1937mortar_baseplate_Skeleton_AnimBlueprint.m1937mortar_baseplate_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_m1937mortar_baseplate_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
