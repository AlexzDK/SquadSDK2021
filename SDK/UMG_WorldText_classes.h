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

// WidgetBlueprintGeneratedClass UMG_WorldText.UMG_WorldText_C
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class UUMG_WorldText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                            InvalidationBox_1;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TB_MainText;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Custom_Text;                                               // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Color;                                                     // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_WorldText.UMG_WorldText_C");
		return ptr;
	}



	struct FSlateColor Get_TB_Text_ColorAndOpacity_1();
	struct FText GetText_1();
	void Update();
	void ExecuteUbergraph_UMG_WorldText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
