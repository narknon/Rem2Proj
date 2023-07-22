#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayStateChangedEventDelegate.h"
#include "PlayStateContext.h"
#include "PlayStateTransitionedEventDelegate.h"
#include "PlayStateComponent.generated.h"

class APlayerControllerGunfire;
class UPlayState;
class UPlayStateEffect;
class UPlayStateSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPlayStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayStateChangedEvent OnStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayStateTransitionedEvent OnStateFinishedTransitioning;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayStateSet* StateSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayStateContext> ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayState* CurrentState;
    
public:
    UPlayStateComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHidingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerControllerGunfire* GetOwningPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTransitionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayStateEffect* GetActiveEffect(UClass* Class) const;
    
};

