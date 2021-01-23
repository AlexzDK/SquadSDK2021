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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C
// 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
class UBP_MarkerWidget_AmmoCrate_C : public USQMapIconWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MarkerImage;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_AmmoCrate.BP_MarkerWidget_AmmoCrate_C");
		return ptr;
	}



	struct FText GetText_1();
	void UpdateMarkerImage();
	void Construct();
	void ExecuteUbergraph_BP_MarkerWidget_AmmoCrate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
