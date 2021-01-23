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

// BlueprintGeneratedClass BP_BotCharacter.BP_BotCharacter_C
// 0x0220 (FullSize[0x0878] - InheritedSize[0x0658])
class ABP_BotCharacter_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_UGKM[0x8];                                     // 0x0658(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQProjectileSpawnerComponent*               SQProjectileSpawner;                                       // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow1;                                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             EyesPivot;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      EquippedItem;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            AlertWidget;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealthComponent_C*                          HealthComponent;                                           // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimBP_BotCharacter_C*                      BotAnim;                                                   // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Item_Class;                                                // 0x06B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>                AttachmentMeshes3P;                                        // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UBehaviorTree*                               Behaviour_Tree;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Team;                                                      // 0x06D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                Squad;                                                     // 0x06DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                Num_SquadMates;                                            // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                SquadMate_ID;                                              // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASQSquadState*                               My_Squad;                                                  // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                      Leader_PC;                                                 // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                        Blackboard;                                                // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Affirm_Local;                                              // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Affirm_Radio;                                              // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WaypointPath_C*                          Route;                                                     // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Run_Speed;                                                 // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Walk_Speed;                                                // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Crouch_Speed;                                              // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MoveState>                           Move_State;                                                // 0x0724(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_StandState>                          Stand_State;                                               // 0x0725(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AimState>                            Aim_State;                                                 // 0x0726(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XME6[0x1];                                     // 0x0727(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Current_Target;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BehaviourState>                      Behaviour_State;                                           // 0x0730(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6Z73[0x7];                                     // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              Targets;                                                   // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Attack_delay_after_finding_enemy;                          // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Required_Firing_Angle;                                     // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Aiming_Turn_Speed;                                         // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7GFD[0x4];                                     // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                Delay_fire_timer;                                          // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               Can_Fire;                                                  // 0x0760(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Item_is_Weapon;                                            // 0x0761(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_33UP[0x6];                                     // 0x0762(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_Alert_C*                                  W_Alert;                                                   // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CachedActorRotation;                                       // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ActorIdleDeltaYaw;                                         // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Current_MOA;                                               // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Engagement_Range;                                          // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Hearing_Distance;                                          // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7EPY[0x4];                                     // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Died;                                                      // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Attack_Standing;                                           // 0x07A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PYL9[0x7];                                     // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAI_BotCharacter_C*                          My_Ai_Controller;                                          // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Random_Crouch_Attack;                                      // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Dead;                                                      // 0x07B1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_1BG5[0x6];                                     // 0x07B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USQWeaponStaticInfo*                         Weapon_Info;                                               // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Ammo;                                                      // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max_Ammo;                                                  // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Alert_Icon;                                            // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Has_Item;                                                  // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Update_Forward_Facing_Direction;                           // 0x07CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6OV6[0x1];                                     // 0x07CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Custom_Facing_Location;                                    // 0x07CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                Follow_Timer;                                              // 0x07D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              Line_Formation_Length;                                     // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KETO[0x4];                                     // 0x07E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Last_Marker;                                               // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Turn_on_Spot_Max_Angle;                                    // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Turn_on_Spot_Delay;                                        // 0x07F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Turn_on_Spot_Default_Forward;                              // 0x07FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weapon_MOA;                                                // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              At_Ease_MOA;                                               // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MOA_Increase_Speed_Far;                                    // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MOA_Increase_Speed_Close;                                  // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Projectile_Class[0x28];                                    // 0x0818(0x0028) UNKNOWN PROPERTY: SoftClassProperty BP_BotCharacter.BP_BotCharacter_C.Projectile Class
	float                                              Bullet_Velocity;                                           // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              damage;                                                    // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time_Between_Shots;                                        // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_On_Fired_Sound;                                        // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LGIY[0x3];                                     // 0x084D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Revived;                                                   // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                                  Patrol;                                                    // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  NewVar_2;                                                  // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  AttackVO;                                                  // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BotCharacter.BP_BotCharacter_C");
		return ptr;
	}



	int GetTeamId();
	void Update_Muzzle_Transform();
	void Is_Admin_Camera(class AActor* Check_Actor, bool* Admin_Cam);
	void Is_Looking_At_Target(bool* Valid);
	void Set_Turn_on_Spot_Direction();
	void Check_LOS_To_Target(class AActor* Target, bool* Target_Visible);
	void Clean_Targets_Array();
	void Line_Formation(const struct FVector& Location);
	void Set_Move_Location(const struct FVector& World_Location, float Radius);
	void Follow_Leader();
	void Parse_Marker_to_Behaviour(class AActor* Marker);
	void OnRep_Item_Class();
	void Init_Alert_Icon();
	void Set_Ammo(int Ammo);
	void Consume_Ammo();
	void Shots_Fired_Sound();
	void OnRep_Move_State();
	void OnRep_Alert_State();
	void Update_Accuracy();
	void Rotate_Alert_Widget();
	void Validate_Current_Target();
	void Is_Actor_Alive(class AActor* in_Actor, bool* Is_Alive);
	void Set_Firing(bool Should_Fire, const struct FString& Reason, bool Debug);
	void Update_Aiming_Turn();
	void Evaluate_Firing();
	void Set_Capsule_Active(bool Active);
	void OnRep_Dead();
	void Find_Closest_Target();
	void Investigate_Location(const struct FVector& Location, bool Reset_Behaviour);
	void Set_States(TEnumAsByte<E_AimState> Aiming, TEnumAsByte<E_StandState> Standing, TEnumAsByte<E_MoveState> Moving, TEnumAsByte<E_BehaviourState> alert, bool Reset_Behaviour);
	void OnRep_Target();
	void Reload_Weapon();
	void Setup_Projectile_Spawner(class ASQWeapon* Weapon);
	void Update_Move_Speed();
	void Set_Current_Target(class AActor* New_Target);
	void Init_Behaviour();
	void Refresh_Squad();
	void Init_Anim_BP();
	void Change_Equipped_Item(class UClass* Target);
	void UserConstructionScript();
	void OnTeamChange(int PreviousTeam);
	void Notify_Overlap(class AActor* Actor);
	void Notify_End_Overlap(class AActor* Actor);
	void ReceiveBeginPlay();
	void New_Marker(int Squad_ID, class ASQMapMarker* Marker);
	void Multicast_Roger();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_Health_Zero__DelegateSignature();
	void Multi_Death();
	void ReceivePointDamage(float damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void Unequip_Last_Item();
	void Equip_New_Item();
	void Play_Base_pose();
	void ReceiveTick(float DeltaSeconds);
	void New_Target(class AActor* Actor);
	void Lost_Target(class AActor* Actor);
	void Set_Can_Fire();
	void Shots_Fired();
	void On_Ammo_Empty();
	void Server_Revive();
	void Multi_Revive();
	void Revive();
	void Die();
	void Debug_Arrow_Transform(const struct FTransform& NewTransform);
	void Server_Die();
	void ExecuteUbergraph_BP_BotCharacter(int EntryPoint);
	void Revived__DelegateSignature();
	void Died__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
