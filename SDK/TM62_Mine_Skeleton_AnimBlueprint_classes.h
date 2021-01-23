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

// AnimBlueprintGeneratedClass TM62_Mine_Skeleton_AnimBlueprint.TM62_Mine_Skeleton_AnimBlueprint_C
// 0x00FC (FullSize[0x0398] - InheritedSize[0x029C])
class UTM62_Mine_Skeleton_AnimBlueprint_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_OFYG[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A544DCD349B132B14A8D68B61507AE0B;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC3E8A74439A1EAD211A18B9DCF7DF14;       // 0x02D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F5F5F96451BC0F8C6159697D82B2676; // 0x0320(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TM62_Mine_Skeleton_AnimBlueprint.TM62_Mine_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_TM62_Mine_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
