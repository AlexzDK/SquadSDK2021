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

// AnimBlueprintGeneratedClass BMP2_Turret_Skeleton_AnimBlueprint.BMP2_Turret_Skeleton_AnimBlueprint_C
// 0x0830 (FullSize[0x0A98] - InheritedSize[0x0268])
class UBMP2_Turret_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_QU00[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5C6532CE4712E01EA7EDCCAA52DF8ABE;       // 0x0278(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2EA75F874BBFE546903B49BC0492B7D2;       // 0x02A8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A137D9A04F98A67C3E34A4A2846F737F; // 0x02F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B8772CDD46615083D9A334A7EF1D62A4; // 0x0318(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F0A844B14C051DC0C99B4BBD09C7FE05;       // 0x0340(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_422A921C409E312B8A3FE2AD2973BB38; // 0x0388(0x00C0)
	unsigned char                                      UnknownData_7JDD[0x8];                                     // 0x0448(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3FA23F26428828FB594D15BCF2C0C86D; // 0x0450(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7F61AACC45B697645D0EA39A4B11C6CD; // 0x0890(0x00B8)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_B853EB604CF9B007FE26FD864010BA12; // 0x0948(0x0010)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2871A5E1407D52CA0BC024816977EDE4; // 0x0958(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_39F11C884A9E4D986CF0E981745AC730; // 0x0A10(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83C9377C4BBF8A44025090A74C4124B3; // 0x0A30(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_125E7683435C8B4D8CEB2D8CAC596EAB; // 0x0A58(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DEC1BAF041EBBC0FE33EE19EDF74A6CC; // 0x0A78(0x0020)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BMP2_Turret_Skeleton_AnimBlueprint.BMP2_Turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BMP2_Turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
