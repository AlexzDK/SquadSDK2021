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

// WidgetBlueprintGeneratedClass W_GridButton_SquadOrders.W_GridButton_SquadOrders_C
// 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
class UW_GridButton_SquadOrders_C : public UW_GridButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              FT_Action_List;                                            // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridButton_SquadOrders.W_GridButton_SquadOrders_C");
		return ptr;
	}



	void Get_Color(struct FLinearColor* Icon_Color);
	void Get_Text(struct FText* Text);
	void Custom_Actions();
	void Update_Appearance();
	void ExecuteUbergraph_W_GridButton_SquadOrders(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
