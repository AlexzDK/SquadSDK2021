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

// WidgetBlueprintGeneratedClass DrawChatWidget.DrawChatWidget_C
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class UDrawChatWidget_C : public USQDrawChatWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DrawChatWidget.DrawChatWidget_C");
		return ptr;
	}



	void OnPaint(struct FPaintContext* Context);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
