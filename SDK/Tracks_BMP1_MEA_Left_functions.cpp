// Name: Squad, Version: 13-01-2021

#include "../pch.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Tracks_BMP1_MEA_Left.Tracks_BMP1_MEA_Left_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATracks_BMP1_MEA_Left_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracks_BMP1_MEA_Left.Tracks_BMP1_MEA_Left_C.ReceiveBeginPlay");

	ATracks_BMP1_MEA_Left_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracks_BMP1_MEA_Left.Tracks_BMP1_MEA_Left_C.ExecuteUbergraph_Tracks_BMP1_MEA_Left
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATracks_BMP1_MEA_Left_C::ExecuteUbergraph_Tracks_BMP1_MEA_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracks_BMP1_MEA_Left.Tracks_BMP1_MEA_Left_C.ExecuteUbergraph_Tracks_BMP1_MEA_Left");

	ATracks_BMP1_MEA_Left_C_ExecuteUbergraph_Tracks_BMP1_MEA_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
