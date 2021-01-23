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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.IsCurrentWeaponInputEnabled
struct ABP_Technical_Turret_UB32_C_IsCurrentWeaponInputEnabled_Params
{
	bool                                               bInputEnabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.IsSoldierAlive
struct ABP_Technical_Turret_UB32_C_IsSoldierAlive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetADSCameraLocationComponent
struct ABP_Technical_Turret_UB32_C_GetADSCameraLocationComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetDefaultCameraLocationComponent
struct ABP_Technical_Turret_UB32_C_GetDefaultCameraLocationComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetSoldierAttachComponent
struct ABP_Technical_Turret_UB32_C_GetSoldierAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetWeaponAttachComponent
struct ABP_Technical_Turret_UB32_C_GetWeaponAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.GetMasterPoseComponent
struct ABP_Technical_Turret_UB32_C_GetMasterPoseComponent_Params
{
	class USkinnedMeshComponent*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.Get1PAttachComponent
struct ABP_Technical_Turret_UB32_C_Get1PAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.Get3PAttachComponent
struct ABP_Technical_Turret_UB32_C_Get3PAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.UserConstructionScript
struct ABP_Technical_Turret_UB32_C_UserConstructionScript_Params
{
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpActEvt_Fire_K2Node_InputActionEvent_2
struct ABP_Technical_Turret_UB32_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpActEvt_Fire_K2Node_InputActionEvent_1
struct ABP_Technical_Turret_UB32_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40
struct ABP_Technical_Turret_UB32_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_40_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_43
struct ABP_Technical_Turret_UB32_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_43_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58
struct ABP_Technical_Turret_UB32_C_InpAxisEvt_VehicleMoveForward_K2Node_InputAxisEvent_58_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62
struct ABP_Technical_Turret_UB32_C_InpAxisEvt_VehicleMoveRight_K2Node_InputAxisEvent_62_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ReceivePossessed
struct ABP_Technical_Turret_UB32_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ReceiveUnpossessed
struct ABP_Technical_Turret_UB32_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Turret_UB32.BP_Technical_Turret_UB32_C.ExecuteUbergraph_BP_Technical_Turret_UB32
struct ABP_Technical_Turret_UB32_C_ExecuteUbergraph_BP_Technical_Turret_UB32_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
