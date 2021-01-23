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

// Function W_Command_Line.W_Command_Line_C.Get Pixel Distance
struct UW_Command_Line_C_Get_Pixel_Distance_Params
{
	float                                              distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_Line.W_Command_Line_C.Get World Distance
struct UW_Command_Line_C_Get_World_Distance_Params
{
	float                                              World_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_Line.W_Command_Line_C.Tick
struct UW_Command_Line_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Command_Line.W_Command_Line_C.Construct
struct UW_Command_Line_C_Construct_Params
{
};

// Function W_Command_Line.W_Command_Line_C.ExecuteUbergraph_W_Command_Line
struct UW_Command_Line_C_ExecuteUbergraph_W_Command_Line_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
