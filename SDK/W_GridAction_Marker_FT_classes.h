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

// WidgetBlueprintGeneratedClass W_GridAction_Marker_FT.W_GridAction_Marker_FT_C
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UW_GridAction_Marker_FT_C : public UW_Grid_Action_Marker_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridAction_Marker_FT.W_GridAction_Marker_FT_C");
		return ptr;
	}



	void Get_Color(struct FLinearColor* Tint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
