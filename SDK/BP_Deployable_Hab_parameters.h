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

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.Additional Can Capture
struct ABP_Deployable_Hab_C_Additional_Can_Capture_Params
{
	bool                                               Can_Capture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.Update Commander Actions
struct ABP_Deployable_Hab_C_Update_Commander_Actions_Params
{
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.Update TC Protection
struct ABP_Deployable_Hab_C_Update_TC_Protection_Params
{
	bool                                               Gain_Protection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.OnRep_Spawnable
struct ABP_Deployable_Hab_C_OnRep_Spawnable_Params
{
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.BP_OnStateChange
struct ABP_Deployable_Hab_C_BP_OnStateChange_Params
{
	ESQBuildState                                      OldBuildState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.CustomEvent_1
struct ABP_Deployable_Hab_C_CustomEvent_1_Params
{
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.ReceiveBeginPlay
struct ABP_Deployable_Hab_C_ReceiveBeginPlay_Params
{
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.ReceiveDestroyed
struct ABP_Deployable_Hab_C_ReceiveDestroyed_Params
{
};

// Function BP_Deployable_Hab.BP_Deployable_Hab_C.ExecuteUbergraph_BP_Deployable_Hab
struct ABP_Deployable_Hab_C_ExecuteUbergraph_BP_Deployable_Hab_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
