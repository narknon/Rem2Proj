#pragma once
#include "CoreMinimal.h"
#include "ETargetType.h"
#include "HeuristicBoundsComponent.h"
#include "OnTargetEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "TargetableComponent.generated.h"

class AActor;
class ACharacterGunfire;
class UTargetingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UTargetableComponent : public UHeuristicBoundsComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachToBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPitch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetEvent OnTargetEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetEvent OnUnTargetEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeTolerance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeTargeted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSoftTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowLockTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSnaping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetedByList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTargetingComponent>> TargetableByClassList;
    
public:
    UTargetableComponent();
    UFUNCTION(BlueprintCallable)
    void SetCanBeTargeted(bool bNewCanBeTargeted);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowSoftTarget(bool bNewAllowSoftTarget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnTarget(AActor* UnTargetedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTarget(AActor* TargetedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDied(uint8 Reason, ACharacterGunfire* Character, AActor* Cause);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetTargetingActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeTargeted() const;
    
};

