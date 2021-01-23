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

// AnimBlueprintGeneratedClass spg9_weapon_Skeleton_AnimBlueprint.spg9_weapon_Skeleton_AnimBlueprint_C
// 0x0220 (FullSize[0x04A0] - InheritedSize[0x0280])
class Uspg9_weapon_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9C7CDC0A431D37163420E1A39C460620;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8E9B25E34465E7A3492C4A9F4693C5C4;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_594982BA4E7899CAEE1B1CB82CDD1037; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_EFE9DCC94BB5F25B7001A0AFA9034652; // 0x0318(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass spg9_weapon_Skeleton_AnimBlueprint.spg9_weapon_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_spg9_weapon_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
