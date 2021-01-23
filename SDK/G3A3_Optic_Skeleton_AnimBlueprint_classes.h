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

// AnimBlueprintGeneratedClass G3A3_Optic_Skeleton_AnimBlueprint.G3A3_Optic_Skeleton_AnimBlueprint_C
// 0x01B8 (FullSize[0x0468] - InheritedSize[0x02B0])
class UG3A3_Optic_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1B49A0EA47B8F33965F993A4CE520792;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3318C4F148FBBABC2FF5049E3D60B66C;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FDD94389404FD4A13EB56196C54316A9;       // 0x0330(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A3FBC3094F622ADBC8E42F92C0508A33;       // 0x0378(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6EDB4B5A4B97C09483B67CA06BFECBBF;       // 0x03C0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DA71C60B4D5E4945E20BDFAB3D8493CF;       // 0x0408(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B56B925A41DDAC083044CE823A68E09C; // 0x0450(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass G3A3_Optic_Skeleton_AnimBlueprint.G3A3_Optic_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_G3A3_Optic_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
