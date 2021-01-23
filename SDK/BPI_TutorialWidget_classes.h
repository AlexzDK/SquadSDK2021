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

// BlueprintGeneratedClass BPI_TutorialWidget.BPI_TutorialWidget_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_TutorialWidget_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TutorialWidget.BPI_TutorialWidget_C");
		return ptr;
	}



	void Fade(bool Fade_In);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
