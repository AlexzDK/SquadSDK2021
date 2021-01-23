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

// AnimBlueprintGeneratedClass TT33_Skeleton_AnimBlueprint.TT33_Skeleton_AnimBlueprint_C
// 0x02C0 (FullSize[0x0570] - InheritedSize[0x02B0])
class UTT33_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_032562A54E925C741C9D3FBC682DA7FF;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EC31BFC940CB0EE1CFFAC1A7FFE622B2; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_31EE265943D2AE4E347201AF9D4CA3CF;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4699E6BF4BB893EA2E82249AB0CCA6D4;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15DD448D47C07C2E9E228C902717AB6A;       // 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_950C5C644D671A72616969BE014337E9; // 0x0480(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D606F7C407F46D13BC50A8EF5CBFA83; // 0x04F8(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TT33_Skeleton_AnimBlueprint.TT33_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_TT33_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
