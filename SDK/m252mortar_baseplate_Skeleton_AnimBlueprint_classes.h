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

// AnimBlueprintGeneratedClass m252mortar_baseplate_Skeleton_AnimBlueprint.m252mortar_baseplate_Skeleton_AnimBlueprint_C
// 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
class Um252mortar_baseplate_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ISEV[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FE85D4F244B1B616C4B081831D20411E;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_812000744372D90ADF93A0AAAFEA9BB7;       // 0x02A8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2092C6404C6383E83A64C8970487F3DE; // 0x02F0(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass m252mortar_baseplate_Skeleton_AnimBlueprint.m252mortar_baseplate_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_m252mortar_baseplate_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
