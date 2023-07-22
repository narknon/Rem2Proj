#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EEaseType.h"
#include "ETweenRoot.h"
#include "TweenCompleteDelegateDelegate.h"
#include "TweenComponentDuringPhysicsTickFunction.h"
#include "TweenComponent.generated.h"

class AActor;
class ULightComponent;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UTweenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTweenCompleteDelegate OnTweenComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTweenComponentDuringPhysicsTickFunction DuringPhysicsTickFunction;
    
public:
    UTweenComponent();
    UFUNCTION(BlueprintCallable)
    void StopTween(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void StopAllTweens();
    
    UFUNCTION(BlueprintCallable)
    int32 SetLightIntensity(float Intensity, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 SetComponentLightIntensity(ULightComponent* Component, float Intensity, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 ScaleComponent(USceneComponent* Component, const FVector& NewScale, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 Scale(const FVector& NewScale, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 RotateComponent(USceneComponent* Component, const FRotator& TargetRotation, float Time, EEaseType EaseType, float Exponent, bool bRotateRelative);
    
    UFUNCTION(BlueprintCallable)
    int32 Rotate(const FRotator& TargetRotation, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveToTarget(AActor* Target, float Time, ETweenRoot Root, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveRelative(const FVector& Offset, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveComponent(USceneComponent* Component, const FVector& Destination, float Time, EEaseType EaseType, float Exponent, bool bMoveRelative);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveBezier(const FVector& ControlPt1, const FVector& Destination, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 Move(const FVector& Destination, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    bool IsTweenComplete(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime(int32 ID, bool bIsNormalized) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateVectorProperty(UObject* Object, FName PropertyName, const FVector& From, const FVector& To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateVector4Property(UObject* Object, FName PropertyName, const FVector4& From, const FVector4& To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateRotatorProperty(UObject* Object, FName PropertyName, const FRotator& From, const FRotator& To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimatePrimitiveComponentMaterialVectorParam(UPrimitiveComponent* Component, UMaterialInterface* Material, const FName& Param, FVector From, FVector To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimatePrimitiveComponentMaterialScalarParam(UPrimitiveComponent* Component, UMaterialInterface* Material, const FName& Param, float From, float To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateMaterialVectorParamGlobal(UMaterialInterface* Material, const FName& Param, FVector From, FVector To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateMaterialVectorParam(const FName& ComponentName, UMaterialInterface* Material, const FName& Param, FVector From, FVector To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateMaterialScalarParamGlobal(UMaterialInterface* Material, const FName& Param, float From, float To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateMaterialScalarParam(const FName& ComponentName, UMaterialInterface* Material, const FName& Param, float From, float To, float Time, EEaseType EaseType, float Exponent);
    
    UFUNCTION(BlueprintCallable)
    int32 AnimateFloatProperty(UObject* Object, FName PropertyName, float From, float To, float Time, EEaseType EaseType, float Exponent);
    
};

