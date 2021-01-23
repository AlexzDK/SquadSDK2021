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

// AnimBlueprintGeneratedClass m1937mortar_tube_Skeleton2_AnimBlueprint.m1937mortar_tube_Skeleton2_AnimBlueprint_C
// 0x0220 (FullSize[0x04A0] - InheritedSize[0x0280])
class Um1937mortar_tube_Skeleton2_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C7F018574B71CD936E8444B1FDB34865;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_88786C674FC89DCB70FB02AE9E8A52DF;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_589C3B1148DCBC746C2506AC12ED619B; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_EB375C5647E94823BC3E85AD5F5987DB; // 0x0318(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass m1937mortar_tube_Skeleton2_AnimBlueprint.m1937mortar_tube_Skeleton2_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_m1937mortar_tube_Skeleton2_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
