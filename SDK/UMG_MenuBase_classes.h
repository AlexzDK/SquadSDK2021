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

// WidgetBlueprintGeneratedClass UMG_MenuBase.UMG_MenuBase_C
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UUMG_MenuBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bOpen;                                                     // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E0IY[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            Open_Close_Anim;                                           // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasOpenCloseOnce;                                         // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_446Q[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_SQMapCore_C*                              MapCore;                                                   // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Open_Close_Sound;                                          // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Team_Selected;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Started_Open;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Started_Close;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Finished_Open;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Finished_Close;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MenuBase.UMG_MenuBase_C");
		return ptr;
	}



	void Open_UI_Element(class USQCoreStateMapComponent* Map_Component, bool* Success);
	void Close_UI_Element(bool* Success);
	void Get_Voting_Widget(class UUserWidget** Voting_Widget);
	void Get_Role_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel);
	void Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel);
	void Get_Spawn_Point_Roots(class UGridPanel** SpawnBase, class UGridPanel** SpawnHab, class UGridPanel** SpawnRally);
	void On_Close();
	void On_Open();
	void Configure_Map_Elements(class USQCoreStateMapComponent* MapComponent, class USQMapMarkerManagerComponent* MarkerManager);
	void Is_Open(bool* Open, bool* Transitioning);
	void Key_Action();
	void Opened();
	void Closed();
	void ExecuteUbergraph_UMG_MenuBase(int EntryPoint);
	void Finished_Close__DelegateSignature();
	void Finished_Open__DelegateSignature();
	void Started_Close__DelegateSignature();
	void Started_Open__DelegateSignature();
	void Team_Selected__DelegateSignature(class ASQTeamState* Team);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
