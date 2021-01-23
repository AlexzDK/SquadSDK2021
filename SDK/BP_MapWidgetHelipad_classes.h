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

// WidgetBlueprintGeneratedClass BP_MapWidgetHelipad.BP_MapWidgetHelipad_C
// 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
class UBP_MapWidgetHelipad_C : public USQMapWidgetRepairStation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MarkerImage;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ScaleBox_1;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetHelipad.BP_MapWidgetHelipad_C");
		return ptr;
	}



	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetHelipad(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
