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

// AnimBlueprintGeneratedClass safir_Skeleton_AnimBlueprint.safir_Skeleton_AnimBlueprint_C
// 0x1F30 (FullSize[0x28C0] - InheritedSize[0x0990])
class Usafir_Skeleton_AnimBlueprint_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_535092C447368856F25254868E6A1763;       // 0x0998(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_C0DA8994430AF5BD5AD5A78A737E2DF8; // 0x09C8(0x0010)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_8B4EC66A469C52CE47E60C8FDA28D9FC; // 0x09D8(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19E6212F4F21157DA33208ADFC51EC88; // 0x0AB8(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B63E321D4CADD090C36BE3931720A138; // 0x0BC0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4482C96E496360ABC58DF79A297995C6; // 0x0C78(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7465A5C64F6AEF61D4B309BE281767B3; // 0x0CA0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5435D5FA473DFA13CE3E919CDBC22C0A; // 0x0CC8(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D906913342B644F8C63E70B39D6CBCE3;       // 0x0D88(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A2496A4C4C59F0A1E6C47182A29092FB; // 0x0DD0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9085CD19472FF1020B54D2AA637782CA; // 0x0ED8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B0B2C8A24AC135D3FA35A89163EBC8FD; // 0x0FE0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_65EC11F54DF5F9B1A48088B8C741857E; // 0x10E8(0x0108)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FF6D4F9D41941E4D68CBCBA73C252020; // 0x11F0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_97DCC05D41A0C5B66CF6139985603E9A; // 0x1630(0x0440)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_AF88AA374959556905EFEB9F99E4E8F2; // 0x1A70(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B79589FF45867FD064F6C2A798FBF149; // 0x1B28(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6836071C4784F66F5456E7B1F85F7D4F; // 0x1B48(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9AB9FEC495D87B4891704ACA73FC932; // 0x1B68(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8CDF75434B5207150A25518C0F415AF6; // 0x1B90(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_302651AB4FEF336EF256C682C876009C; // 0x1BB0(0x0440)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0AA748AE463297D76D4158A29E964BCB; // 0x1FF0(0x0440)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_3DE6BEB4426F65E23C4BBA864A14B7F6; // 0x2430(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_0340460642B6D1AA47A5AF936B73014D; // 0x2548(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_ED054568443D819CB394FA809504D69B; // 0x2660(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_F336C5B74E790739E3B1D3B82E517498; // 0x2778(0x0118)
	struct FVector                                     Wheel_L1_Scale;                                            // 0x2890(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_L2_Scale;                                            // 0x289C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R1_Scale;                                            // 0x28A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Wheel_R2_Scale;                                            // 0x28B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass safir_Skeleton_AnimBlueprint.safir_Skeleton_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_safir_Skeleton_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
