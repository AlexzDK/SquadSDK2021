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

// AnimBlueprintGeneratedClass Phone_Detonator_Skeleton_AnimBlueprint.Phone_Detonator_Skeleton_AnimBlueprint_C
// 0x00E4 (FullSize[0x0380] - InheritedSize[0x029C])
class UPhone_Detonator_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_O7JN[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F99942894CFE093BE5A2AAB1048627C7;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_82D20AA7497DB099DF716FACE196CBB0;       // 0x02D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C6BD7192414CD763CB7BD4B54B6CE86D;       // 0x0320(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4C36CA534FA6BD5D98610EB572646AA2; // 0x0368(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Phone_Detonator_Skeleton_AnimBlueprint.Phone_Detonator_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Phone_Detonator_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
