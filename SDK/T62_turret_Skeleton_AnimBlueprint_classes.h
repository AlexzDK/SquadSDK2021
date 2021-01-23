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

// AnimBlueprintGeneratedClass T62_turret_Skeleton_AnimBlueprint.T62_turret_Skeleton_AnimBlueprint_C
// 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
class UT62_turret_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_HMCP[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_76C8C452438C363EAB3597B0399A4030; // 0x0278(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_238FED7B4DAA91CA67A83A900886F3D9;       // 0x0290(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_350DBCD94FDB9E7653BE4BA280D981C1;       // 0x02D8(0x0030)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass T62_turret_Skeleton_AnimBlueprint.T62_turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_T62_turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
