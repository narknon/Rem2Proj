#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "RemnantSpectatorPawn.generated.h"

class AActor;
class USpectatorTargetComponent;

UCLASS(Blueprintable)
class REMNANT_API ARemnantSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpectatorTargetComponent* CurrentSpectatorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PrevViewTarget;
    
public:
    ARemnantSpectatorPawn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetUnavailable(USpectatorTargetComponent* SpectatorTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSpectateTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInvalidTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTarget(AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAvailableTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentTarget(bool bOnlyIfValid) const;
    
};

