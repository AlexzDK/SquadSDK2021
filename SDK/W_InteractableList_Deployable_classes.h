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

// WidgetBlueprintGeneratedClass W_InteractableList_Deployable.W_InteractableList_Deployable_C
// 0x0177 (FullSize[0x0420] - InheritedSize[0x02A9])
class UW_InteractableList_Deployable_C : public UW_InteractableWidgetList_Master_C
{
public:
	unsigned char                                      UnknownData_DHXE[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Fade;                                                      // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                InteractList;                                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ObjectName;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSQUsableData                               Need_Shovel_Data;                                          // 0x02D0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               How_to_build_Data;                                         // 0x0310(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               Default_Data;                                              // 0x0350(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               No_Shovel_Data;                                            // 0x0390(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSQUsableData                               Unbuild_Only_Data;                                         // 0x03D0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_Using_Native_Data;                                      // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Last_Full_Health;                                          // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Last_Shovel_Equipped;                                      // 0x0412(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Last_Owns_Shovel;                                          // 0x0413(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Last_Is_Built;                                             // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7VN0[0x3];                                     // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Last_Interact_Actor;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableList_Deployable.W_InteractableList_Deployable_C");
		return ptr;
	}



	bool Same_Team();
	void Get_Fade_Animation(class UWidgetAnimation** Fade_Animation);
	void Get_Interact_List(class UVerticalBox** InteractList);
	void Create_Contextual_Data(bool* Force_Update);
	void Is_Deployable_Built(bool* Is_Built, bool* Full_Health, bool* bCanUnbuild);
	void Soldier_Has_Shovel(bool* Shovel_Equipped, bool* Owns_Shovel);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Set_Custom_Data();
	void ExecuteUbergraph_W_InteractableList_Deployable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
