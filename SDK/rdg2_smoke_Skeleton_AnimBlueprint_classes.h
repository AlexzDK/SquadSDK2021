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

// AnimBlueprintGeneratedClass rdg2_smoke_Skeleton_AnimBlueprint.rdg2_smoke_Skeleton_AnimBlueprint_C
// 0x009C (FullSize[0x0338] - InheritedSize[0x029C])
class Urdg2_smoke_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_8EP9[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FDF0DB594D02725CDB6E578491C6C91A;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5698E33F42BA143DE0C72FB5CBC0E4C1;       // 0x02D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3916D3F6428B54F3848B43BD73E4645E; // 0x0320(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass rdg2_smoke_Skeleton_AnimBlueprint.rdg2_smoke_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_rdg2_smoke_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
