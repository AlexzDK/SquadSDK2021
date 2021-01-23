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

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UnselectSpawn
struct UBP_MarkerWidget_HAB_C_UnselectSpawn_Params
{
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.GetSpawn
struct UBP_MarkerWidget_HAB_C_GetSpawn_Params
{
	class ASQGameSpawn*                                Spawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateSpawnBrush
struct UBP_MarkerWidget_HAB_C_UpdateSpawnBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.OnMouseButtonDoubleClick
struct UBP_MarkerWidget_HAB_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.SelectSpawn
struct UBP_MarkerWidget_HAB_C_SelectSpawn_Params
{
	bool                                               Commit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.OnMouseButtonDown
struct UBP_MarkerWidget_HAB_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.GetHAB
struct UBP_MarkerWidget_HAB_C_GetHAB_Params
{
	class ABP_Deployable_Hab_C*                        HAB;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.IsSelected
struct UBP_MarkerWidget_HAB_C_IsSelected_Params
{
	bool                                               selected;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateSelectSpawnVisibility
struct UBP_MarkerWidget_HAB_C_UpdateSelectSpawnVisibility_Params
{
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.Construct
struct UBP_MarkerWidget_HAB_C_Construct_Params
{
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.UpdateStateEvent
struct UBP_MarkerWidget_HAB_C_UpdateStateEvent_Params
{
};

// Function BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C.ExecuteUbergraph_BP_MarkerWidget_HAB
struct UBP_MarkerWidget_HAB_C_ExecuteUbergraph_BP_MarkerWidget_HAB_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
