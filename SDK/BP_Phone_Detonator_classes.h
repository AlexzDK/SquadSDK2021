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

// BlueprintGeneratedClass BP_Phone_Detonator.BP_Phone_Detonator_C
// 0x0038 (FullSize[0x04B8] - InheritedSize[0x0480])
class ABP_Phone_Detonator_C : public ABP_GenericEquippableItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            PhoneScreen;                                               // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               BPPhoneDetonatorUsePlaying;                                // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0IQR[0x7];                                     // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_IED_Dialling_C*                           Phone_UI;                                                  // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQPlayerState*                              Owning_PlayerState;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  RingTone;                                                  // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                Detonate_Timer;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Phone_Detonator.BP_Phone_Detonator_C");
		return ptr;
	}



	void Call_Ringtone_on_IEDs();
	void Detonator_Valid(bool* Valid);
	void BPBeginUse();
	void ServerDetonate();
	void Get_Player_State();
	void BlueprintOnEquipped();
	void BlueprintOnUnequip();
	void Init_Detonator();
	void BlueprintOnEquip();
	void Timer_Detonate();
	void Server_Call_Ringtones();
	void ExecuteUbergraph_BP_Phone_Detonator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
