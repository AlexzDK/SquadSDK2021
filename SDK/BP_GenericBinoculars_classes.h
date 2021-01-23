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

// BlueprintGeneratedClass BP_GenericBinoculars.BP_GenericBinoculars_C
// 0x0008 (FullSize[0x0700] - InheritedSize[0x06F8])
class ABP_GenericBinoculars_C : public ABP_Weapon2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericBinoculars.BP_GenericBinoculars_C");
		return ptr;
	}



	struct FVector Get_Marker_Location(bool* Valid);
	void BlueprintOnEquip();
	void BlueprintOnUnequip();
	void BlueprintOnZoom(bool bNewZoom);
	void ExecuteUbergraph_BP_GenericBinoculars(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
