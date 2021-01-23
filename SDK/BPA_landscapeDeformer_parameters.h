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

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SplineColor
struct ABPA_landscapeDeformer_C_SplineColor_Params
{
	struct FS_landscapeDeformer_settings               DeformerSpline;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SetupVisualizationSplines
struct ABPA_landscapeDeformer_C_SetupVisualizationSplines_Params
{
	int                                                At_Index;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SortSplinesByDistance
struct ABPA_landscapeDeformer_C_SortSplinesByDistance_Params
{
	TArray<class USplineComponent*>                    Splines;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<class USplineComponent*>                    Sorted_Splines;                                            // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	TArray<int>                                        Sorted_Indices;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.CreateVisualizationSplines
struct ABPA_landscapeDeformer_C_CreateVisualizationSplines_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.DeformLandscape
struct ABPA_landscapeDeformer_C_DeformLandscape_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SnapSplineToLandscape
struct ABPA_landscapeDeformer_C_SnapSplineToLandscape_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.CreateDeformationSplines
struct ABPA_landscapeDeformer_C_CreateDeformationSplines_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.SearchForLandscape
struct ABPA_landscapeDeformer_C_SearchForLandscape_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.UserConstructionScript
struct ABPA_landscapeDeformer_C_UserConstructionScript_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.3 - Deform Landscape
struct ABPA_landscapeDeformer_C__3___Deform_Landscape_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.1 - Snap Spline To Landscape
struct ABPA_landscapeDeformer_C__1___Snap_Spline_To_Landscape_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.Generate Seed
struct ABPA_landscapeDeformer_C_Generate_Seed_Params
{
};

// Function BPA_landscapeDeformer.BPA_landscapeDeformer_C.ExecuteUbergraph_BPA_landscapeDeformer
struct ABPA_landscapeDeformer_C_ExecuteUbergraph_BPA_landscapeDeformer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
