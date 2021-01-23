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

// AnimBlueprintGeneratedClass BMP1_AnimBlueprint.BMP1_AnimBlueprint_C
// 0x187A (FullSize[0x220A] - InheritedSize[0x0990])
class UBMP1_AnimBlueprint_C : public USQVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F8EC3C4247545085269D4A92CAB6DB9A;       // 0x0998(0x0030)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0957E0FF464D38CE3102E890778F9F16; // 0x09C8(0x0010)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_38FBFDFC4AD53A642D235EBCE7041DF3; // 0x09D8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_71DAD2504DF23FDBA4D666BB691D2554; // 0x0AF0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1E76DB534752FCC739F1318298271A70; // 0x0C08(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_771C59DC45A70DCB0EC9A3A3742CD6B1; // 0x0D20(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1E68555A4196765A9E3F2BA16F074BAC; // 0x0E38(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D16E5224418E1B09044C6F98E27EA561; // 0x0F50(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6BDA71A84C2D7D4DDDEFC18B649A855D; // 0x1068(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C3673DF749E71B0EC7A51181532C0E72; // 0x1180(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_AB29E9934DB73EF662F20AB4EB11BE77; // 0x1298(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C84C669A43C4253F5FDFBFBFAF31E2E6; // 0x13B0(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D12E8F7147D01B2EB572BABADDF7BD89; // 0x14C8(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1D6CA6E941DBC4098772D2B3AABAF763; // 0x15E0(0x0118)
	struct FSQAnimNode_WheelHandler                    SQAnimGraphNode_WheelHandler_560C0FF940B50309FC5E99A411B4DCAF; // 0x16F8(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0509B1F94B4190DC83A3F3A4780D640B; // 0x17F0(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_98886D1940551726C72CA896499EBB00; // 0x18A8(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D58A826246BD6B77D359EB938A675C99; // 0x18C8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_971550A24C1E438DDFF4B580C1A5C41A; // 0x1980(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C652B52947E5F88ACF0B2CB4BC3CCC47; // 0x19A8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_17FBB4464E02425DE1CD1A861C1B2057;       // 0x19D0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C534325D41497452BD5E7D85D7D6A355; // 0x1A18(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54BDA0CF4E28B22DB7BAE6A106307D86; // 0x1AD8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_544E9FFE40880CEF4B6291AA7FFD0F8D; // 0x1B50(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A94D46454B1553DA8106B6962FBE5AFB; // 0x1BC8(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A14CBABD4B64B9539DF59C93C31867CB; // 0x1C90(0x00C8)
	unsigned char                                      UnknownData_ZWQR[0x8];                                     // 0x1D58(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7DAD9CB74D18726E93323F8226D7E860; // 0x1D60(0x0440)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AC35D52F44E81FAB242689A5993B920B; // 0x21A0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CE1E78A144D110C45092399CD5EE73C0; // 0x21C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9035829B4D1BE2D17C66468A4E4AB8AA; // 0x21E8(0x0020)
	bool                                               bIsTrackLeftDestroyed;                                     // 0x2208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsTrackRightDestroyed;                                    // 0x2209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BMP1_AnimBlueprint.BMP1_AnimBlueprint_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BMP1_AnimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
