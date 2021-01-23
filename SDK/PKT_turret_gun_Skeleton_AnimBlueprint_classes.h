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

// AnimBlueprintGeneratedClass PKT_turret_gun_Skeleton_AnimBlueprint.PKT_turret_gun_Skeleton_AnimBlueprint_C
// 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
class UPKT_turret_gun_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B1F7D7964E2F1A92F14BA5B706A17905;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ECB2DD7E45C6C2115A109E8461E83080;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1802C7E0499DA8E0411EA1B8DC4E4622; // 0x0300(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PKT_turret_gun_Skeleton_AnimBlueprint.PKT_turret_gun_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_PKT_turret_gun_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
