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

// Function BP_MiddleDeckDamageZone_01.BP_MiddleDeckDamageZone_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MiddleDeckDamageZone_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MiddleDeckDamageZone_01.BP_MiddleDeckDamageZone_01_C.UserConstructionScript");

	ABP_MiddleDeckDamageZone_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MiddleDeckDamageZone_01_C::AfterRead()
{
	ABP_BaseInternalDamageZone_C::AfterRead();

}

void ABP_MiddleDeckDamageZone_01_C::BeforeDelete()
{
	ABP_BaseInternalDamageZone_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
