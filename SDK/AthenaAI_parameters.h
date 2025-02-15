﻿#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
struct UAthenaAIFormComponent_OnRep_FormData_Params
{
};

// Function AthenaAI.AISpawner.GetNumOfSpawnRequests
struct UAISpawner_GetNumOfSpawnRequests_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
struct UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params
{
	TAssetPtr<class UAISkillsetRankProgression>        Progression;                                               // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
struct UAIEncounterServiceInterface_RegisterLoadedSkillset_Params
{
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                  // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
struct UAIEncounterServiceInterface_RegisterLoadedLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                   // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
struct UAIEncounterServiceInterface_RegisterLoadedForm_Params
{
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                      // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
struct UAIEncounterServiceInterface_RegisterLoadedEncounter_Params
{
	TAssetPtr<class UAIEncounterSettings>              Encounter;                                                 // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
struct UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params
{
};

// Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
struct AAIEncounterService_RegisterLoadedSkillsetProgression_Params
{
	TAssetPtr<class UAISkillsetRankProgression>        Progression;                                               // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
struct AAIEncounterService_RegisterLoadedSkillset_Params
{
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                  // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
struct AAIEncounterService_RegisterLoadedLoadout_Params
{
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                   // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedForm
struct AAIEncounterService_RegisterLoadedForm_Params
{
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                      // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
struct AAIEncounterService_RegisterLoadedEncounter_Params
{
	TAssetPtr<class UAIEncounterSettings>              Encounter;                                                 // (Parm, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
struct UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ItemDesc;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AItemInfo*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
struct UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
struct UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       DisplayName;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
struct UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
struct UAIManagerServiceInterface_StartDespawnAI_Params
{
	class APawn*                                       AIActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterDeathType>            DeathType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
struct UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerService.TickService
struct AAIManagerService_TickService_Params
{
	float                                              DeltaSeconds;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIManagerService.StartDespawnAI
struct AAIManagerService_StartDespawnAI_Params
{
	class APawn*                                       AIActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterDeathType>            DeathType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
struct UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params
{
	int                                                InMaxNumOfSpawnedActors;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params
{
	int                                                InMaxAICostUnitsPerRegion;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
struct UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params
{
	int                                                InMaxAICostUnitsForWorld;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
struct UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params
{
	bool                                               Ignore;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
struct UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params
{
	float                                              InDistanceToPlayerToRaiseSpawnPriority;                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
struct UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params
{
	float                                              InCharacterWorldDensityCheckTimer;                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
struct UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params
{
	float                                              InCharacterRegionDensityCheckTimer;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
struct UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params
{
	float                                              InCloseByCharactersRadius;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
struct UDebugAIManagerServiceInterface_BlockAIAbility_Params
{
	class UClass*                                      InExclusive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               InBlockState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
struct ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params
{
	int                                                InMaxNumOfSpawnedActors;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
struct ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params
{
	int                                                InMaxAICostUnitsPerRegion;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
struct ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params
{
	int                                                InMaxAICostUnitsForWorld;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
struct ADebugAIManagerService_SetIgnoreCharacterLimits_Params
{
	bool                                               Ignore;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
struct ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params
{
	float                                              InDistanceToPlayerToRaiseSpawnPriority;                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
struct ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params
{
	float                                              InCharacterWorldDensityCheckTimer;                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
struct ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params
{
	float                                              InCharacterRegionDensityCheckTimer;                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
struct ADebugAIManagerService_SetCharacterNetRelevancy_Params
{
	float                                              InCloseByCharactersRadius;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.DebugAIManagerService.BlockAIAbility
struct ADebugAIManagerService_BlockAIAbility_Params
{
	class UClass*                                      InExclusive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               InBlockState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AINameplateComponent.OnRep_Title
struct UAINameplateComponent_OnRep_Title_Params
{
};

// Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
struct UAINameplateComponent_OnRep_DisplayNameAsString_Params
{
};

// Function AthenaAI.AINameplateComponent.OnRep_DisplayName
struct UAINameplateComponent_OnRep_DisplayName_Params
{
};

// Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
struct UAINameplateComponent_OnRep_DebugDisplayText_Params
{
};

// Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
struct UAIPartsRetrievalComponent_RequestNewAIParts_Params
{
	class UAIPartsCategory*                            AssignedPartsCategory;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PartsIndexToUse;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TeamColorIndex;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
struct UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params
{
};

// Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
struct UAIPerPlayerSpawner_PlayerDeath_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
struct UAITargetWeaponInterface_FindAimConfigToHitTarget_Params
{
	struct FVector                                     Target;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               CheckYaw;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    OutAimConfig;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
struct AAmbientWaterSpawnerManager_OnPlayerDeath_Params
{
	class AActor*                                      InActorDying;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
struct ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params
{
};

// Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
struct ABurrowCrack_OnLifeSpanPercentLeft_Params
{
	float                                              PercentLeft;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
struct AAthenaAIControllerBase_SetNamedControllerParam_Params
{
	struct FName                                       ParamName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
struct AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params
{
	struct FName                                       ParamName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
struct AAthenaAIControllerBase_FindNamedControllerParam_Params
{
	struct FName                                       ParamName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
struct AAthenaAIControllerBase_ApplyControllerParams_Params
{
	class UAthenaAIControllerParamsDataAsset*          ParamsAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIController.StopBehaviourLogic
struct AAthenaAIController_StopBehaviourLogic_Params
{
};

// Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
struct AAthenaAIController_SetPerceptionExpirationAgeForActor_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExpirationAge;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Sense;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
struct AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params
{
	class AActor*                                      TriggerActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIController.OnPerceptionUpdated
struct AAthenaAIController_OnPerceptionUpdated_Params
{
	TArray<class AActor*>                              ChangedPerceivedActors;                                    // (Parm, ZeroConstructor)
};

// Function AthenaAI.AthenaAIController.OnNewlySpawned
struct AAthenaAIController_OnNewlySpawned_Params
{
};

// Function AthenaAI.AthenaAIController.OnFinishDespawn
struct AAthenaAIController_OnFinishDespawn_Params
{
};

// Function AthenaAI.AthenaAIController.IsActorPerceived
struct AAthenaAIController_IsActorPerceived_Params
{
	class AActor*                                      TargetActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAIController.GetTargetActor
struct AAthenaAIController_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
struct AAthenaAIController_GetAthenaAIPerceptionComponent_Params
{
	class UAthenaAIPerceptionComponent*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIController.GetAllSeenActors
struct AAthenaAIController_GetAllSeenActors_Params
{
	TArray<class AActor*>                              SeenActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaAI.AthenaAIController.ApplyControllerParams
struct AAthenaAIController_ApplyControllerParams_Params
{
	class UAthenaAIControllerParamsDataAsset*          ParamsAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
struct AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params
{
	bool                                               InPrioritiseInteractablesBeforeEnemies;                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
struct AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params
{
	class UClass*                                      InItemCategory;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       ParamName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
struct AAthenaAICharacterController_SetDisableTurningForTest_Params
{
	bool                                               InDisableTurningForTest;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
struct AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params
{
};

// Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
struct UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params
{
	class UClass*                                      Sense;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
struct UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
struct UAthenaAIPerceptionComponent_EnablePerceptionSense_Params
{
	class UClass*                                      Sense;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Enable;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
struct UAthenaAIPerceptionComponent_EnableAllPerception_Params
{
	bool                                               Enable;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
struct UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params
{
};

// Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
struct ASpawnContextProviderZone_RemoveContextsFromTarget_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InOtherBodyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
struct ASpawnContextProviderZone_AddContextsToTarget_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InOtherBodyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  InSweepResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function AthenaAI.AICreatureCharacter.SetAIStrategy
struct AAICreatureCharacter_SetAIStrategy_Params
{
	class UClass*                                      InStrategy;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
struct AAICreatureCharacter_OnRep_CurrentAIStrategy_Params
{
	class UClass*                                      OldAIStrategy;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
struct AAICreatureCharacter_Multicast_DespawnRPC_Params
{
};

// Function AthenaAI.AICreatureCharacter.GetAIStrategy
struct AAICreatureCharacter_GetAIStrategy_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
struct UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params
{
	TAssetPtr<class UClass>                            AIType;                                                    // (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset;                                                  // (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class ULoadoutAsset>                     Loadout;                                                   // (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UAthenaAIFormDataAsset>            Form;                                                      // (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            AIItemSpawnComponent;                                      // (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ClassId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UAthenaAIAmmoDataAsset>            Ammo;                                                      // (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     Pos;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rot;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FName                                       Region;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TriggerActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NavMeshOverride;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
struct UAthenaAIDebugFunctionLibrary_SpawnAI_Params
{
	class UAIEncounterSettings*                        EncounterSettings;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Pos;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rot;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MakeAIPermanentlyNetRelevant;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      InstancedNavMesh;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIEncounterSpecification                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
struct UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params
{
	float                                              InMaxAllowedSeconds;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     QueryOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
struct UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params
{
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
struct UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params
{
	class UObject*                                     QueryOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
struct UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params
{
	class AAthenaAIController*                         AIController;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
struct UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
struct UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
struct UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  SpawnerAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Pos;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
struct UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  SpawnerAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SpawnLocationActor;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
struct UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class ANavigationData*                             NavData;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FilterClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     QueryExtent;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
struct UAIFaunaSpawner_SpawnFaunaGroup_Params
{
};

// Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
struct AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params
{
	bool                                               InDormancyCheckingEnabledInAutomation;                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
struct AAthenaFaunaAIController_LeaderDestroyed_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaFaunaAIController.GetLeader
struct AAthenaFaunaAIController_GetLeader_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaFaunaAIController.GetCourage
struct AAthenaFaunaAIController_GetCourage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
struct AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params
{
	class UAthenaAICharacterPathFollowingComponent*    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Fauna.TestingSetWaterState
struct AFauna_TestingSetWaterState_Params
{
	TEnumAsByte<AthenaAI_EFaunaInWaterState>           NewInState;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Fauna.OnRep_TargetTurnAngle
struct AFauna_OnRep_TargetTurnAngle_Params
{
};

// Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
struct AFauna_OnRep_IsPlayingStarvingAnim_Params
{
};

// Function AthenaAI.Fauna.OnRep_IsCalm
struct AFauna_OnRep_IsCalm_Params
{
};

// Function AthenaAI.Fauna.OnRep_IsAgitated
struct AFauna_OnRep_IsAgitated_Params
{
};

// Function AthenaAI.Fauna.OnRep_InWaterState
struct AFauna_OnRep_InWaterState_Params
{
};

// Function AthenaAI.Fauna.OnRep_CratedState
struct AFauna_OnRep_CratedState_Params
{
	TEnumAsByte<AthenaAI_EFaunaCratedState>            PreviousCratedState;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
struct AFauna_Multicast_PlayPutInCrateEffectsRPC_Params
{
	class AActor*                                      Crate;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
struct AFauna_Multicast_JustBeenFedRPC_Params
{
	class AActor*                                      FedBy;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Fauna.Multicast_HightlightLeader
struct AFauna_Multicast_HightlightLeader_Params
{
	bool                                               bIsLeader;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
struct AFauna_GenerateNewRandomAnimationSeed_Params
{
};

// Function AthenaAI.Fauna.ActivateResponseRPC
struct AFauna_ActivateResponseRPC_Params
{
	float                                              InTargetTurnAngle;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
struct AAthenaSwimmingAIController_ApplyControllerParams_Params
{
	class UAthenaAIControllerParamsDataAsset*          InControllerParametersAsset;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
struct ATinySharkExperience_TinySharkPawnDestroyed_Params
{
	class AActor*                                      InDestroyedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
struct ATinySharkExperience_OnRep_TinySharkPawn_Params
{
	class ASharkPawn*                                  LastTinySharkPawn;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.TinySharkExperience.GetTrackedShip
struct ATinySharkExperience_GetTrackedShip_Params
{
	class AShip*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.TinySharkExperience.GetCurrentState
struct ATinySharkExperience_GetCurrentState_Params
{
	TEnumAsByte<AthenaAI_ETinySharkState>              ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.TinySharkExperience.GetActiveState
struct ATinySharkExperience_GetActiveState_Params
{
	TEnumAsByte<AthenaAI_ETinySharkActiveState>        ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.TinySharkService.RequestTinySharkWithShip
struct ATinySharkService_RequestTinySharkWithShip_Params
{
	class AShip*                                       InTrackedShip;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OverrideControllerParamIndex;                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PartIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
struct ATinySharkService_RequestTinySharkWithLocation_Params
{
	struct FVector                                     SpawnLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                PartIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.TinySharkService.DismissAllTinySharks
struct ATinySharkService_DismissAllTinySharks_Params
{
};

// Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
struct ATinySharkService_CanSpawnTinySharkExperience_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.Pet.SetExitTakeOffFlag
struct APet_SetExitTakeOffFlag_Params
{
	bool                                               InExitTakeOffFlag;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaAI.Pet.OnShipDestroyed
struct APet_OnShipDestroyed_Params
{
	class AActor*                                      InShip;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Pet.OnRep_RollRequest
struct APet_OnRep_RollRequest_Params
{
};

// Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
struct APet_OnRep_ResetRollAndZOffset_Params
{
};

// Function AthenaAI.Pet.OnRep_PetTurnToFaceData
struct APet_OnRep_PetTurnToFaceData_Params
{
};

// Function AthenaAI.Pet.OnRep_PetOwner
struct APet_OnRep_PetOwner_Params
{
};

// Function AthenaAI.Pet.OnRep_PetIsSad
struct APet_OnRep_PetIsSad_Params
{
};

// Function AthenaAI.Pet.OnRep_PerchedInHangout
struct APet_OnRep_PerchedInHangout_Params
{
};

// Function AthenaAI.Pet.OnRep_MovementRequest
struct APet_OnRep_MovementRequest_Params
{
};

// Function AthenaAI.Pet.OnRep_InHangout
struct APet_OnRep_InHangout_Params
{
};

// Function AthenaAI.Pet.OnOwnerDestroyed
struct APet_OnOwnerDestroyed_Params
{
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaAI.Pet.Multicast_DitherOut
struct APet_Multicast_DitherOut_Params
{
};

// Function AthenaAI.Pet.Multicast_DitherIn
struct APet_Multicast_DitherIn_Params
{
};

// Function AthenaAI.Pet.GetFloorMeshOffsetZ
struct APet_GetFloorMeshOffsetZ_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
