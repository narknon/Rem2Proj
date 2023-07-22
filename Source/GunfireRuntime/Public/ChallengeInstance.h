#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ChallengeInstance.generated.h"

class UChallenge;
class UChallengeComponent;
class UChallengeObjectiveBase;
class UChallengeRankInstance;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallengeInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChallenge* Challenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UChallengeComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentRank;
    
public:
    UChallengeInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalRanks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRankProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UChallengeRankInstance*> GetRankInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverallProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveValue(const UChallengeObjectiveBase* Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveProgress(const UChallengeObjectiveBase* Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetChallengeID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChallengeComponent* GetChallengeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChallenge* GetChallenge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UChallengeRankInstance* CreateRankInstance(int32 RankId) const;
    
};

