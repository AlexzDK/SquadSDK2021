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

// Function UMG_WorldText.UMG_WorldText_C.Get_TB_Text_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UUMG_WorldText_C::Get_TB_Text_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_WorldText.UMG_WorldText_C.Get_TB_Text_ColorAndOpacity_1");

	UUMG_WorldText_C_Get_TB_Text_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_WorldText.UMG_WorldText_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUMG_WorldText_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_WorldText.UMG_WorldText_C.GetText_1");

	UUMG_WorldText_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UMG_WorldText.UMG_WorldText_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUMG_WorldText_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_WorldText.UMG_WorldText_C.Update");

	UUMG_WorldText_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_WorldText.UMG_WorldText_C.ExecuteUbergraph_UMG_WorldText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_WorldText_C::ExecuteUbergraph_UMG_WorldText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_WorldText.UMG_WorldText_C.ExecuteUbergraph_UMG_WorldText");

	UUMG_WorldText_C_ExecuteUbergraph_UMG_WorldText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
