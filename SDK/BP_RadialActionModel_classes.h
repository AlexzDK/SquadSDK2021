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

// BlueprintGeneratedClass BP_RadialActionModel.BP_RadialActionModel_C
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UBP_RadialActionModel_C : public UBP_RadialItemModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Action;                                                    // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialActionModel.BP_RadialActionModel_C");
		return ptr;
	}



	void IsInVehicle(class AController* Controller, bool* IsInVehicle);
	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_RadialActionModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
