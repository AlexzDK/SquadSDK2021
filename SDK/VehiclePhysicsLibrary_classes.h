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

// BlueprintGeneratedClass VehiclePhysicsLibrary.VehiclePhysicsLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVehiclePhysicsLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehiclePhysicsLibrary.VehiclePhysicsLibrary_C");
		return ptr;
	}



	void STATIC_ApplyPhysicsFeedback(class AActor* Target, float ForceToApply, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
