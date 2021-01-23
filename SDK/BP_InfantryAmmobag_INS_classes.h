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

// BlueprintGeneratedClass BP_InfantryAmmobag_INS.BP_InfantryAmmobag_INS_C
// 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
class ABP_InfantryAmmobag_INS_C : public ABP_GenericInfantryAmmoBag_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfantryAmmobag_INS.BP_InfantryAmmobag_INS_C");
		return ptr;
	}



	void RemovedFromPlayersPlacedList();
	void ExecuteUbergraph_BP_InfantryAmmobag_INS(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
