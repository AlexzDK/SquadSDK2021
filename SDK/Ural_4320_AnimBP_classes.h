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

// AnimBlueprintGeneratedClass Ural_4320_AnimBP.Ural_4320_AnimBP_C
// 0x2078 (FullSize[0x2A08] - InheritedSize[0x0990])
class UUral_4320_AnimBP_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_48C26D4D406194E01CA08F80DD994824;       // 0x0998(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_99F4808F41527A5ECBDCB984D94E7A4E; // 0x09C8(0x0010)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_01248643419D7CBA98C39691B1E0A643; // 0x09D8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_F5E611D1445F7B7F0072DA85123B2928; // 0x0AF0(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8520261549D20C9DEAEC0C87B8A50839; // 0x0C08(0x0108)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7BE19C934B1450AF20086591DDCCCB02; // 0x0D10(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_613A96654E167EDE087A95B16BD57F57; // 0x0E28(0x0108)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_BF1662154125A2B808C0789CCB5B24AE; // 0x0F30(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C43413104ADACCC14D2C899279357DD2; // 0x1010(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E3EA03294DC6B814684CF8A8923E7A96; // 0x10C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53B292F048A846790BE93A822D9CF6C4; // 0x10F0(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E0EF91FB4C49EE50C5F06E85D2C7EEDE;       // 0x1118(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4B37F10749DFDDB6079C42BAB667473D; // 0x1160(0x00C0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18971E3740B90FA458509CA0BDF59D62; // 0x1220(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BA2D986D40F1443D4D9555BA8940C826; // 0x1660(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7613CAE94E0BD75259C7D4BA5BF7F709; // 0x1AA0(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F3F16F6E4D2212560BB608AE9BC9020B; // 0x1EE0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B87C835C4C85AAA33005B0A6151FD4A4; // 0x1F98(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66B39B954B877016CFFD8B9128B85B83; // 0x1FB8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E5CB20A64055A2E5EF8DCC933856BD57; // 0x1FE0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_87596B4D47567BBC86A81CAEC3AC7594; // 0x2000(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F5933AE84113ABC5A8DC38B2AE61C0C2; // 0x2020(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D14E0EEA45038B71DC65EDB9DA6FC490; // 0x2128(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BF097F5C45665394E3CA06941EF54D9E; // 0x2230(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_00003D7D4626B4A5FEE9C1A0E5DE85CC; // 0x2338(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_745F61B64BE35C43B27623960DBC6140; // 0x2440(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9490F224473575CDB1D6AA88A055219F; // 0x2548(0x0108)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C067F9D14731D37BADEBBD8E0F92C737; // 0x2650(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_626843EA488A508B9BF287AF27928385; // 0x2768(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B1E1C1A44FD72BAE03981BB365D7D407; // 0x2880(0x0118)
	struct FRotator                                    fan_rotator;                                               // 0x2998(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     radio_jiggle;                                              // 0x29A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              rotator_combine;                                           // 0x29B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SteeringInput;                                             // 0x29B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FanSpeed;                                                  // 0x29B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFanSpeed;                                               // 0x29BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L1_Scale;                                            // 0x29C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L2_Scale;                                            // 0x29CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L3_Scale;                                            // 0x29D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R1_Scale;                                            // 0x29E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R2_Scale;                                            // 0x29F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R3_Scale;                                            // 0x29FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ural_4320_AnimBP.Ural_4320_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Ural_4320_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
