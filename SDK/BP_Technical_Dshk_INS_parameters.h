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

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.Update Damaged Wheel Visual
struct ABP_Technical_Dshk_INS_C_Update_Damaged_Wheel_Visual_Params
{
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Destroyed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USQVehicleWheel*                             Wheel;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Do_Effects;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.UserConstructionScript
struct ABP_Technical_Dshk_INS_C_UserConstructionScript_Params
{
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2
struct ABP_Technical_Dshk_INS_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1
struct ABP_Technical_Dshk_INS_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.InpActEvt_ToggleView_K2Node_InputActionEvent_1
struct ABP_Technical_Dshk_INS_C_InpActEvt_ToggleView_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16
struct ABP_Technical_Dshk_INS_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_16_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18
struct ABP_Technical_Dshk_INS_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_18_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.ReceiveBeginPlay
struct ABP_Technical_Dshk_INS_C_ReceiveBeginPlay_Params
{
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.DrivetrainComponentDestroyed
struct ABP_Technical_Dshk_INS_C_DrivetrainComponentDestroyed_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.DrivetrainComponentRepaired
struct ABP_Technical_Dshk_INS_C_DrivetrainComponentRepaired_Params
{
	class USQDriveTrainComponent*                      DriveTrainComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Technical_Dshk_INS.BP_Technical_Dshk_INS_C.ExecuteUbergraph_BP_Technical_Dshk_INS
struct ABP_Technical_Dshk_INS_C_ExecuteUbergraph_BP_Technical_Dshk_INS_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
