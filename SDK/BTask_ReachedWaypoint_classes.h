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

// BlueprintGeneratedClass BTask_ReachedWaypoint.BTask_ReachedWaypoint_C
// 0x00B0 (FullSize[0x0150] - InheritedSize[0x00A0])
class UBTask_ReachedWaypoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Route;                                                     // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Waypoint_ID;                                               // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Reverse_Patrol;                                            // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Wait_Time;                                                 // 0x0120(0x0028) (Edit, BlueprintVisible)
	class ABP_WaypointPath_C*                          Waypoint_Path;                                             // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTask_ReachedWaypoint.BTask_ReachedWaypoint_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTask_ReachedWaypoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
