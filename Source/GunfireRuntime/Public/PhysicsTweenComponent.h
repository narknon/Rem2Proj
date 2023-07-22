#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EEaseType.h"
#include "PhysicsTweenEventDelegate.h"
#include "PhysicsTweenParameters.h"
#include "PhysicsTweenComponent.generated.h"

class UPhysicsConstraintComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPhysicsTweenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsTweenEvent OnTweenFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsTweenEvent OnTweenFailed;
    
    UPhysicsTweenComponent();
    UFUNCTION(BlueprintCallable)
    bool StopTweenAndInvalidateHandle(UPARAM(Ref) int32& TweenID);
    
    UFUNCTION(BlueprintCallable)
    bool StopTween(int32 TweenID);
    
    UFUNCTION(BlueprintCallable)
    int32 StopComponent(UPrimitiveComponent* Primitive, FPhysicsTweenParameters Parameters, float VelocityTolerance);
    
    UFUNCTION(BlueprintCallable)
    bool StopAllTweens();
    
    UFUNCTION(BlueprintCallable)
    void SetTweenIntensity(int32 TweenID, float Intensity);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveComponent(UPrimitiveComponent* Primitive, const FTransform& TargetTransform, FPhysicsTweenParameters Parameter, float DistanceTolerance, USceneComponent* TargetComponent, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTweenFinished(int32 TweenID) const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateHandle(UPARAM(Ref) int32& TweenHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTweenIntensity(int32 TweenID) const;
    
    UFUNCTION(BlueprintCallable)
    int32 DragComponent(UPrimitiveComponent* Primitive, USceneComponent* PullOrigin, USceneComponent* PullSource, FFloatRange Range, FPhysicsTweenParameters Parameters);
    
    UFUNCTION(BlueprintCallable)
    int32 BlendOutPhysics(USkeletalMeshComponent* Mesh, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    int32 AttachComponents(UPrimitiveComponent* Primitive, USceneComponent* AttachComponent, const FTransform& AttachTransform, UPhysicsConstraintComponent* Constraint, bool bSimulatePhysics, FName SocketName, float AttachTime, EEaseType Ease, float EaseExponent, bool bOverridePivotLocation, FVector PivotOverride);
    
};

