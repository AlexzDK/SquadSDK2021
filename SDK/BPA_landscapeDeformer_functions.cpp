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

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SplineColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_landscapeDeformer_settings DeformerSpline                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_landscapeDeformer_C::SplineColor(const struct FS_landscapeDeformer_settings& DeformerSpline, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SplineColor");

	ABPA_landscapeDeformer_C_SplineColor_Params params;
	params.DeformerSpline = DeformerSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SetupVisualizationSplines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            At_Index                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_landscapeDeformer_C::SetupVisualizationSplines(int At_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SetupVisualizationSplines");

	ABPA_landscapeDeformer_C_SetupVisualizationSplines_Params params;
	params.At_Index = At_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SortSplinesByDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USplineComponent*> Splines                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// TArray<class USplineComponent*> Sorted_Splines                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// TArray<int>                    Sorted_Indices                 (Parm, OutParm, ZeroConstructor)
void ABPA_landscapeDeformer_C::SortSplinesByDistance(TArray<class USplineComponent*>* Splines, TArray<class USplineComponent*>* Sorted_Splines, TArray<int>* Sorted_Indices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SortSplinesByDistance");

	ABPA_landscapeDeformer_C_SortSplinesByDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Splines != nullptr)
		*Splines = params.Splines;
	if (Sorted_Splines != nullptr)
		*Sorted_Splines = params.Sorted_Splines;
	if (Sorted_Indices != nullptr)
		*Sorted_Indices = params.Sorted_Indices;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.CreateVisualizationSplines
// (Public, BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::CreateVisualizationSplines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.CreateVisualizationSplines");

	ABPA_landscapeDeformer_C_CreateVisualizationSplines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.DeformLandscape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::DeformLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.DeformLandscape");

	ABPA_landscapeDeformer_C_DeformLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SnapSplineToLandscape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::SnapSplineToLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SnapSplineToLandscape");

	ABPA_landscapeDeformer_C_SnapSplineToLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.CreateDeformationSplines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::CreateDeformationSplines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.CreateDeformationSplines");

	ABPA_landscapeDeformer_C_CreateDeformationSplines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SearchForLandscape
// (Public, BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::SearchForLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SearchForLandscape");

	ABPA_landscapeDeformer_C_SearchForLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.UserConstructionScript");

	ABPA_landscapeDeformer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.3 - Deform Landscape
// (BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::_3___Deform_Landscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.3 - Deform Landscape");

	ABPA_landscapeDeformer_C__3___Deform_Landscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.1 - Snap Spline To Landscape
// (BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::_1___Snap_Spline_To_Landscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.1 - Snap Spline To Landscape");

	ABPA_landscapeDeformer_C__1___Snap_Spline_To_Landscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.Generate Seed
// (BlueprintCallable, BlueprintEvent)
void ABPA_landscapeDeformer_C::Generate_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.Generate Seed");

	ABPA_landscapeDeformer_C_Generate_Seed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.ExecuteUbergraph_BPA_landscapeDeformer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABPA_landscapeDeformer_C::ExecuteUbergraph_BPA_landscapeDeformer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.ExecuteUbergraph_BPA_landscapeDeformer");

	ABPA_landscapeDeformer_C_ExecuteUbergraph_BPA_landscapeDeformer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
