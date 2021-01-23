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

// AnimBlueprintGeneratedClass T72_AnimBP.T72_AnimBP_C
// 0x1312 (FullSize[0x1CA2] - InheritedSize[0x0990])
class UT72_AnimBP_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BEA9D5A3418757D9B1993CB7028B09B2;       // 0x0998(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D5E9D42140CCFE77B85D98A4243FC117; // 0x09C8(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_FB1EB63A49F803561FE2FDB1D0AE40F5; // 0x09E8(0x0010)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A1B91B604601F4B4E557EFBA8F6A8E5D; // 0x09F8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5F58EFCB4BD2BE804398B28B0D06BAE1; // 0x0B10(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_9B4C2C7646631510CE70A3A111CEF826; // 0x0C28(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A27CE0914D63F5321E7F4488D85D94B7; // 0x0D40(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_672E8AE3464E955165BF2085EC180619; // 0x0E58(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7415E8AD48EE4940CCB0AA936C56EECF; // 0x0F70(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_CF37349B4E3D27414AC8EFBAEA1F2168; // 0x1088(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_EBC16D3E49EDE916931D5AA81A467D33; // 0x11A0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A48ABF81414F73C5BDD5E39D1ABAA88C; // 0x12B8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A328491A4FDDDC6482A46596FC4BB3C3; // 0x13D0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_14857D8B418A71D283150BB5634E908E; // 0x14E8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_09EFACE446FE0D3DA98E76BD3986694B; // 0x1600(0x0118)
	struct FSQAnimNode_WheelHandler                    SQAnimGraphNode_WheelHandler_B50D21C4469ED5D96AECED80D39B1723; // 0x1718(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_897147374CA139FB891AEDBF3B63F572; // 0x1810(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C80BB06A4DF84DBC89C64787B4E3EFDF; // 0x18C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3CA020C14C1C751AAC2FF5929C190B56; // 0x18F0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FC37D42C4D218CFDE31594AA30F4CB95;       // 0x1918(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7E5745EA4DB17AB146C38191C874049E; // 0x1960(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B76966744EC429E02E303699A1C28ED8; // 0x1A20(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C3A72B2F485909EDA7E8D6A74B40EAE8; // 0x1AE8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4EEBF1884A336BCE9F33E5A37391A36D; // 0x1BB0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B4E674B46756C219AFAE1959AC9F505; // 0x1C28(0x0078)
	bool                                               bIsTrackLeftDestroyed;                                     // 0x1CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsTrackRightDestroyed;                                    // 0x1CA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass T72_AnimBP.T72_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_T72_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
