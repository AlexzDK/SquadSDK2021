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

// AnimBlueprintGeneratedClass BMP2_Gun_Skeleton_AnimBlueprint.BMP2_Gun_Skeleton_AnimBlueprint_C
// 0x0224 (FullSize[0x04A4] - InheritedSize[0x0280])
class UBMP2_Gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5F3A05E6459F0602B16CEB9719ADF320;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CE8E803E460845C3EF7ADCA8FA84160D;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5EC3773F4A8145A405253FB55B6E61A0; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_F0D19226406E894339F171AD9CC1C17C; // 0x0318(0x0188)
	float                                              pitchValue;                                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BMP2_Gun_Skeleton_AnimBlueprint.BMP2_Gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BMP2_Gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
