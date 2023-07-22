#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CollisionResponseOverride.h"
#include "DamageSourceInterface.h"
#include "ImpactEffectDescriptor.h"
#include "PhysicsActorStateSet.h"
#include "Templates/SubclassOf.h"
#include "PhysicsStateActor.generated.h"

class UDamageTypeGunfire;
class UPrimitiveComponent;
class UReplicatedMovementComponent;
class UStateMachineComponent;
class UWaterOverlapComponent;
class UWeaponPhantomComponent;

UCLASS(Abstract, Blueprintable)
class GUNFIRERUNTIME_API APhysicsStateActor : public AActor, public IDamageSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalMassScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSizeKinematicCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponPhantomComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSizeWeaponPhantom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDamageToInteractiveOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDamageToAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushingForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushingTorqueScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPushingCenterOfMassOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PushingCenterOfMassOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FXSlotComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsActorStateSet> PhysicsBoundSets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PushingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponPhantomComponent* WeaponPhantomManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplicatedMovementComponent* ReplicatedMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterOverlapComponent* WaterOverlapComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCollisionResponseOverride> CurrentCollisionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageTypeGunfire> CurrentDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FImpactEffectDescriptor CurrentImpactEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* WeaponPhantomPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateMachineComponent* CachedStateMachine;
    
public:
    APhysicsStateActor();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateOrientationReset(float TotalTime, float ElapsedTime, float SlamForceScale);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGlobalMassScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void ResetPhysicsStateActorOrientation(float VerticalForce, float ResetTime, float SlamForceScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaterStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhysicsFXEvent(FName NewState, FName OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingPushed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStateMachineComponent* GetStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeExtents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPushingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetPhysicsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalMassScale() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyShoveForce(float PushingForce, float LiftingForce, bool bScaleForceToMass);
    
    
    // Fix for true pure virtual functions not being implemented
};

