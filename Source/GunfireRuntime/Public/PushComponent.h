#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "ButtonEvent.h"
#include "OnPushActorEventDelegate.h"
#include "PushComponent.generated.h"

class AActor;
class UPushState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPushComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CancelPushInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlternateMovementModeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlternateMovementModeRequiresHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientDistanceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientRotationTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitSmoothTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPushActorEvent OnPushActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorBeingPushed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPushState* CurrentPushState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal PlayerFacing;
    
public:
    UPushComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerStreamClientInput(const FVector_NetQuantizeNormal& Input, const FVector_NetQuantizeNormal& Facing, bool bMovementMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelPushInput();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelPushInput(const FName& ButtonName, ButtonEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void OnAlternateMovementModeInput(const FName& ButtonName, ButtonEvent Event);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAlternateMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingCancelPush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorBeingPushed() const;
    
};

