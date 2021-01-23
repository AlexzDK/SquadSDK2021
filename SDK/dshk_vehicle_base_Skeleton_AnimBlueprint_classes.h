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

// AnimBlueprintGeneratedClass dshk_vehicle_base_Skeleton_AnimBlueprint.dshk_vehicle_base_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class Udshk_vehicle_base_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F91E64DA48C86C024FFB78BC582FCAFA;       // 0x0288(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_60AC6C7C45B60B2E5493268832E54C79; // 0x02B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_68E2FBBE45D8F9D0084DA599FEB484BB;       // 0x0440(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C283D4B349FC6C147809DCBFA9C1D192; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B9934B2247A1D707221CD7AFC8C04DB7; // 0x04A0(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_18F7F53C4F85BB6AB1220DA7141CA2DA; // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_22DDF0494584F1BFFD9C86B32A2DFBA0;       // 0x05A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7DED28B54204120BFA209B996E67BA81;       // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass dshk_vehicle_base_Skeleton_AnimBlueprint.dshk_vehicle_base_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_dshk_vehicle_base_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
