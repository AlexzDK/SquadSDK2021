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

// AnimBlueprintGeneratedClass T62_hull_Skeleton_AnimBlueprint.T62_hull_Skeleton_AnimBlueprint_C
// 0x10E2 (FullSize[0x1A72] - InheritedSize[0x0990])
class UT62_hull_Skeleton_AnimBlueprint_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7958888446A1AD9EF207A1BDB3729701;       // 0x0998(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6521D08B40C79333E362DDBFACDEED8E; // 0x09C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F75948264B7ADF9E11F34CA436A5EAB7; // 0x09F0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08F1A436405835D630411A9389F9DA64;       // 0x0A18(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0C1C1971453D50F2C0005C9CEF94D437; // 0x0A60(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_27C0302047CC3F42AC1E4B9081D937D4; // 0x0B20(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_989C222E4D21B85B3FBC06A173109376; // 0x0B40(0x0010)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_E69B8F0949FC6253FFB5248FFD899D32; // 0x0B50(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2084DE084515DEDF22952287DCDF8396; // 0x0C68(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_34D0993A41CD41C324726BB0968AE792; // 0x0D80(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_717BF4F343B7CD8D5B8B4F804517C5D3; // 0x0E98(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6A470EC9440CF03F777B7A853FF62AB1; // 0x0FB0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3B9D5AE54DB300C559AF5EAB67B5A6EE; // 0x10C8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_DEA45FD94C5D46196463859A7C69FE75; // 0x11E0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2227E049424A8DD13DA2208466EC8DC7; // 0x12F8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_DF3AC0434713EC8C1B44EBBB24125ECE; // 0x1410(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_668CF7DC4286A073DBA29CAAD31100C9; // 0x1528(0x0118)
	struct FSQAnimNode_WheelHandler                    SQAnimGraphNode_WheelHandler_BADA429E40D43D61881C68B7BC82B5F4; // 0x1640(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FB7D60AD484A20B2BC2271BA350E9017; // 0x1738(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_245BDE16416572C6295FFEAFC39B1205; // 0x17F0(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CD41FF704CF8CA00938AF39440862C90; // 0x18B8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_312481A34A1C91C56BC1B9A869983C14; // 0x1980(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D31A09A947835498CB42D1B3883C2762; // 0x19F8(0x0078)
	bool                                               bIsTrackLeftDestroyed;                                     // 0x1A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsTrackRightDestroyed;                                    // 0x1A71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass T62_hull_Skeleton_AnimBlueprint.T62_hull_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_T62_hull_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
