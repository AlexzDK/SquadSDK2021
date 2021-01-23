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

// AnimBlueprintGeneratedClass RPG26_Skeleton_AnimBlueprint.RPG26_Skeleton_AnimBlueprint_C
// 0x02C0 (FullSize[0x0570] - InheritedSize[0x02B0])
class URPG26_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8E3BADFD4CD1AEAC3E2C09AD840FFA6D;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E60E3689480E4646286AEEBCC9009B93; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92A3E6A741069DDC099195A68142E840;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5649B10E42CD3797B86A1AB2788EC70E;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BD1F4AFD4CBFC98CFBDE28A5FD066AAC;       // 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03A899C14774E15B2ED58AB5C8450D3E; // 0x0480(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4218428D45C61F0F52A906992D26E391; // 0x04F8(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPG26_Skeleton_AnimBlueprint.RPG26_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_RPG26_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
