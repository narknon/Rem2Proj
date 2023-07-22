#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CinematicPlayerSettings.h"
#include "DamageInfo.h"
#include "EWoundedState.h"
#include "OnRevivedDelegateDelegate.h"
#include "OnWoundedDelegateDelegate.h"
#include "WoundedComponentDelegateDelegate.h"
#include "WoundedStateDelegateDelegate.h"
#include "WoundedComponent.generated.h"

class AActor;
class UConditionList;
class UObject;
class UTexture2D;
class UWoundedComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UWoundedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float WoundedHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ReviveProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundedStateDelegate OnWoundedState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundedComponentDelegate OnTargetRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevivedDelegate OnRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWoundedDelegate OnWounded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundedHealthMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundedHealthBleedOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveHealthMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRevivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeScalarWhileReviving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresAllowActionToRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReviveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReviverAnimTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseWoundRegenDuringRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConditionList* ReviveConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConditionList* SkipWoundConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConditionList* SelfSkipWoundConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EWoundedState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* ReviveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Revivers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysWoundable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineOfSightHeightOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReviveIconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReviveIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReviveLabel;
    
    UWoundedComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void StopReviveActor();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldSkipWoundFor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKillSelf();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ReviveActor(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void Revive(float HealthMultiplier, bool SelfRevive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCinematicPlaying(FCinematicPlayerSettings Settings, UObject* CurrentCinematic, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnWounded(const FDamageInfo& Damage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnTargetRevived(UWoundedComponent* WoundedComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnRevived(bool bSelfRevive);
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintCallable)
    float GetWoundedHealthPct();
    
    UFUNCTION(BlueprintCallable)
    bool CanRevive(AActor* Actor, bool ValidateRange);
    
};

