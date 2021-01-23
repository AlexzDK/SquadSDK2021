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

// AnimBlueprintGeneratedClass Ural_375_AnimBP.Ural_375_AnimBP_C
// 0x2081 (FullSize[0x2A11] - InheritedSize[0x0990])
class UUral_375_AnimBP_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_163FB72248B6B57029F0D09E88CD4227;       // 0x0998(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_2B3B6D3A47D16983F1D8E79AF7A48EE2; // 0x09C8(0x0010)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A615710B4D03BBF16DA893B539042547; // 0x09D8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_856A29534DD3EDE1E6771E805E5050E5; // 0x0AE0(0x0108)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_DDBCC45F44BC463388643EBFCAECDA6A; // 0x0BE8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E1BE940A44C38C255896E591E75647C5; // 0x0CC8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E0E0ABC94A2F5103B207DA86CA19CCD8; // 0x0D80(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6E8252E041BD6CEA7FC47AA68943B64D; // 0x0DA8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3B6BD05A4B5E50473AF7B6A2DFDC6F7D;       // 0x0DD0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A210CD094C6CF596E71E809CBC1A4C6D; // 0x0E18(0x00C0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_884BD1B34F47B75FB3C480B83A365FC3; // 0x0ED8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15E75A894ED81377F2C49C949FBF3A02; // 0x0FE0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F9FE8EC347CAAB5BBC3375A0C847F1AF; // 0x10E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B404A0884DE386CA61C19AACD48C07D9; // 0x11F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7180E69E40D9A2E4F0FDA192ABEC918D; // 0x12F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_583752BA428A54BD743860BE7525CA63; // 0x1400(0x0108)
	unsigned char                                      UnknownData_NH4Z[0x8];                                     // 0x1508(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_27B419564E9CA720B958239768539900; // 0x1510(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_060BE44A4639DD3E24D0F7BF7EE2F33E; // 0x1950(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BD587D474B0B2EFCFD62A0B36005CD66; // 0x1D90(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9C0E40FF4D778D43E3A3B19549906B39; // 0x21D0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DC4A6034408F75502AF9B488900F505E; // 0x2288(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5D282B434F38F96C9C65CEADA2F2BD0B; // 0x22A8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7339945646F3614B66A13187F37BAF1C; // 0x22D0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F5E1F06B4E86D4A952B3ABBA91E10A5C; // 0x22F0(0x0020)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6781273642C404B9F5146F8981A3B292; // 0x2310(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_F409FF7844068A6FA30B3EB67A634EC7; // 0x2428(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3BCA14C5481DF3F1CA76C7AAB85EB978; // 0x2540(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_ABF195954D3143F1792FD19812A10142; // 0x2658(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3241714942B5E6B9571862B6C28A5E32; // 0x2770(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6E928B6D4DF79AC16067DB9A162C723C; // 0x2888(0x0118)
	struct FRotator                                    fan_rotator;                                               // 0x29A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     radio_jiggle;                                              // 0x29AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              rotator_combine;                                           // 0x29B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SteeringInput;                                             // 0x29BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FanSpeed;                                                  // 0x29C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFanSpeed;                                               // 0x29C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L1_Scale;                                            // 0x29C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L2_Scale;                                            // 0x29D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L3_Scale;                                            // 0x29E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R1_Scale;                                            // 0x29EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R2_Scale;                                            // 0x29F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R3_Scale;                                            // 0x2A04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartAnimDynamics;                                         // 0x2A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ural_375_AnimBP.Ural_375_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Ural_375_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
