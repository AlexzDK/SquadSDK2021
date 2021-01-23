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

// AnimBlueprintGeneratedClass Sz1_Explosive_Skeleton_AnimBlueprint.Sz1_Explosive_Skeleton_AnimBlueprint_C
// 0x0148 (FullSize[0x03B0] - InheritedSize[0x0268])
class USz1_Explosive_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_JJT3[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D8B59A9946BB1979F76CB78D1DE846DA;       // 0x0278(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9EA69CCB45C1960F4D966F96A3D74111;       // 0x02C0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_3040E4A841A3660721867CB89C8550A0;       // 0x0308(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BC9C930C4742E6B3DB2EFE94A17D4FB3; // 0x0338(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sz1_Explosive_Skeleton_AnimBlueprint.Sz1_Explosive_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Sz1_Explosive_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
