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

// BlueprintGeneratedClass AMMO_INS_Top.AMMO_INS_Top_C
// 0x0018 (FullSize[0x02B8] - InheritedSize[0x02A0])
class AAMMO_INS_Top_C : public ASQLastingEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                       RadialForce;                                               // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Piece3;                                                    // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AMMO_INS_Top.AMMO_INS_Top_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_AMMO_INS_Top(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
