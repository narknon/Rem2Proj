#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChallengeObjectiveInstance.h"
#include "ChallengeRankInstance.generated.h"

class UChallengeInstance;
class UChallengeObjectiveBase;
class UChallengeRank;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallengeRankInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChallengeInstance* ChallengeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UChallengeRank* Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RankId;
    
    UChallengeRankInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UChallengeObjectiveBase*> GetObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FChallengeObjectiveInstance> GetObjectiveInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FChallengeObjectiveInstance GetObjectiveInstance(UChallengeObjectiveBase* Objective) const;
    
};

