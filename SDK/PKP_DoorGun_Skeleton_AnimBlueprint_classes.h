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

// AnimBlueprintGeneratedClass PKP_DoorGun_Skeleton_AnimBlueprint.PKP_DoorGun_Skeleton_AnimBlueprint_C
// 0x03B8 (FullSize[0x0638] - InheritedSize[0x0280])
class UPKP_DoorGun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4CF526CE4C897140B132038C36050098;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_82CBC8604FD497BA45368197BB2D70D2;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_62BA5E354DAEE64A7F0251A0BDD022DD; // 0x0300(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F79891294B10ADB314C7C2B26FE7329A; // 0x0318(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9E8DB2474AC04131748FEDADE4BFCD4E;       // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0684F0D94C342DC45F39A989DD50945E;       // 0x0420(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A9AFA9EF4128DBB0B9A8D5AC481EBA58; // 0x0468(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FA72ED5B46547A750CD28886BC5BA4D9; // 0x04B0(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PKP_DoorGun_Skeleton_AnimBlueprint.PKP_DoorGun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_PKP_DoorGun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
