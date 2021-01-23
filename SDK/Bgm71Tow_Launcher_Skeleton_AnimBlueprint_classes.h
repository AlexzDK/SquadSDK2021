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

// AnimBlueprintGeneratedClass Bgm71Tow_Launcher_Skeleton_AnimBlueprint.Bgm71Tow_Launcher_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UBgm71Tow_Launcher_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CAB5957846E787FA40E7C5B66746F980;       // 0x0288(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9F366A014ABAE5FEB001F6B7C0E9E2A5; // 0x02B8(0x0188)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A6C9842E42B6ED7FED04D78A58480BC5;       // 0x0440(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F199DE354E05B7C6751679AD8B8F69F2; // 0x0488(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9DD2304D4A70DD858D35DBA774D9BA68; // 0x04A0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0A648027472A7BCB5EA6ADB5D2591447;       // 0x0560(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4C95174E4F01334B945ED9AEF9C36868;       // 0x05A8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E0BC39D1462107E8B2E6C48470E4D85E; // 0x05F0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bgm71Tow_Launcher_Skeleton_AnimBlueprint.Bgm71Tow_Launcher_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Bgm71Tow_Launcher_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
