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

// BlueprintGeneratedClass UI_Events_Component.UI_Events_Component_C
// 0x0074 (FullSize[0x014C] - InheritedSize[0x00D8])
class UUI_Events_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                                  Mode_Data;                                                 // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      GameModeIntroAudio[0x28];                                  // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty UI_Events_Component.UI_Events_Component_C.GameModeIntroAudio
	class UClass*                                      Game_Mode_Intro_Widget_Class;                              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Mode_Intro_Widget;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGraphNodeBasedBleedComponent_C*             Bleed_Component;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQTeamState*                                Team_State;                                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Current_Sound;                                             // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      QueuedSounds[0x10];                                        // 0x0138(0x0010) UNKNOWN PROPERTY: ArrayProperty UI_Events_Component.UI_Events_Component_C.QueuedSounds
	float                                              Time_Between_Queued_Sounds;                                // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UI_Events_Component.UI_Events_Component_C");
		return ptr;
	}



	void Commander_Nomination_Sounds(int Team);
	void Commander_Changed_Sounds(class ASQPlayerState* Old, class ASQPlayerState* New, int Team);
	void Get_Mode_Intro_ID_from_Team_Short_Name(const struct FString& Short_Name, int* Index);
	void Get_Ticket_Bleed_Component();
	void Get_Intro_Audio(class ASQTeamState* Team);
	void Play_Flag_Capture_Animation(class USQCaptureZoneComponent* Capture_Zone_Component, unsigned char New_Owning_Team, unsigned char Last_Owning_Team);
	void Play_Destruction_Objective_Animation(unsigned char Owner_Team);
	void Match_is_Valid(bool* Valid);
	void Self_Team_is_Attacker(int ID, bool* Is_Attacker);
	void Init_Deployment(class UUMG_MenuBase_C* Deployment);
	void OnLoaded_C2C962FD46CDE84F4452D5B6F1C39B2F(class UObject* Loaded);
	void Team_Selection_Changed(class ASQTeamState* Team);
	void Add_Sound_to_Async_Queue();
	void ReceiveBeginPlay();
	void Play_Low_Ticket_Sounds();
	void Reset_Enemy_Ticket_Bleed_Event();
	void Reset_Player_Ticket_Low_Event();
	void Load_and_Play_Queued_Sound();
	void Delay_and_Load_Queued_Sound();
	void Init_Commander_Team_1();
	void Team_1_Cmdr_Changed_Event(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void Team_2_Cmdr_Changed_Event(class ASQPlayerState* OldCommander, class ASQPlayerState* NewCommander);
	void Team_1_Nomination_Started();
	void Team_2_Nomination_Started();
	void Init_Commander_Team_2();
	void ExecuteUbergraph_UI_Events_Component(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
