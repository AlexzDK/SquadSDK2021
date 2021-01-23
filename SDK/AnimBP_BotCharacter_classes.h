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

// AnimBlueprintGeneratedClass AnimBP_BotCharacter.AnimBP_BotCharacter_C
// 0x3B18 (FullSize[0x3D80] - InheritedSize[0x0268])
class UAnimBP_BotCharacter_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_SR5J[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_808325D3411FD2BACE9983973F259D28; // 0x0278(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CA2DE3D74A9CC5A167955194C02799BF;       // 0x02F0(0x0048)
	struct FAnimNode_LegIK                             AnimGraphNode_LegIK_526FE4F14D78A90646DE78B359A039E9;      // 0x0338(0x00F8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1742F7DB4725C327AE485486284E2376;       // 0x0430(0x0048)
	unsigned char                                      UnknownData_6Q4Z[0x8];                                     // 0x0478(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D29C52A14CAE017648050D9B1ECFDC75;  // 0x0480(0x01E0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_9EA599D64AA9FD3ADFDE90B137B66CEE;  // 0x0660(0x01E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3D290D3F4955671600A078AF0671DB30;       // 0x0840(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6EC6385A48E6F3843FFF388D2DF59D47;       // 0x0888(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2F9EBC07453CF6365DD084A27646043C; // 0x08D0(0x00C0)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_117928EC482ABC6795B142866EEE7D4A; // 0x0990(0x0118)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_5FD008B947844FA8141EECAAE09F3DF1; // 0x0AA8(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D56C63BD47B944BBC1BB3093EE58792B; // 0x0BC0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B03DB8764E8CAE22F869E89D25115AC9; // 0x0BE0(0x0020)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0779B27B45E53CF2A89E9D8EDF9E9198; // 0x0C00(0x0018)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E6ED6CB34FD73F6A6A7D73AAFA006E53; // 0x0C18(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BC638E9E4F1ADDCB9D4F268FC847BFED; // 0x0C38(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_A0E912194EE3AFCBEA1911B6C3EF436A; // 0x0C80(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8985488746E14DE3AEA711A370F6DDA2; // 0x0D20(0x00C8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CE6435834E1A1823CA10618426D79356;       // 0x0DE8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FF157E1B4AAEFBFDBAF5F8AB1723C949; // 0x0E30(0x00B8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D1C7B3474B92057A9797639CB518B558; // 0x0EE8(0x00B8)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_51C92A894B7B3ED7A41789BBBD65C44E; // 0x0FA0(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0240EEC84CF215A5680C9CBF0E72B1DF; // 0x1040(0x00C8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7EA6C1774CB81BCFA13C4C964D126D88; // 0x1108(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_73CF8363487FD52D4A7CA58B42C83ED4; // 0x1150(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_120C50B7445193D54E1E06B6CBF8926D; // 0x1208(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_830FF37741D57FDEE9CD9DA875F6B817; // 0x1230(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FE2DF6D649B813B145E83DA87EFC2F15; // 0x12E8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F858C15140FCC3586858BE97F0C0D39F; // 0x1310(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AAD3A6D642CCC34DC4B5E0BCCC5D796C; // 0x1418(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_690EA2E745732D6CC18404AEC6D237E6; // 0x14B8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1F579A364C88300A41CE2AAE02C76DC7; // 0x1570(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_776E199747A83EBEF2FE70AD1961D667; // 0x1598(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_79CAD874416E9D41884BE1B732C51882; // 0x15B8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D26616CD492B8A2F83AE8D9FAB11BE25; // 0x15D8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1B3AE574554CBB369EF9E9A93C782E3; // 0x1600(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DFDA608F4D67E48C9ABA6E82EEF48405; // 0x1678(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B39100D479C3825920D8A91EEA40075; // 0x1718(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5928A9AF43A651C78A8408B54D36798E; // 0x1790(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08A895D14757E866F3E17E9777A67159; // 0x1858(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2DA0BA8041835D6E634FEAB7201C985B; // 0x18D0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB3CED51484C6E0D9757ABBFDE1B8CDF; // 0x1998(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A26999604F5B24731600F29007543EF8; // 0x1A10(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D30DAEB64D0D3E28A3D9E4B0D926A39B; // 0x1AB0(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_B99256E04D7F44B8101FA9B091D39D75; // 0x1B28(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DD420774F3307AEF2D1C88F77B65513; // 0x1BF0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_030695444BA9FF79E6062686503F0955; // 0x1C68(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49A1C2204F363E8C1FF1E69414010254; // 0x1D08(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29AFB274408AC22A2C9DD4A71BB274BE; // 0x1D80(0x0078)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B3BB81144245BF097CCB2B914C655A5F; // 0x1DF8(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_748086BB42DD15347AC1B9BC3FDFE063; // 0x1E40(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A022130E4CD4C4E2EDDBC0AC034AF373; // 0x1EE0(0x00C8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_07913ECF4E9A37F51A2F3A89A9085567; // 0x1FA8(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_489B0331469FE23C26A04EA89CD821C4;       // 0x2048(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_235B84BE48C5AA2D7AAB998051D93D90; // 0x2090(0x0048)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_C78A93BA4089E465FC95158B1A56ACD6; // 0x20D8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_27A8E33C4EA4E5C3EB1ACC88F672E49C; // 0x2178(0x00C8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C3C5627B46647749CF64A38E29A657F3;       // 0x2240(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23373C304857FC6AF53A40B80ABE3D81; // 0x2288(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B86CF844645D0CB0343BD8740A46B21; // 0x2340(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20B5CE8C4A93A47FF51405A8BF527B02; // 0x23B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_851931654D8A9414938F87B4771B727E; // 0x23E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D449A3C49516AC6234FD6A8D975C10D; // 0x2408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1601C5EF47E677A970E0AF9D403B17E3; // 0x2430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B96F54F24E2184DB8F85B5A020E08DC6; // 0x2458(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CEB9BF154EDA14565878D6B4E1055622; // 0x2480(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D04A75604CDAE26114CB4EA8AD22225F; // 0x24A8(0x0078)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_942B134849F6858A93670C9786791A6E; // 0x2520(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9BD3560C4A90782802B763BA6F7083F9; // 0x2568(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF2BB21545A207C803216D99BE41B7BE; // 0x2598(0x0078)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17CB7BDF4B3A3A2CE6DE76A6959306DB; // 0x2610(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_AAB637664117BD007BBE919803D7233E; // 0x26F0(0x00C8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7040258B41100E38779D0498CC9A01D3; // 0x27B8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_851C1D7D4AC853ACBFF2FAB91DA6A1EA; // 0x2858(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_99A564664FA9EA26181E8E911BD21286; // 0x2880(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1B62887044F61238D00FC6AC29D6D0AC; // 0x2960(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A495F76B4214FE14FD06E8B1E9974522; // 0x2A28(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A887641144E7067358DE8A8E90132618; // 0x2A58(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_99F240714FB9F0894A73D1A6407A8202; // 0x2A80(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50C269BA49CA80AFB585948C662337FE; // 0x2B48(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_010C691340153893B39D579FAAA6B2CF; // 0x2BC0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EBDFD3CC4F7DA4C15AF0D4AFDCFE5088; // 0x2BF0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7D6D4BC7424951BC4AC908891BCF2D7B; // 0x2CA0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E75AB23F4F689E9DA6845685E29080CA; // 0x2CD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1F72F3049977559948946A98B67A9DD; // 0x2CF8(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_8BF30CFD4D0C996CE4EA32B190179C77; // 0x2D20(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B3A4CD2476CE42CF7BD20ACBAF8C4EF; // 0x2DE8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E938E3CA42B50D214646D79D934BA992; // 0x2E60(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FA715AB44D7ED05F57D653BC9C386346; // 0x2ED8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FAB1CB29459C6480B90928BFD8DBF530; // 0x2F78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_92AF900C41B533645A2A8388CC0FE388; // 0x2FF0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8BF40999423CF6A6C08222B63598B859; // 0x3020(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_87A74B3149683C263AEC309EAC53C26A; // 0x3048(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7E737B80400929DE6476CF95175665AB; // 0x3078(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E78C67194DF03A62E5DF2D8853434D17; // 0x3128(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD094D96469C3BF84F97688894D29AEE; // 0x31C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EDC35B144D591C6EAA71FF92D4738AAF; // 0x31F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BEF67146439CC2FE6D92B8935223C7A2; // 0x3218(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4981ABE24FEEA27A6C70BFA1E9A28E35; // 0x3240(0x0028)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_8A2EB9534165557BCF30CDA8DE1B5627; // 0x3268(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9A304A44D299E4274B7DF96D991013C; // 0x32B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FBE532814B14FA53EF32A09A6982991F; // 0x3328(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_90FA94924028607652818895E0A26C19; // 0x3358(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_BA3DEFD94AFC785304F9AAB47E580908; // 0x3420(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96FCFA6E401AC02297092F91BB813AE1; // 0x34E8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B4C29C94743BFC5B24B24A5E47C1960; // 0x3560(0x0078)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_1E69C13C4E71195AEF3019B625ADA256; // 0x35D8(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4B4B633641C90D16FD43D3BBBB723643; // 0x3678(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7F956EA9406E305E462AC2B71CB74E58; // 0x36C0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3878E6C46885706D512D2850D339858; // 0x3760(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F2BFD7534FA77869FD21F4B5ACC69671; // 0x3788(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2CED83B34B12C073606F5DB7249247B4; // 0x3850(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_63320E4C4F382CF8FA2814A9EA08CBE5; // 0x3930(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48B6A09346FFD3FA4F7ADC990F270DF0; // 0x3960(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7339998D46F9A594AEDD608A0FF75938; // 0x3988(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4E2CBA4B4557654F3E1711936241EE7E; // 0x3A00(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FD00DED340AF55BE89FE7CAA6335889F; // 0x3AC8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A31E2530401D3F7F800A6DBF0674423F; // 0x3AF8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EB88E11844C9DD6D6613B1B1854A36D2; // 0x3BA8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DBE050344BD37D762C77A86800CBD9A; // 0x3BD8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_D670811A41F88A190C85E8BD04980440;       // 0x3C88(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C2157D7E49D27307EDA5EBA6EF47168F; // 0x3CB8(0x0020)
	float                                              RunSpeedAlpha;                                             // 0x3CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Moving;                                                    // 0x3CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_StandState>                          E_Stand_State;                                             // 0x3CDD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AimState>                            E_Aim_State;                                               // 0x3CDE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L9QM[0x1];                                     // 0x3CDF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USQItemStaticInfo*                           ItemStaticInfo;                                            // 0x3CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USQWeaponStaticInfo*                         WeaponStaticInfo;                                          // 0x3CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                                 BS_3pStandJogType;                                         // 0x3CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               StandStopMove;                                             // 0x3CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               CrouchStopMove;                                            // 0x3D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                                 BS_3pCrouchWalkType;                                       // 0x3D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRunSpeed;                                               // 0x3D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxCrouchWalkSpeed;                                        // 0x3D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWalkSpeed;                                              // 0x3D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkSpeedAlpha;                                            // 0x3D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchWalkSpeedAlpha;                                      // 0x3D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3I6J[0x4];                                     // 0x3D24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               AO1D_TacStandYawSF;                                        // 0x3D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CachedActorRotation;                                       // 0x3D30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ActorIdleDeltaYaw;                                         // 0x3D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActorIdleDeltaYawFramePos;                                 // 0x3D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ARXY[0x4];                                     // 0x3D44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               AO1D_CrouchYawSF;                                          // 0x3D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BotCharacter_C*                          My_Bot;                                                    // 0x3D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Has_Item;                                                  // 0x3D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_At_Ease;                                                // 0x3D59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Standing;                                               // 0x3D5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Has_Target;                                                // 0x3D5B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    SpineRotation;                                             // 0x3D5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    FloorInclination;                                          // 0x3D68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    InvertedFloorInclination;                                  // 0x3D74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_BotCharacter.AnimBP_BotCharacter_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void UpdateSpineRotation();
	void UpdateGroundInclination();
	void UpdateAimOffset();
	void UpdateSpeedVars();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Set_Static_Info(class UClass* ItemStaticInfo);
	void ExecuteUbergraph_AnimBP_BotCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
