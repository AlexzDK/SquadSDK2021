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

// BlueprintGeneratedClass BTask_SetWaypointLocation.BTask_SetWaypointLocation_C
// 0x00B0 (FullSize[0x0150] - InheritedSize[0x00A0])
class UBTask_SetWaypointLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Move_Location;                                             // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Route;                                                     // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Waypoint_ID;                                               // 0x00F8(0x0028) (Edit, BlueprintVisible)
	float                                              Radius;                                                    // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RBHR[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      Wait_Time;                                                 // 0x0128(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTask_SetWaypointLocation.BTask_SetWaypointLocation_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTask_SetWaypointLocation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
