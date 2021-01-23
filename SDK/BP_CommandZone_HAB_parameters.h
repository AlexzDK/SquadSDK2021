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

// Function BP_CommandZone_HAB.BP_CommandZone_HAB_C.Can Allow Actions
struct ABP_CommandZone_HAB_C_Can_Allow_Actions_Params
{
	bool                                               Allow_Actions;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CommandZone_HAB.BP_CommandZone_HAB_C.ReceiveDestroyed
struct ABP_CommandZone_HAB_C_ReceiveDestroyed_Params
{
};

// Function BP_CommandZone_HAB.BP_CommandZone_HAB_C.ExecuteUbergraph_BP_CommandZone_HAB
struct ABP_CommandZone_HAB_C_ExecuteUbergraph_BP_CommandZone_HAB_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
