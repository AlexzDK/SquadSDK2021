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
// Parameters
//---------------------------------------------------------------------------

// Function BP_BotCharacter.BP_BotCharacter_C.GetTeamId
struct ABP_BotCharacter_C_GetTeamId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Update Muzzle Transform
struct ABP_BotCharacter_C_Update_Muzzle_Transform_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Is Admin Camera
struct ABP_BotCharacter_C_Is_Admin_Camera_Params
{
	class AActor*                                      Check_Actor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Admin_Cam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Is Looking At Target
struct ABP_BotCharacter_C_Is_Looking_At_Target_Params
{
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Turn on Spot Direction
struct ABP_BotCharacter_C_Set_Turn_on_Spot_Direction_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Check LOS To Target
struct ABP_BotCharacter_C_Check_LOS_To_Target_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Target_Visible;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Clean Targets Array
struct ABP_BotCharacter_C_Clean_Targets_Array_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Line Formation
struct ABP_BotCharacter_C_Line_Formation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Move Location
struct ABP_BotCharacter_C_Set_Move_Location_Params
{
	struct FVector                                     World_Location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Follow Leader
struct ABP_BotCharacter_C_Follow_Leader_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Parse Marker to Behaviour
struct ABP_BotCharacter_C_Parse_Marker_to_Behaviour_Params
{
	class AActor*                                      Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Item Class
struct ABP_BotCharacter_C_OnRep_Item_Class_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Init Alert Icon
struct ABP_BotCharacter_C_Init_Alert_Icon_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Ammo
struct ABP_BotCharacter_C_Set_Ammo_Params
{
	int                                                Ammo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Consume Ammo
struct ABP_BotCharacter_C_Consume_Ammo_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Shots Fired Sound
struct ABP_BotCharacter_C_Shots_Fired_Sound_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Move State
struct ABP_BotCharacter_C_OnRep_Move_State_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Alert State
struct ABP_BotCharacter_C_OnRep_Alert_State_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Update Accuracy
struct ABP_BotCharacter_C_Update_Accuracy_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Rotate Alert Widget
struct ABP_BotCharacter_C_Rotate_Alert_Widget_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Validate Current Target
struct ABP_BotCharacter_C_Validate_Current_Target_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Is Actor Alive
struct ABP_BotCharacter_C_Is_Actor_Alive_Params
{
	class AActor*                                      in_Actor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Alive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Firing
struct ABP_BotCharacter_C_Set_Firing_Params
{
	bool                                               Should_Fire;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Debug;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Update Aiming Turn
struct ABP_BotCharacter_C_Update_Aiming_Turn_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Evaluate Firing
struct ABP_BotCharacter_C_Evaluate_Firing_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Capsule Active
struct ABP_BotCharacter_C_Set_Capsule_Active_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Dead
struct ABP_BotCharacter_C_OnRep_Dead_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Find Closest Target
struct ABP_BotCharacter_C_Find_Closest_Target_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Investigate Location
struct ABP_BotCharacter_C_Investigate_Location_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Behaviour;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set States
struct ABP_BotCharacter_C_Set_States_Params
{
	TEnumAsByte<E_AimState>                            Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_StandState>                          Standing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MoveState>                           Moving;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BehaviourState>                      alert;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset_Behaviour;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.OnRep_Target
struct ABP_BotCharacter_C_OnRep_Target_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Reload Weapon
struct ABP_BotCharacter_C_Reload_Weapon_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Setup Projectile Spawner
struct ABP_BotCharacter_C_Setup_Projectile_Spawner_Params
{
	class ASQWeapon*                                   Weapon;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Update Move Speed
struct ABP_BotCharacter_C_Update_Move_Speed_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Current Target
struct ABP_BotCharacter_C_Set_Current_Target_Params
{
	class AActor*                                      New_Target;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Init Behaviour
struct ABP_BotCharacter_C_Init_Behaviour_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Refresh Squad
struct ABP_BotCharacter_C_Refresh_Squad_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Init Anim BP
struct ABP_BotCharacter_C_Init_Anim_BP_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Change Equipped Item
struct ABP_BotCharacter_C_Change_Equipped_Item_Params
{
	class UClass*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.UserConstructionScript
struct ABP_BotCharacter_C_UserConstructionScript_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.OnTeamChange
struct ABP_BotCharacter_C_OnTeamChange_Params
{
	int                                                PreviousTeam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Notify Overlap
struct ABP_BotCharacter_C_Notify_Overlap_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Notify End Overlap
struct ABP_BotCharacter_C_Notify_End_Overlap_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.ReceiveBeginPlay
struct ABP_BotCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.New Marker
struct ABP_BotCharacter_C_New_Marker_Params
{
	int                                                Squad_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQMapMarker*                                Marker;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Multicast Roger
struct ABP_BotCharacter_C_Multicast_Roger_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health Zero__DelegateSignature
struct ABP_BotCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Multi Death
struct ABP_BotCharacter_C_Multi_Death_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.ReceivePointDamage
struct ABP_BotCharacter_C_ReceivePointDamage_Params
{
	float                                              damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ShotFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Unequip Last Item
struct ABP_BotCharacter_C_Unequip_Last_Item_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Equip New Item
struct ABP_BotCharacter_C_Equip_New_Item_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Play Base pose
struct ABP_BotCharacter_C_Play_Base_pose_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.ReceiveTick
struct ABP_BotCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.New Target
struct ABP_BotCharacter_C_New_Target_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Lost Target
struct ABP_BotCharacter_C_Lost_Target_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Set Can Fire
struct ABP_BotCharacter_C_Set_Can_Fire_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Shots Fired
struct ABP_BotCharacter_C_Shots_Fired_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.On Ammo Empty
struct ABP_BotCharacter_C_On_Ammo_Empty_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Server Revive
struct ABP_BotCharacter_C_Server_Revive_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Multi Revive
struct ABP_BotCharacter_C_Multi_Revive_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Revive
struct ABP_BotCharacter_C_Revive_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Die
struct ABP_BotCharacter_C_Die_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Debug Arrow Transform
struct ABP_BotCharacter_C_Debug_Arrow_Transform_Params
{
	struct FTransform                                  NewTransform;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Server Die
struct ABP_BotCharacter_C_Server_Die_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.ExecuteUbergraph_BP_BotCharacter
struct ABP_BotCharacter_C_ExecuteUbergraph_BP_BotCharacter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BotCharacter.BP_BotCharacter_C.Revived__DelegateSignature
struct ABP_BotCharacter_C_Revived__DelegateSignature_Params
{
};

// Function BP_BotCharacter.BP_BotCharacter_C.Died__DelegateSignature
struct ABP_BotCharacter_C_Died__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
