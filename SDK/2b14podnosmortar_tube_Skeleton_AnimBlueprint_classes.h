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

// AnimBlueprintGeneratedClass 2b14podnosmortar_tube_Skeleton_AnimBlueprint.2b14podnosmortar_tube_Skeleton_AnimBlueprint_C
// 0x0220 (FullSize[0x04A0] - InheritedSize[0x0280])
class U2b14podnosmortar_tube_Skeleton_AnimBlueprint_C : public USQVehicleWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B001C8A34F47848CA4DA53A2D9CB24A6;       // 0x0288(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C78F14A5471B0217EBC0DBA641260AB0;       // 0x02B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CDB6A86B4E10D996B79A0796A4C17016; // 0x0300(0x0018)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CBC6A04141F57DA84C338E85647FF431; // 0x0318(0x0188)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass 2b14podnosmortar_tube_Skeleton_AnimBlueprint.2b14podnosmortar_tube_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_2b14podnosmortar_tube_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
