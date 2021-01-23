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

// BlueprintGeneratedClass BTS_ValidatePatrolLocation.BTS_ValidatePatrolLocation_C
// 0x0084 (FullSize[0x011C] - InheritedSize[0x0098])
class UBTS_ValidatePatrolLocation_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Route;                                                     // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Waypoint_ID;                                               // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Move_Location;                                             // 0x00F0(0x0028) (Edit, BlueprintVisible)
	float                                              Radius;                                                    // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_ValidatePatrolLocation.BTS_ValidatePatrolLocation_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_ValidatePatrolLocation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
