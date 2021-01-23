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

// Function W_Grid_AcceptDeny.W_Grid_AcceptDeny_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_AcceptDeny_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_AcceptDeny.W_Grid_AcceptDeny_C.Tick");

	UW_Grid_AcceptDeny_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_Grid_AcceptDeny.W_Grid_AcceptDeny_C.ExecuteUbergraph_W_Grid_AcceptDeny
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Grid_AcceptDeny_C::ExecuteUbergraph_W_Grid_AcceptDeny(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Grid_AcceptDeny.W_Grid_AcceptDeny_C.ExecuteUbergraph_W_Grid_AcceptDeny");

	UW_Grid_AcceptDeny_C_ExecuteUbergraph_W_Grid_AcceptDeny_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
