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

// WidgetBlueprintGeneratedClass W_GridHeader_Spotted_FTL.W_GridHeader_Spotted_FTL_C
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UW_GridHeader_Spotted_FTL_C : public UW_GridHeader_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridHeader_Spotted_FTL.W_GridHeader_Spotted_FTL_C");
		return ptr;
	}



	void Get_Fireteam_ID(int* ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
