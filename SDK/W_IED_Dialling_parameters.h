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

// Function W_IED_Dialling.W_IED_Dialling_C.Set State Text
struct UW_IED_Dialling_C_Set_State_Text_Params
{
};

// Function W_IED_Dialling.W_IED_Dialling_C.PreConstruct
struct UW_IED_Dialling_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_IED_Dialling.W_IED_Dialling_C.Tick
struct UW_IED_Dialling_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_IED_Dialling.W_IED_Dialling_C.Update IED State
struct UW_IED_Dialling_C_Update_IED_State_Params
{
};

// Function W_IED_Dialling.W_IED_Dialling_C.Dial
struct UW_IED_Dialling_C_Dial_Params
{
};

// Function W_IED_Dialling.W_IED_Dialling_C.Set Detonator
struct UW_IED_Dialling_C_Set_Detonator_Params
{
	class ABP_Phone_Detonator_C*                       Detonator;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_IED_Dialling.W_IED_Dialling_C.Randomise Name
struct UW_IED_Dialling_C_Randomise_Name_Params
{
};

// Function W_IED_Dialling.W_IED_Dialling_C.Fail Dial
struct UW_IED_Dialling_C_Fail_Dial_Params
{
};

// Function W_IED_Dialling.W_IED_Dialling_C.ExecuteUbergraph_W_IED_Dialling
struct UW_IED_Dialling_C_ExecuteUbergraph_W_IED_Dialling_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
