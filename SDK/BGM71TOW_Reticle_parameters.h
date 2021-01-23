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

// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.RangeFinder
struct UBGM71TOW_Reticle_C_RangeFinder_Params
{
};

// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.Construct
struct UBGM71TOW_Reticle_C_Construct_Params
{
};

// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.Tick
struct UBGM71TOW_Reticle_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BGM71TOW_Reticle.BGM71TOW_Reticle_C.ExecuteUbergraph_BGM71TOW_Reticle
struct UBGM71TOW_Reticle_C_ExecuteUbergraph_BGM71TOW_Reticle_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
