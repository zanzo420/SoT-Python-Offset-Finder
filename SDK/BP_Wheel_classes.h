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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wheel.BP_Wheel_C
// 0x0119 (FullSize[0x09F1] - InheritedSize[0x08D8])
class ABP_Wheel_C : public AWheel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Wheel;                                                     // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            ProjectileCollision;                                       // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FObjectMessagingHandle                      Wheel_Centered;                                            // 0x08F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Wheel_Movement_Started;                                    // 0x0940(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Wheel_Movement_Stopped;                                    // 0x0988(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwiseEmitter                               AudioEmitter;                                              // 0x09D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShipWheelTurning;                                          // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wheel.BP_Wheel_C");
		return ptr;
	}



	struct FDockableInfo GetDockableInfo();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	class USkeletalMeshComponent* GetWheelMesh();
	void UserConstructionScript();
	void Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel_EWheel> EWheel, float Direction, float WheelRate);
	void StickInput(float StickInputX);
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, bool Active, TEnumAsByte<Animation_ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void RequestStateChange(class AActor* Controller);
	void ExecuteUbergraph_BP_Wheel(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
