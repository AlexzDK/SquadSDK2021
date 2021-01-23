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

// AnimBlueprintGeneratedClass RPG29_Skeleton_AnimBlueprint.RPG29_Skeleton_AnimBlueprint_C
// 0x0260 (FullSize[0x0510] - InheritedSize[0x02B0])
class URPG29_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_401D84A341646DC1E918D99CB6EFE8B4;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_964905A64172672D7DBB74B3FAD6D6A7; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8E29E0A244E4BC30D306E080C21115A8;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AD49B27944A96D444620938F11E6489E;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5650214A417645B7C66336948479F590;       // 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_059A28A64A1379F5C77F30A7BD50426B; // 0x0480(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1C8CCC6147F04736AF333B98A9415939; // 0x04F8(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPG29_Skeleton_AnimBlueprint.RPG29_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_RPG29_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
