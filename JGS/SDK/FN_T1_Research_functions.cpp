// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function T1_Research.T1_Research_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UT1_Research_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function T1_Research.T1_Research_C.PreConstruct");

	UT1_Research_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T1_Research.T1_Research_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT1_Research_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function T1_Research.T1_Research_C.Construct");

	UT1_Research_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T1_Research.T1_Research_C.ExecuteUbergraph_T1_Research
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UT1_Research_C::ExecuteUbergraph_T1_Research(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T1_Research.T1_Research_C.ExecuteUbergraph_T1_Research");

	UT1_Research_C_ExecuteUbergraph_T1_Research_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
