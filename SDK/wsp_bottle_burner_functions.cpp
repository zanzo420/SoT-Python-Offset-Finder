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

// Function wsp_bottle_burner.wsp_bottle_burner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_bottle_burner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_bottle_burner.wsp_bottle_burner_C.UserConstructionScript");

	Awsp_bottle_burner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_bottle_burner_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awsp_bottle_burner_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
