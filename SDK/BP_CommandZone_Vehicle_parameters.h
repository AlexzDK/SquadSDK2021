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

// Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.Can Allow Actions
struct ABP_CommandZone_Vehicle_C_Can_Allow_Actions_Params
{
	bool                                               Allow_Actions;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.ReceiveDestroyed
struct ABP_CommandZone_Vehicle_C_ReceiveDestroyed_Params
{
};

// Function BP_CommandZone_Vehicle.BP_CommandZone_Vehicle_C.ExecuteUbergraph_BP_CommandZone_Vehicle
struct ABP_CommandZone_Vehicle_C_ExecuteUbergraph_BP_CommandZone_Vehicle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
