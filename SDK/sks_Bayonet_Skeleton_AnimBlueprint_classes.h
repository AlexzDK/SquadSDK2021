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

// AnimBlueprintGeneratedClass sks_Bayonet_Skeleton_AnimBlueprint.sks_Bayonet_Skeleton_AnimBlueprint_C
// 0x00F8 (FullSize[0x03A8] - InheritedSize[0x02B0])
class Usks_Bayonet_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4D0129D24FB173ACF2F8E699B1B79978;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CEDEC62A44CB767C3ECD468D03EE2A0E;       // 0x02E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D4716F744FAA29C949458AD3976E84F; // 0x0330(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass sks_Bayonet_Skeleton_AnimBlueprint.sks_Bayonet_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_sks_Bayonet_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
