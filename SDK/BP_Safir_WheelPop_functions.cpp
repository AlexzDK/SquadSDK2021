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

// Function BP_Safir_WheelPop.BP_Safir_WheelPop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Safir_WheelPop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir_WheelPop.BP_Safir_WheelPop_C.ReceiveBeginPlay");

	ABP_Safir_WheelPop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Safir_WheelPop.BP_Safir_WheelPop_C.ExecuteUbergraph_BP_Safir_WheelPop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Safir_WheelPop_C::ExecuteUbergraph_BP_Safir_WheelPop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Safir_WheelPop.BP_Safir_WheelPop_C.ExecuteUbergraph_BP_Safir_WheelPop");

	ABP_Safir_WheelPop_C_ExecuteUbergraph_BP_Safir_WheelPop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
