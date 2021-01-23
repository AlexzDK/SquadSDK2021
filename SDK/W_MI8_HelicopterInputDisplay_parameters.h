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

// Function W_MI8_HelicopterInputDisplay.W_MI8_HelicopterInputDisplay_C.InitializeMeter
struct UW_MI8_HelicopterInputDisplay_C_InitializeMeter_Params
{
	TScriptInterface<class USQHelicopterInstruments>   ParentVehicle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MI8_HelicopterInputDisplay.W_MI8_HelicopterInputDisplay_C.Tick
struct UW_MI8_HelicopterInputDisplay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MI8_HelicopterInputDisplay.W_MI8_HelicopterInputDisplay_C.ExecuteUbergraph_W_MI8_HelicopterInputDisplay
struct UW_MI8_HelicopterInputDisplay_C_ExecuteUbergraph_W_MI8_HelicopterInputDisplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
