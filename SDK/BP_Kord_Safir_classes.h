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

// BlueprintGeneratedClass BP_Kord_Safir.BP_Kord_Safir_C
// 0x0008 (FullSize[0x0B28] - InheritedSize[0x0B20])
class ABP_Kord_Safir_C : public ABP_GenericVehicleOpenTurretWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Kord_Safir.BP_Kord_Safir_C");
		return ptr;
	}



	void BlueprintOnFire(const struct FVector& Origin);
	void ExecuteUbergraph_BP_Kord_Safir(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
