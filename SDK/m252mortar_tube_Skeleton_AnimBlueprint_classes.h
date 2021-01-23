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

// AnimBlueprintGeneratedClass m252mortar_tube_Skeleton_AnimBlueprint.m252mortar_tube_Skeleton_AnimBlueprint_C
// 0x0220 (FullSize[0x04A0] - InheritedSize[0x0280])
class Um252mortar_tube_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5DB6313042D0D9E838D1AB943C08E285;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AC42EFEC4AC6F01EA6833688C58FF0ED;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_35DB2CEC49807C8C74A5BF8B3D3A83D3; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_1F94DA074969D588306803AF6D512A1C; // 0x0318(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass m252mortar_tube_Skeleton_AnimBlueprint.m252mortar_tube_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_m252mortar_tube_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
