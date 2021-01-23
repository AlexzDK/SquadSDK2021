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

// AnimBlueprintGeneratedClass T72B3_turret_Skeleton_AnimBlueprint.T72B3_turret_Skeleton_AnimBlueprint_C
// 0x0828 (FullSize[0x0A90] - InheritedSize[0x0268])
class UT72B3_turret_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_0X5Z[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9350500A44AFF4A694E95396E0D9A1C0;       // 0x0278(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46CD92ED482E0A7A56F086B66C8B375C; // 0x02A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7E398A5049698FF89048BF9646343DCD; // 0x02D0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3CC68E104057CD62082159A7CA9410CD;       // 0x02F8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A4BAC51B4934D19164BB77B3BC510C9D; // 0x0340(0x00C0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F8A568D444CA6A0FC3F42DBAEB2C178C; // 0x0400(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8DCCC09047BC23AD4A4E8481ADCFAAD0; // 0x0840(0x00B8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0608BB28421ACFC3B0283F94C2756F06; // 0x08F8(0x0010)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E70386F74FB3262BB5C830A0CCE9DA2A; // 0x0908(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_00FC3DC54587ED5AC34CFF98938F338E; // 0x09C0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A2DB78541070613D16D9B913F81E879; // 0x09E0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_53D52F91468543D248AF4BA03CAE37B3; // 0x0A08(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F6B2921F4C029BCFE9F9BFB6FD0B6B58; // 0x0A28(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_61D245044E260D821DC5CCABC5278731;       // 0x0A48(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass T72B3_turret_Skeleton_AnimBlueprint.T72B3_turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_T72B3_turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
