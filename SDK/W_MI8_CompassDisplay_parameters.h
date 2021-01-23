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

// Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.Tick
struct UW_MI8_CompassDisplay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.InitializeCompass
struct UW_MI8_CompassDisplay_C_InitializeCompass_Params
{
	class AActor*                                      OwningVehicle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MI8_CompassDisplay.W_MI8_CompassDisplay_C.ExecuteUbergraph_W_MI8_CompassDisplay
struct UW_MI8_CompassDisplay_C_ExecuteUbergraph_W_MI8_CompassDisplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
