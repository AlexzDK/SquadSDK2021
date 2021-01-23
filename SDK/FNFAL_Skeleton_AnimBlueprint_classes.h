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

// AnimBlueprintGeneratedClass FNFAL_Skeleton_AnimBlueprint.FNFAL_Skeleton_AnimBlueprint_C
// 0x0600 (FullSize[0x08B0] - InheritedSize[0x02B0])
class UFNFAL_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C4DE5CBB4414B7A308174AB479B96138;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6867551245DA52823D7FF983B7E293C8;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B81BE25A46A2D7096B66C7930C9D961D;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_98C6151F4F2071228C83F9BB18B89F70;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_25A067044A4FDD101BF2DDB89A62C6F8;       // 0x03C0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_39CC92AC441F8C8639ADADB76756720A; // 0x0408(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F69698DB4EE952FFAAEA3FB44A24CEE4; // 0x04C8(0x0018)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DDB8924449CEB978EF416CA51BDA83B0; // 0x04E0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CADC2C4940BDDBED9795FDBA46A70B5E; // 0x05A0(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0E3C43754EA4260DEE8A71B4BD62ABFF; // 0x0618(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A5A076FF4EFA3DD02C2B4683DA731F8C; // 0x0660(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_789D0C7845BF8263CCD7B298DE40A4CC; // 0x0768(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6A253D2242B414FA241D03B732E6D13D; // 0x0788(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_433550DB434A5939FD1FA3AA90F49EFC; // 0x07A8(0x0108)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FNFAL_Skeleton_AnimBlueprint.FNFAL_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_FNFAL_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
