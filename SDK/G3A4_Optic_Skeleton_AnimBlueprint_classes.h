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

// AnimBlueprintGeneratedClass G3A4_Optic_Skeleton_AnimBlueprint.G3A4_Optic_Skeleton_AnimBlueprint_C
// 0x02F0 (FullSize[0x05A0] - InheritedSize[0x02B0])
class UG3A4_Optic_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A15C0E2A40F0BEECE07817B8502968B6;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B921F7A3493E8A831A6BBE97B691C922;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_186097EE47B3FB40BE5864B335A82852;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6BABDC6D419B6BDEDF44228CF14FE3F9;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FF591BBD497A318F69126B91B86FC278;       // 0x03C0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_51264C3C47B87C35ACF4D3958860883E;       // 0x0408(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E6959534E4A9D5164EA3884AFA303FA; // 0x0450(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5F44575B4486FDCEEDE8F3BA8CF133CE; // 0x04C8(0x00C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D8BA808943F195BE041EF0BCA10F2B7E; // 0x0588(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass G3A4_Optic_Skeleton_AnimBlueprint.G3A4_Optic_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_G3A4_Optic_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
