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

// AnimBlueprintGeneratedClass USBinoculars_Skeleton_AnimBlueprint.USBinoculars_Skeleton_AnimBlueprint_C
// 0x00E0 (FullSize[0x0390] - InheritedSize[0x02B0])
class UUSBinoculars_Skeleton_AnimBlueprint_C : public USQWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F0E33350472186C9FC15E7A065786E60;       // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAB7687341F84D26066AE09E4084FC88;       // 0x02E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_831013FF4DD31661F14E6EABDD0C18B6;       // 0x0330(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4B49F2A447FA545F55DD1CA4B088CF13; // 0x0378(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass USBinoculars_Skeleton_AnimBlueprint.USBinoculars_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_USBinoculars_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
