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

// BlueprintGeneratedClass MTLB_2a72_Obliterate_RusGreen.MTLB_2a72_Obliterate_RusGreen_C
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class AMTLB_2a72_Obliterate_RusGreen_C : public AMTLB_2a72_Obliterate_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MTLB_2a72_Obliterate_RusGreen.MTLB_2a72_Obliterate_RusGreen_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnBeginDestroyedVehicle();
	void BndEvt__Turret_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_MTLB_2a72_Obliterate_RusGreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
