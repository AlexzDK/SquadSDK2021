// Name: Squad, Version: 13-01-2021

#include "../pch.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BotCharacter.BP_BotCharacter_C.GetTeamId
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_BotCharacter_C::GetTeamId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.GetTeamId");

	ABP_BotCharacter_C_GetTeamId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BotCharacter.BP_BotCharacter_C.Update Muzzle Transform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Update_Muzzle_Transform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Update Muzzle Transform");

	ABP_BotCharacter_C_Update_Muzzle_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Is Admin Camera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Check_Actor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Admin_Cam                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Is_Admin_Camera(class AActor* Check_Actor, bool* Admin_Cam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Is Admin Camera");

	ABP_BotCharacter_C_Is_Admin_Camera_Params params;
	params.Check_Actor = Check_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Admin_Cam != nullptr)
		*Admin_Cam = params.Admin_Cam;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Is Looking At Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Is_Looking_At_Target(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Is Looking At Target");

	ABP_BotCharacter_C_Is_Looking_At_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Turn on Spot Direction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Set_Turn_on_Spot_Direction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Turn on Spot Direction");

	ABP_BotCharacter_C_Set_Turn_on_Spot_Direction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Check LOS To Target
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Target_Visible                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Check_LOS_To_Target(class AActor* Target, bool* Target_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Check LOS To Target");

	ABP_BotCharacter_C_Check_LOS_To_Target_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target_Visible != nullptr)
		*Target_Visible = params.Target_Visible;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Clean Targets Array
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Clean_Targets_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Clean Targets Array");

	ABP_BotCharacter_C_Clean_Targets_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Line Formation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Line_Formation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Line Formation");

	ABP_BotCharacter_C_Line_Formation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Move Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Set_Move_Location(const struct FVector& World_Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Move Location");

	ABP_BotCharacter_C_Set_Move_Location_Params params;
	params.World_Location = World_Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Follow Leader
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Follow_Leader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Follow Leader");

	ABP_BotCharacter_C_Follow_Leader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Parse Marker to Behaviour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Parse_Marker_to_Behaviour(class AActor* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Parse Marker to Behaviour");

	ABP_BotCharacter_C_Parse_Marker_to_Behaviour_Params params;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Item Class
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::OnRep_Item_Class()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Item Class");

	ABP_BotCharacter_C_OnRep_Item_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Init Alert Icon
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Init_Alert_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Init Alert Icon");

	ABP_BotCharacter_C_Init_Alert_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Ammo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Set_Ammo(int Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Ammo");

	ABP_BotCharacter_C_Set_Ammo_Params params;
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Consume Ammo
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Consume_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Consume Ammo");

	ABP_BotCharacter_C_Consume_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Shots Fired Sound
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Shots_Fired_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Shots Fired Sound");

	ABP_BotCharacter_C_Shots_Fired_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Move State
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::OnRep_Move_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Move State");

	ABP_BotCharacter_C_OnRep_Move_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Alert State
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::OnRep_Alert_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Alert State");

	ABP_BotCharacter_C_OnRep_Alert_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Update Accuracy
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Update_Accuracy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Update Accuracy");

	ABP_BotCharacter_C_Update_Accuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Rotate Alert Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Rotate_Alert_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Rotate Alert Widget");

	ABP_BotCharacter_C_Rotate_Alert_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Validate Current Target
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Validate_Current_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Validate Current Target");

	ABP_BotCharacter_C_Validate_Current_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Is Actor Alive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  in_Actor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Is_Alive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Is_Actor_Alive(class AActor* in_Actor, bool* Is_Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Is Actor Alive");

	ABP_BotCharacter_C_Is_Actor_Alive_Params params;
	params.in_Actor = in_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Alive != nullptr)
		*Is_Alive = params.Is_Alive;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Firing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Fire                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Debug                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Set_Firing(bool Should_Fire, const struct FString& Reason, bool Debug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Firing");

	ABP_BotCharacter_C_Set_Firing_Params params;
	params.Should_Fire = Should_Fire;
	params.Reason = Reason;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Update Aiming Turn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Update_Aiming_Turn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Update Aiming Turn");

	ABP_BotCharacter_C_Update_Aiming_Turn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Evaluate Firing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Evaluate_Firing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Evaluate Firing");

	ABP_BotCharacter_C_Evaluate_Firing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Capsule Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Set_Capsule_Active(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Capsule Active");

	ABP_BotCharacter_C_Set_Capsule_Active_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Dead
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::OnRep_Dead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Dead");

	ABP_BotCharacter_C_OnRep_Dead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Find Closest Target
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Find_Closest_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Find Closest Target");

	ABP_BotCharacter_C_Find_Closest_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Investigate Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset_Behaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Investigate_Location(const struct FVector& Location, bool Reset_Behaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Investigate Location");

	ABP_BotCharacter_C_Investigate_Location_Params params;
	params.Location = Location;
	params.Reset_Behaviour = Reset_Behaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AimState>        Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_StandState>      Standing                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_MoveState>       Moving                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_BehaviourState>  alert                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset_Behaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Set_States(TEnumAsByte<E_AimState> Aiming, TEnumAsByte<E_StandState> Standing, TEnumAsByte<E_MoveState> Moving, TEnumAsByte<E_BehaviourState> alert, bool Reset_Behaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set States");

	ABP_BotCharacter_C_Set_States_Params params;
	params.Aiming = Aiming;
	params.Standing = Standing;
	params.Moving = Moving;
	params.alert = alert;
	params.Reset_Behaviour = Reset_Behaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Target
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::OnRep_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Target");

	ABP_BotCharacter_C_OnRep_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Reload Weapon
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Reload_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Reload Weapon");

	ABP_BotCharacter_C_Reload_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Setup Projectile Spawner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQWeapon*               Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Setup_Projectile_Spawner(class ASQWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Setup Projectile Spawner");

	ABP_BotCharacter_C_Setup_Projectile_Spawner_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Update Move Speed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Update_Move_Speed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Update Move Speed");

	ABP_BotCharacter_C_Update_Move_Speed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  New_Target                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Set_Current_Target(class AActor* New_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Current Target");

	ABP_BotCharacter_C_Set_Current_Target_Params params;
	params.New_Target = New_Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Init Behaviour
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Init_Behaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Init Behaviour");

	ABP_BotCharacter_C_Init_Behaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Refresh Squad
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Refresh_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Refresh Squad");

	ABP_BotCharacter_C_Refresh_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Init Anim BP
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Init_Anim_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Init Anim BP");

	ABP_BotCharacter_C_Init_Anim_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Change Equipped Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Change_Equipped_Item(class UClass* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Change Equipped Item");

	ABP_BotCharacter_C_Change_Equipped_Item_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.UserConstructionScript");

	ABP_BotCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.OnTeamChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PreviousTeam                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::OnTeamChange(int PreviousTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.OnTeamChange");

	ABP_BotCharacter_C_OnTeamChange_Params params;
	params.PreviousTeam = PreviousTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Notify Overlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Notify_Overlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Notify Overlap");

	ABP_BotCharacter_C_Notify_Overlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Notify End Overlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Notify_End_Overlap(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Notify End Overlap");

	ABP_BotCharacter_C_Notify_End_Overlap_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BotCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.ReceiveBeginPlay");

	ABP_BotCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.New Marker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Squad_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASQMapMarker*            Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::New_Marker(int Squad_ID, class ASQMapMarker* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.New Marker");

	ABP_BotCharacter_C_New_Marker_Params params;
	params.Squad_ID = Squad_ID;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Multicast Roger
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Multicast_Roger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Multicast Roger");

	ABP_BotCharacter_C_Multicast_Roger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health Zero__DelegateSignature
// (BlueprintEvent)
void ABP_BotCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health Zero__DelegateSignature");

	ABP_BotCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Multi Death
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Multi_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Multi Death");

	ABP_BotCharacter_C_Multi_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_BotCharacter_C::ReceivePointDamage(float damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.ReceivePointDamage");

	ABP_BotCharacter_C_ReceivePointDamage_Params params;
	params.damage = damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Unequip Last Item
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Unequip_Last_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Unequip Last Item");

	ABP_BotCharacter_C_Unequip_Last_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Equip New Item
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Equip_New_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Equip New Item");

	ABP_BotCharacter_C_Equip_New_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Play Base pose
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Play_Base_pose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Play Base pose");

	ABP_BotCharacter_C_Play_Base_pose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.ReceiveTick");

	ABP_BotCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.New Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::New_Target(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.New Target");

	ABP_BotCharacter_C_New_Target_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Lost Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::Lost_Target(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Lost Target");

	ABP_BotCharacter_C_Lost_Target_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Set Can Fire
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Set_Can_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Set Can Fire");

	ABP_BotCharacter_C_Set_Can_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Shots Fired
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Shots_Fired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Shots Fired");

	ABP_BotCharacter_C_Shots_Fired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.On Ammo Empty
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::On_Ammo_Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.On Ammo Empty");

	ABP_BotCharacter_C_On_Ammo_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Server Revive
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Server_Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Server Revive");

	ABP_BotCharacter_C_Server_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Multi Revive
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Multi_Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Multi Revive");

	ABP_BotCharacter_C_Multi_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Revive
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Revive");

	ABP_BotCharacter_C_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Die
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Die");

	ABP_BotCharacter_C_Die_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Debug Arrow Transform
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_BotCharacter_C::Debug_Arrow_Transform(const struct FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Debug Arrow Transform");

	ABP_BotCharacter_C_Debug_Arrow_Transform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Server Die
// (BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Server_Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Server Die");

	ABP_BotCharacter_C_Server_Die_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.ExecuteUbergraph_BP_BotCharacter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BotCharacter_C::ExecuteUbergraph_BP_BotCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.ExecuteUbergraph_BP_BotCharacter");

	ABP_BotCharacter_C_ExecuteUbergraph_BP_BotCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Revived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Revived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Revived__DelegateSignature");

	ABP_BotCharacter_C_Revived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BotCharacter.BP_BotCharacter_C.Died__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BotCharacter_C::Died__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BotCharacter.BP_BotCharacter_C.Died__DelegateSignature");

	ABP_BotCharacter_C_Died__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
