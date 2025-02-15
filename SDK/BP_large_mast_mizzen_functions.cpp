﻿// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_large_mast_mizzen_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.UserConstructionScript");

	ABP_large_mast_mizzen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_large_mast_mizzen_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.OnMastDescLoaded");

	ABP_large_mast_mizzen_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_large_mast_mizzen_C::ExecuteUbergraph_BP_large_mast_mizzen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_large_mast_mizzen.BP_large_mast_mizzen_C.ExecuteUbergraph_BP_large_mast_mizzen");

	ABP_large_mast_mizzen_C_ExecuteUbergraph_BP_large_mast_mizzen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_large_mast_mizzen_C::AfterRead()
{
	ABP_Mast_C::AfterRead();

	READ_PTR_FULL(shp_flag_pennant_01_b, UStaticMeshComponent);
	READ_PTR_FULL(shp_flag_pennant_pole_01_a, UStaticMeshComponent);
}

void ABP_large_mast_mizzen_C::BeforeDelete()
{
	ABP_Mast_C::BeforeDelete();

	DELE_PTR_FULL(shp_flag_pennant_01_b);
	DELE_PTR_FULL(shp_flag_pennant_pole_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
