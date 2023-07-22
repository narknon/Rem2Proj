#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageEventDelegateDelegate.h"
#include "DamageInfo.h"
#include "DamageableInterface.h"
#include "DamageableVoidDelegateDelegate.h"
#include "EInvincibleHandlingMethod.h"
#include "Templates/SubclassOf.h"
#include "DamageableActor.generated.h"

class UFaction;
class UMaterialInterface;
class USceneComponent;
class UStatsComponent;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API ADamageableActor : public AActor, public IDamageableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInvincibleHandlingMethod InvincibleMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BeginNetDormant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DamageThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VisualTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> Faction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisablePersistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLevelScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 DamageableLevel;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageableVoidDelegate OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnDead;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> DamageStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* AimTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatsComponent* DamageStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DamageMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> RepairMaterials;
    
public:
    ADamageableActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateVisualState(FName TransitionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(float NewHealth);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostComputeStats();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyTakeDamage(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyDead(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumDamageStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FilterIncomingDamage(const FDamageInfo& DamageInfo, float& DamageOut, bool& ShouldApplyDamage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DifficultyChanged();
    
    UFUNCTION(BlueprintCallable)
    void ComputeStats();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyHealthDelta(float Delta);
    
    
    // Fix for true pure virtual functions not being implemented
};

