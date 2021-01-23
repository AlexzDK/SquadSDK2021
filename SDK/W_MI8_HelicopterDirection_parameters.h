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

// Function W_MI8_HelicopterDirection.W_MI8_HelicopterDirection_C.Tick
struct UW_MI8_HelicopterDirection_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MI8_HelicopterDirection.W_MI8_HelicopterDirection_C.InitializeScreen
struct UW_MI8_HelicopterDirection_C_InitializeScreen_Params
{
	TScriptInterface<class USQHelicopterInstruments>   Vehicle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MI8_HelicopterDirection.W_MI8_HelicopterDirection_C.ExecuteUbergraph_W_MI8_HelicopterDirection
struct UW_MI8_HelicopterDirection_C_ExecuteUbergraph_W_MI8_HelicopterDirection_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
