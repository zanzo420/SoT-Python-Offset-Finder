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

// Function BP_ShipStorageBarrelTwo.BP_ShipStorageBarrelTwo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ShipStorageBarrelTwo_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShipStorageBarrelTwo.BP_ShipStorageBarrelTwo_C.UserConstructionScript");

	ABP_ShipStorageBarrelTwo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ShipStorageBarrelTwo_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
}

void ABP_ShipStorageBarrelTwo_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
