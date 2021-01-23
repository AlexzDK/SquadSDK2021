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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C
// 0x0024 (FullSize[0x0274] - InheritedSize[0x0250])
class UBP_MarkerWidget_HAB_C : public USQMapIconWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      HABIcon;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SpawnBack_IMG;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SpawnFront_IMG;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              StateUpdateTime;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_HAB.BP_MarkerWidget_HAB_C");
		return ptr;
	}



	void UnselectSpawn();
	void GetSpawn(class ASQGameSpawn** Spawn);
	struct FSlateBrush UpdateSpawnBrush();
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void SelectSpawn(bool Commit);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void GetHAB(class ABP_Deployable_Hab_C** HAB);
	void IsSelected(bool* selected);
	void UpdateSelectSpawnVisibility();
	void Construct();
	void UpdateStateEvent();
	void ExecuteUbergraph_BP_MarkerWidget_HAB(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
