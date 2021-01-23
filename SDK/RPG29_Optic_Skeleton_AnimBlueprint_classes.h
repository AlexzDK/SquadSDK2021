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

// AnimBlueprintGeneratedClass RPG29_Optic_Skeleton_AnimBlueprint.RPG29_Optic_Skeleton_AnimBlueprint_C
// 0x04B0 (FullSize[0x0760] - InheritedSize[0x02B0])
class URPG29_Optic_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_64E949904A753C3AF55ACF91C21F4287;       // 0x02B8(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9343F9B0400E630624D3438E1E1E7D9D; // 0x02E8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_439CCF314328DF6A737D10B9518108A0;       // 0x03A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_377D2ECA41B965F8CE43419DF7F4733F;       // 0x03F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FA24CEBA4F1D8CDEF05A29BE462AC4E6;       // 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E2F777E451E9A0A84EC4CBA0F83C79E; // 0x0480(0x0078)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_D1196BE0483E2BD11E1CF5885734D7EF; // 0x04F8(0x0018)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C0A984CE4CBD70F96787FEAE7BCF2AB6; // 0x0510(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AD5DF8654E453377D77DA6BCEA4EB1AD; // 0x0618(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_232BA1B3494FBEFEB3097D9FAD8172B5; // 0x0638(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CE90D84843BDF39110BEAA89C0C6DC86; // 0x0740(0x0020)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPG29_Optic_Skeleton_AnimBlueprint.RPG29_Optic_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_RPG29_Optic_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
