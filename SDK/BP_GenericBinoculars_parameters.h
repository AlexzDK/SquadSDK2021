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

// Function BP_GenericBinoculars.BP_GenericBinoculars_C.Get Marker Location
struct ABP_GenericBinoculars_C_Get_Marker_Location_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnEquip
struct ABP_GenericBinoculars_C_BlueprintOnEquip_Params
{
};

// Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnUnequip
struct ABP_GenericBinoculars_C_BlueprintOnUnequip_Params
{
};

// Function BP_GenericBinoculars.BP_GenericBinoculars_C.BlueprintOnZoom
struct ABP_GenericBinoculars_C_BlueprintOnZoom_Params
{
	bool                                               bNewZoom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GenericBinoculars.BP_GenericBinoculars_C.ExecuteUbergraph_BP_GenericBinoculars
struct ABP_GenericBinoculars_C_ExecuteUbergraph_BP_GenericBinoculars_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
