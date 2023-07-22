#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AnimationHandle.h"
#include "AnimationLayer.h"
#include "EAnimationVelocityMode.h"
#include "IkEffector.h"
#include "AnimInstanceGunfire.generated.h"

class AActor;
class ACharacterGunfire;
class APawn;
class APlayerGunfire;
class UAnimInstanceGunfire;
class UInputStateComponent;
class USkeletalMeshComponent;
class UStateMachineComponent;

UCLASS(Blueprintable, NonTransient)
class GUNFIRERUNTIME_API UAnimInstanceGunfire : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationVelocityMode VelocityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VelocityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRelativeInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraRelativeVerticalInputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalculateGroundSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LookDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStopping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindupPlayrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBlendOutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationLayer> AnimationLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AnimationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIkEffector> IkEffectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTargetForAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustTargetDirectionByMeshOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalAnimationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainDirectionWhileStopping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearTimeDilationOnStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyParentAnimationMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyParentAimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyAllParentLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ParentLayersToCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotifyTriggerRateOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableRateOptimizationsDuringCinematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNotifiesPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNotifiesPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueuedNotifyFlushThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* OwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacterGunfire* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerGunfire* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputStateComponent* Input;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateMachineComponent* CachedStateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstanceGunfire* ParentAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimInstanceGunfire*> ChildAnimInstances;
    
public:
    UAnimInstanceGunfire();
    UFUNCTION(BlueprintCallable)
    void UpdateIkEffector(const FIkEffector& Effector);
    
    UFUNCTION(BlueprintCallable)
    static void StopAnimation(FAnimationHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void SetVelocityMode(EAnimationVelocityMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatedVelocityRate(FVector SimulatedVelocityRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatedVelocity(FVector SimulatedVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetParentAnimInstance(UAnimInstanceGunfire* AnimInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetCopyParentAnimationMetrics(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCopyParentAimDirection(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCopyAllParentAnimationLayers(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ResolveBoneName(USkeletalMeshComponent* Mesh, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveParentAnimationLayerToCopy(const FName& Layer);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIkEffector(FName IkBone);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildAnimInstance(UAnimInstanceGunfire* AnimInstance);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnimationTag(FName AnimTag);
    
    UFUNCTION(BlueprintCallable)
    FAnimationHandle PlayAnimationByID(FName AnimationLayer, FName AnimationID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnimationTag(FName AnimTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStateMachineComponent* GetStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveInputDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimInstanceGunfire* GetMasterAnimInstance(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIkEffector GetIkEffector(FName IkBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputStateComponent* GetCharacterInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAnimationVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAimAngles(FName RefBone, float& Yaw, float& Pitch);
    
    UFUNCTION(BlueprintCallable)
    void EnableLookPoses(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareAngles(float Angle1, float Angle2, float Arc) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreLookPosesDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    float ApplyAngleDeadzones(float Angle, const TArray<FVector2D> Deadzones, float DirectionAngleTolerance, float PreviousAngle);
    
    UFUNCTION(BlueprintCallable)
    void AddParentAnimationLayerToCopy(const FName& Layer);
    
    UFUNCTION(BlueprintCallable)
    void AddChildAnimInstance(UAnimInstanceGunfire* AnimInstance);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimationTag(FName AnimTag);
    
};

