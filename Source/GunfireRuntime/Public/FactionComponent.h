#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageInfo.h"
#include "EAffiliation.h"
#include "FactionAffiliationEventDelegate.h"
#include "FactionDamageTracker.h"
#include "FactionOverride.h"
#include "Templates/SubclassOf.h"
#include "FactionComponent.generated.h"

class AActor;
class UFaction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UFactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionAffiliationEvent OnFactionAffiliationChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyTurnHostileOnDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFaction>> FactionsToIgnore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFaction> CachedFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFactionOverride> FactionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionDamageTracker> DamageTrackers;
    
public:
    UFactionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TakeDamage(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFactionOverride(TSubclassOf<UFaction> Faction, EAffiliation Affiliation);
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(TSubclassOf<UFaction> NewFaction);
    
    UFUNCTION(BlueprintCallable)
    bool GetFactionOverride(TSubclassOf<UFaction> Faction, EAffiliation& Affiliation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFaction> GetFaction() const;
    
    UFUNCTION(BlueprintCallable)
    EAffiliation GetAffiliation(AActor* OtherActor);
    
};

