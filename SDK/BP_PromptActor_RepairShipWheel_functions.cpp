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

// Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_RepairShipWheel_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.UserConstructionScript");

	ABP_PromptActor_RepairShipWheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_PromptActor_RepairShipWheel_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.ReceiveBeginPlay");

	ABP_PromptActor_RepairShipWheel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_RepairShipWheel_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.ReceiveEndPlay");

	ABP_PromptActor_RepairShipWheel_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.ExecuteUbergraph_BP_PromptActor_RepairShipWheel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_RepairShipWheel_C::ExecuteUbergraph_BP_PromptActor_RepairShipWheel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_RepairShipWheel.BP_PromptActor_RepairShipWheel_C.ExecuteUbergraph_BP_PromptActor_RepairShipWheel");

	ABP_PromptActor_RepairShipWheel_C_ExecuteUbergraph_BP_PromptActor_RepairShipWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActor_RepairShipWheel_C::AfterRead()
{
	ABP_PromptActorBase_C::AfterRead();

	READ_PTR_FULL(PromptCoordinator, UBP_Prompt_RepairShipWheel_C);
}

void ABP_PromptActor_RepairShipWheel_C::BeforeDelete()
{
	ABP_PromptActorBase_C::BeforeDelete();

	DELE_PTR_FULL(PromptCoordinator);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
