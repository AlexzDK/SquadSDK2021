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

// BlueprintGeneratedClass BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C
// 0x0024 (FullSize[0x04CC] - InheritedSize[0x04A8])
class ABP_GenericEquippableAmmobag_C : public ABP_GenericEquippableItem_Deployable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<float>                                      AmmoCounts;                                                // 0x04B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxAmmoCount;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PersistingAmmo;                                            // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingAmmoCount;                                         // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericEquippableAmmobag.BP_GenericEquippableAmmobag_C");
		return ptr;
	}



	int GetRearmMaxItemCount();
	int CalculateMissingRearmItems();
	void SortAmmoCounts();
	float CalculateRearmAmmoCost(int QuantityToRearm);
	float CalculateMaxAmmoCost(int MaxCount);
	float Rearm(int Quantity);
	struct FSQPersistedAmmoCount CreatePersistingAmmoCount();
	bool IsAmmoFull();
	void BP_ServerPlacedItem(class ASQDeployable* Deployable);
	void InitializeAmmoValues(const struct FSQInventoryData& ItemClass, bool bSpawnMaxAmmo, const struct FSQPersistedAmmoCount& PersistedAmmo);
	void ExecuteUbergraph_BP_GenericEquippableAmmobag(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
