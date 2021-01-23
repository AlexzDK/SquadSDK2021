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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPA_landscapeDeformer.BPA_landscapeDeformer_C
// 0x0070 (FullSize[0x02B8] - InheritedSize[0x0248])
class ABPA_landscapeDeformer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                            Spline;                                                    // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALandscape*                                  Landscape;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALandscape*                                  LandscapeBlank;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               _2___Reconstruct;                                          // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P1BA[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USplineComponent*>                    Deformer_Splines;                                          // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USplineComponent*>                    Visualization_Splines;                                     // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	struct FRandomStream                               Stream;                                                    // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	int                                                Seed;                                                      // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Snap_Location;                                             // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Snap_Rotation;                                             // 0x02A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Show_Visualization_Splines;                                // 0x02A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HR3F[0x1];                                     // 0x02A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_landscapeDeformer_settings>       Deformer_Spline_Settings;                                  // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPA_landscapeDeformer.BPA_landscapeDeformer_C");
		return ptr;
	}



	void SplineColor(const struct FS_landscapeDeformer_settings& DeformerSpline, struct FLinearColor* Color);
	void SetupVisualizationSplines(int At_Index);
	void SortSplinesByDistance(TArray<class USplineComponent*>* Splines, TArray<class USplineComponent*>* Sorted_Splines, TArray<int>* Sorted_Indices);
	void CreateVisualizationSplines();
	void DeformLandscape();
	void SnapSplineToLandscape();
	void CreateDeformationSplines();
	void SearchForLandscape();
	void UserConstructionScript();
	void _3___Deform_Landscape();
	void _1___Snap_Spline_To_Landscape();
	void Generate_Seed();
	void ExecuteUbergraph_BPA_landscapeDeformer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
