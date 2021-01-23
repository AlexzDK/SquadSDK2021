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

// WidgetBlueprintGeneratedClass W_Grid_Action_Director.W_Grid_Action_Director_C
// 0x000C (FullSize[0x0284] - InheritedSize[0x0278])
class UW_Grid_Action_Director_C : public UW_Grid_Action_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Interval_Index;                                            // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Action_Director.W_Grid_Action_Director_C");
		return ptr;
	}



	void Action_Button_Pressed();
	void ExecuteUbergraph_W_Grid_Action_Director(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
