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

// AnimBlueprintGeneratedClass BTR_82A_gun_Skeleton_AnimBlueprint.BTR_82A_gun_Skeleton_AnimBlueprint_C
// 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
class UBTR_82A_gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4DB0AEF14030DA05EF59D480CD66C2BA;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9F9EC08C4898C59EC2E65A8F5166833B;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_75D34CF04463BB2269FD6E8017F9D692; // 0x0300(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BTR_82A_gun_Skeleton_AnimBlueprint.BTR_82A_gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BTR_82A_gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
