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

// Function BP_AthenaGameState.BP_AthenaGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AthenaGameState_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AthenaGameState.BP_AthenaGameState_C.UserConstructionScript");

	ABP_AthenaGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AthenaGameState_C::AfterRead()
{
	AAthenaGameState::AfterRead();

	READ_PTR_FULL(WorldMarkerRouting, UWorldMarkerRoutingComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_AthenaGameState_C::BeforeDelete()
{
	AAthenaGameState::BeforeDelete();

	DELE_PTR_FULL(WorldMarkerRouting);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
