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

// AnimBlueprintGeneratedClass SovietBinoculars_Skeleton_AnimBlueprint.SovietBinoculars_Skeleton_AnimBlueprint_C
// 0x00E0 (FullSize[0x0390] - InheritedSize[0x02B0])
class USovietBinoculars_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8803D9FF42D80D424C480F98962A9A03;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AFE55A214F57598A1AD322B238B8E6DF;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_06A7D47A4998E98FD1DDFC9E3199C98A;       // 0x0330(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_60E1C988426D5C6703ADE39ED9ECD41B; // 0x0378(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SovietBinoculars_Skeleton_AnimBlueprint.SovietBinoculars_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SovietBinoculars_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
