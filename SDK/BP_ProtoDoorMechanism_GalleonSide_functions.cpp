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

// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ProtoDoorMechanism_GalleonSide_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.UserConstructionScript");

	ABP_ProtoDoorMechanism_GalleonSide_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_ProtoDoorMechanism_GalleonSide_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ReceiveBeginPlay");

	ABP_ProtoDoorMechanism_GalleonSide_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStarted
// (Event, Protected, BlueprintEvent)
void ABP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStarted");

	ABP_ProtoDoorMechanism_GalleonSide_C_Blueprint_OnStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStopped
// (Event, Protected, BlueprintEvent)
void ABP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStopped");

	ABP_ProtoDoorMechanism_GalleonSide_C_Blueprint_OnStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_ProtoDoorMechanism_GalleonSide_C::BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ProtoDoorMechanism_GalleonSide_C_BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)
void ABP_ProtoDoorMechanism_GalleonSide_C::BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ProtoDoorMechanism_GalleonSide_C_BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ProtoDoorMechanism_GalleonSide_C::ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide");

	ABP_ProtoDoorMechanism_GalleonSide_C_ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ProtoDoorMechanism_GalleonSide_C::AfterRead()
{
	ADoorMechanism::AfterRead();

	READ_PTR_FULL(OpenJumpToLocation, UArrowComponent);
	READ_PTR_FULL(ClosedJumpToLocation, UArrowComponent);
	READ_PTR_FULL(OpenKnockbackDirection, UArrowComponent);
	READ_PTR_FULL(ClosedKnockbackDirection, UArrowComponent);
	READ_PTR_FULL(InteractionPoint, UChildActorComponent);
	READ_PTR_FULL(OpenVolume, UBoxComponent);
	READ_PTR_FULL(ClosedVolume, UBoxComponent);
}

void ABP_ProtoDoorMechanism_GalleonSide_C::BeforeDelete()
{
	ADoorMechanism::BeforeDelete();

	DELE_PTR_FULL(OpenJumpToLocation);
	DELE_PTR_FULL(ClosedJumpToLocation);
	DELE_PTR_FULL(OpenKnockbackDirection);
	DELE_PTR_FULL(ClosedKnockbackDirection);
	DELE_PTR_FULL(InteractionPoint);
	DELE_PTR_FULL(OpenVolume);
	DELE_PTR_FULL(ClosedVolume);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
