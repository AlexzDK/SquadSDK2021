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

// AnimBlueprintGeneratedClass Kord_Tripod_Skeleton_AnimBlueprint.Kord_Tripod_Skeleton_AnimBlueprint_C
// 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
class UKord_Tripod_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PJJ1[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1FDFDD5F40BA10F8502264B2955A361A;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D2BB5A474CB648FCC7D8EF86ADFBB63C;       // 0x02A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EADC5B7B471518F56F2CB1AE6CB16090; // 0x02F0(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Kord_Tripod_Skeleton_AnimBlueprint.Kord_Tripod_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Kord_Tripod_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
