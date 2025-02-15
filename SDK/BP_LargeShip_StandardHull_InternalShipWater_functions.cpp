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

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Intersect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 IntersectionPoint              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_StandardHull_InternalShipWater_C::GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane");

	ABP_LargeShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Intersect != nullptr)
		*Intersect = params.Intersect;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;

}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetWaterLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaterLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_StandardHull_InternalShipWater_C::GetWaterLevel(float* WaterLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetWaterLevel");

	ABP_LargeShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WaterLevel != nullptr)
		*WaterLevel = params.WaterLevel;

}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_StandardHull_InternalShipWater_C::GetDistanceFromPlane(const struct FVector& Location, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane");

	ABP_LargeShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_InternalShipWater_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.AddWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Water_Amount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_StandardHull_InternalShipWater_C::AddWater(float Water_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.AddWater");

	ABP_LargeShip_StandardHull_InternalShipWater_C_AddWater_Params params;
	params.Water_Amount = Water_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_LargeShip_StandardHull_InternalShipWater_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay");

	ABP_LargeShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_StandardHull_InternalShipWater_C::ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater");

	ABP_LargeShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_StandardHull_InternalShipWater_C::AfterRead()
{
	AShipInternalWater::AfterRead();

	READ_PTR_FULL(DynamicFlow, UDynamicFlowComponent);
	READ_PTR_FULL(Foaminess, UCurveFloat);
}

void ABP_LargeShip_StandardHull_InternalShipWater_C::BeforeDelete()
{
	AShipInternalWater::BeforeDelete();

	DELE_PTR_FULL(DynamicFlow);
	DELE_PTR_FULL(Foaminess);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
