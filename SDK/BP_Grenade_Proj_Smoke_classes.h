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

// BlueprintGeneratedClass BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C
// 0x0047 (FullSize[0x05C0] - InheritedSize[0x0579])
class ABP_Grenade_Proj_Smoke_C : public ABP_Grenade_Proj_C
{
public:
	unsigned char                                      UnknownData_2GRP[0x7];                                     // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SmokeCloud;                                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SmokeSound;                                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeDelay;                                                // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SmokeColor;                                                // 0x059C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DAIQ[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ClientChangeColor;                                         // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Proj_Smoke.BP_Grenade_Proj_Smoke_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Grenade_Proj_Smoke(int EntryPoint);
	void ClientChangeColor__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
