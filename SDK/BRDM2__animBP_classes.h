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

// AnimBlueprintGeneratedClass BRDM2__animBP.BRDM2__animBP_C
// 0x1890 (FullSize[0x2220] - InheritedSize[0x0990])
class UBRDM2__animBP_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8E4FC11E4924747AE56351A997512FE7;       // 0x0998(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E99A9EE5468F783B388ED2BF19940EA0; // 0x09C8(0x0010)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_CDE38B47470007BD27F0B18A263EB3DD; // 0x09D8(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ED98425842D2ED0CC9CFB9B56DF0CF7E; // 0x0AB8(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7B00BBA24FFA95DB2A88F290D4A0E797; // 0x0BC0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2193AB374B5327402F43308A945E6910; // 0x0C78(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C9D13DC44BC27D0D9F8DADA137FB9A16; // 0x0CA0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DC98A61A4093BCEF36D74AAECC098B4E;       // 0x0CC8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DCB9E2DB467DA18677F4D68A499D5A81; // 0x0D10(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4AC7B6174E39704A5DDD8581FC6013C2; // 0x0DD0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7F70A4B546AE97F5A8B9A0B35A63C70E; // 0x0ED8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4941737A4797596FFBE98C993B263B3B; // 0x0FE0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C985CEE9460C5B2A916CA99DA92BEA82; // 0x10E8(0x0108)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B3F2F13D4DDCDE2F4482238944087A17; // 0x11F0(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1AD02BC540B99796A9BDEE832B53AB0E; // 0x1630(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DD2E7FC54EE17DDB256327B38D826A5E; // 0x16E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93A805D048F015BAF3863A9A61E58743; // 0x1708(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C7E89C734ADB33E1E52198882A849243; // 0x1730(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_65305ECD45B01CA95D9C05A4D7AD1432; // 0x1750(0x0020)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3F95C47A4C8684806856A3B68B38FA4B;   // 0x1770(0x00F0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B146A8D8421D5A98A7098080DD47DB55;     // 0x1860(0x01B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_432D9ABA4E4EB6BF54B7E89758C275FD;   // 0x1A10(0x00F0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_78D2DB1C49363B56916C76996DE1C82B;     // 0x1B00(0x01B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E9570B424E3CDFFEFB811E9F9A1E85AA;   // 0x1CB0(0x00F0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F89909414301496652D973BEC929CA5F;     // 0x1DA0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9F37A06A4454CA60DD2D308914018A18;     // 0x1F50(0x01B0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0C9BD1E643C54E8C9B18B79B538E919A;   // 0x2100(0x00F0)
	struct FVector                                     Wheel_L1_Scale;                                            // 0x21F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L2_Scale;                                            // 0x21FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R1_Scale;                                            // 0x2208(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R2_Scale;                                            // 0x2214(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BRDM2__animBP.BRDM2__animBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BRDM2__animBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
