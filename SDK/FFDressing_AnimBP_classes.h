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

// AnimBlueprintGeneratedClass FFDressing_AnimBP.FFDressing_AnimBP_C
// 0x0144 (FullSize[0x03E0] - InheritedSize[0x029C])
class UFFDressing_AnimBP_C : public USQItemAnimInstance
{
public:
	unsigned char                                      UnknownData_UTMB[0x4];                                     // 0x029C(0x0004) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_55EF32654D98F9ADA5DBF0B246D5A165;       // 0x02A8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_285E110B43605EFFFE6EB09E43369335;       // 0x02D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D40FC6B34180E61FB1E348B228A5124E;       // 0x0320(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A809D0994B0BE5B0C629D59C6808056D; // 0x0368(0x0078)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FFDressing_AnimBP.FFDressing_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_FFDressing_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
