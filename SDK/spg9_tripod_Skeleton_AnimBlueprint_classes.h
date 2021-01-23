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

// AnimBlueprintGeneratedClass spg9_tripod_Skeleton_AnimBlueprint.spg9_tripod_Skeleton_AnimBlueprint_C
// 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
class Uspg9_tripod_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ULKZ[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_300CB5C24A2CECB7359E3FBC2BE0FD1A;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_66FD161942E6F0A4B17827A66186846C;       // 0x02A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_96CE97F54518FBABE1229B9B56596AD2; // 0x02F0(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass spg9_tripod_Skeleton_AnimBlueprint.spg9_tripod_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_spg9_tripod_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
