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

// BlueprintGeneratedClass BP_CommandActor_Drone.BP_CommandActor_Drone_C
// 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
class ABP_CommandActor_Drone_C : public ABP_CommandActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Health;                                                    // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SUUK[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Equippable_Drone_Item_Class;                               // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerController*                         SQ_PC;                                                     // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CommandActor_Drone.BP_CommandActor_Drone_C");
		return ptr;
	}



	void Add_Drone_to_Inventory();
	void ReceiveBeginPlay();
	void Client_Close_Menu();
	void Remove_From_Inventory();
	void ReceiveTick(float DeltaSeconds);
	void Server_End_Active_Duration();
	void ExecuteUbergraph_BP_CommandActor_Drone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
