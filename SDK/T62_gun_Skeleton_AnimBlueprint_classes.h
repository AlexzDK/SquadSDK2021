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

// AnimBlueprintGeneratedClass T62_gun_Skeleton_AnimBlueprint.T62_gun_Skeleton_AnimBlueprint_C
// 0x026C (FullSize[0x04EC] - InheritedSize[0x0280])
class UT62_gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_30B8994F4E19164C3FB2EBBA0827EF44;       // 0x0288(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_94169A1B4DAE7A4DB85961BD674C4718; // 0x02B8(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_01136A014E52F9B6B3A704A50581EC91; // 0x02D0(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2285EA114348A56B0AB58E8F22400DBA;       // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6658F15542AAA3421A78CA969C9BE768;       // 0x04A0(0x0048)
	float                                              pitchValue;                                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass T62_gun_Skeleton_AnimBlueprint.T62_gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_T62_gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
