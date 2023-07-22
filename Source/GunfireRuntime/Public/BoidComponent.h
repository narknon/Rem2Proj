#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BoidSettings.h"
#include "BoidVoidDelegateDelegate.h"
#include "EBoidMoveType.h"
#include "BoidComponent.generated.h"

class AActor;
class ANavigationData;
class ARecastNavMesh;
class UPawnMovementComponent;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UBoidComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoidVoidDelegate OnGoalArrived;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* NavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* NavData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* BoidMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoidMoveType MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoidSettings AirSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoidSettings GroundSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Flapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FlapIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
public:
    UBoidComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Wander(float WanderRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnPoint(const FVector& NewSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveType(EBoidMoveType NewMoveType);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalLocation(const FVector& NewGoalLocation, bool NewStopOnGoal, float NewGoalInnerRadius, float NewGoalOuterRadius, float NewGoalSeekBoost, float NewGoalSeekBoostZ);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalDirection(const FVector& NewDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetGoal(AActor* NewGoal, bool NewStopOnGoal, float NewGoalInnerRadius, float NewGoalOuterRadius, float NewGoalSeekBoost, float NewGoalSeekBoostZ);
    
    UFUNCTION(BlueprintCallable)
    void SetFlapIntensity(float NewFlapIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBoidSettings(const FBoidSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void ClearGoal();
    
};

