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

// AnimBlueprintGeneratedClass Makarov_Skeleton_AnimBlueprint.Makarov_Skeleton_AnimBlueprint_C
// 0x0260 (FullSize[0x0510] - InheritedSize[0x02B0])
class UMakarov_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_16E83AC34C00CE189F29089B6A2D8277;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6278AA77475C42595969B296A9DB5FC4; // 0x02E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB801CDF43FD8F98E7F47FB4321D5832; // 0x03A8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D561E88545C63FD940AD75BDBD93847C;       // 0x0420(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9044428A48DAD537268FDD9E1AC103E9;       // 0x0468(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9AF6997C4247605D51AA23917DB1B0A7;       // 0x04B0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4E622DFD4F7024E328F5F397418560DB; // 0x04F8(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Makarov_Skeleton_AnimBlueprint.Makarov_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Makarov_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
