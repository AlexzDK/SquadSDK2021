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

// AnimBlueprintGeneratedClass bmp1_turret_Skeleton_AnimBlueprint.bmp1_turret_Skeleton_AnimBlueprint_C
// 0x00A0 (FullSize[0x0308] - InheritedSize[0x0268])
class Ubmp1_turret_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_XBO1[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4AF0158A4D975C11FA4B309517E10EBA;       // 0x0278(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C7ECB3D1425970C507E5BD8068CB13A3; // 0x02A8(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_47CB3154467C5F75072922AF3FE38D47;       // 0x02C0(0x0048)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass bmp1_turret_Skeleton_AnimBlueprint.bmp1_turret_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_bmp1_turret_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
