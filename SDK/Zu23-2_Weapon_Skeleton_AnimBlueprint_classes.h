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

// AnimBlueprintGeneratedClass Zu23-2_Weapon_Skeleton_AnimBlueprint.Zu23-2_Weapon_Skeleton_AnimBlueprint_C
// 0x0220 (FullSize[0x04A0] - InheritedSize[0x0280])
class UZu23_2_Weapon_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BFE059064D279E14CF9800BA0D29E1B5;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_53A5D638479D3FD6C16D71A52D77CC85;       // 0x02B8(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_77328C924A7972D3D703F7AE14169CD6; // 0x0300(0x0188)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5493D2F94C188F8742BA9194EEEE91D6; // 0x0488(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Zu23-2_Weapon_Skeleton_AnimBlueprint.Zu23-2_Weapon_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Zu23_2_Weapon_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
