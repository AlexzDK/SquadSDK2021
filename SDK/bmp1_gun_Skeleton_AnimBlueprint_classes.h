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

// AnimBlueprintGeneratedClass bmp1_gun_Skeleton_AnimBlueprint.bmp1_gun_Skeleton_AnimBlueprint_C
// 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
class Ubmp1_gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_55A7918546C68266B9170DB6944894D4;       // 0x0288(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_87A64AFE4A00E1F5614D96B6E32D10E5; // 0x02B8(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A8B665E542F385F6FCFC63BD0AF505BE;       // 0x02D0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass bmp1_gun_Skeleton_AnimBlueprint.bmp1_gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_bmp1_gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
