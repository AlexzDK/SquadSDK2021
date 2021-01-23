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

// AnimBlueprintGeneratedClass Dshk_Cupola_Turret_Skeleton_AnimBlueprint.Dshk_Cupola_Turret_Skeleton_AnimBlueprint_C
// 0x0244 (FullSize[0x04C4] - InheritedSize[0x0280])
class UDshk_Cupola_Turret_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DA062E98405CAB71AFB4B6805A4F5C14;       // 0x0288(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_108C4E1A4E9D3B279554DEB092347206; // 0x02D0(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_244FF2624584DED258AE29A7F9E38AA9;       // 0x02E8(0x0048)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3C1DC7024EFCCBA362CFE290C1499164; // 0x0330(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_93C019644C08A2E4E9748B93E0D29FB4; // 0x0448(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4ADFB826486BF65921FA94B18E4F5B9C; // 0x0468(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root_3B9180944CE7F72C6B9771BB529FDBEC;       // 0x0488(0x0030)
	struct FRotator                                    Pitch_Cupola;                                              // 0x04B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dshk_Cupola_Turret_Skeleton_AnimBlueprint.Dshk_Cupola_Turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Dshk_Cupola_Turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
