#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EExperienceReason.h"
#include "ExperienceDelegateDelegate.h"
#include "LevelUpDelegateDelegate.h"
#include "ProgressionComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UProgressionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExperienceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredExperienceInc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredExperienceExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredExperienceRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncomingExperienceScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Level, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Experience, meta=(AllowPrivateAccess=true))
    int32 Experience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 QueuedExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool AutoAcquireExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool QueueExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool SharedExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SharedExperienceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopExpGainAtMaxLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExperienceDelegate OnExperience;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUpDelegate OnLevelUp;
    
    UProgressionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool SetLevel(int32 LevelToSet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Level();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Experience();
    
    UFUNCTION(BlueprintCallable)
    void OnComputeStats();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetPercentageToNextLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExperienceTowardsNextLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExperienceToNextLevel();
    
    UFUNCTION(BlueprintCallable)
    void CommitQueuedExperience();
    
    UFUNCTION(BlueprintCallable)
    void ClearQueuedExperience();
    
    UFUNCTION(BlueprintCallable)
    void AddExperience(int32 ExperienceToAdd, EExperienceReason Reason, int32 ExperienceLevel);
    
};

