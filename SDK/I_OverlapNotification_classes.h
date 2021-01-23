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

// BlueprintGeneratedClass I_OverlapNotification.I_OverlapNotification_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_OverlapNotification_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass I_OverlapNotification.I_OverlapNotification_C");
		return ptr;
	}



	void Notify_End_Overlap(class AActor* Actor);
	void Notify_Overlap(class AActor* Actor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
