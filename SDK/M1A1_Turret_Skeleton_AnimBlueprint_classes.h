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

// AnimBlueprintGeneratedClass M1A1_Turret_Skeleton_AnimBlueprint.M1A1_Turret_Skeleton_AnimBlueprint_C
// 0x0C20 (FullSize[0x0E88] - InheritedSize[0x0268])
class UM1A1_Turret_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_PYAF[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AFD1383A4E131E0C73D0C792B78EBCC6;       // 0x0278(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63DE80DC48417095F0D0AC963DB2BEDB; // 0x02A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89083ACE49481CE136DFE5868F066DB7; // 0x02D0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9CA2269485A4165728625BA9B16B015;       // 0x02F8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_290511B643E553296AB1C8BB1E0FD85D; // 0x0340(0x00C0)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_479BBDA441A3BAD2EF06F6A125C3DE00; // 0x0400(0x0010)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_32796DF545C08636FECB9FA17AD7B05C; // 0x0410(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1CB60B4B4ED3790A22954BAB19D277CC; // 0x0850(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CDEEB92940ACF8EFCCA441BB606272B1; // 0x0C90(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5505CC2B4B00F8D27290548D3B859652; // 0x0D48(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6A12A6D44304A6D4DEE3CFBABF12C6A6; // 0x0E00(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84A5ABF24AC4EEA6CB2370B6922B2FF5; // 0x0E20(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_50A7E5CB415475BB167BD2AE3BDDF50F; // 0x0E48(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D8B2D3B64D6F13ED95828A9A70612ECB; // 0x0E68(0x0020)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M1A1_Turret_Skeleton_AnimBlueprint.M1A1_Turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M1A1_Turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
