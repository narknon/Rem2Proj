#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HierarchicalEditInterface.h"
#include "ChallengeRank.generated.h"

class UChallengeObjectiveBase;
class UChallengeReward;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallengeRank : public UObject, public IHierarchicalEditInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChallengeObjectiveBase*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UChallengeReward*> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Points;
    
    UChallengeRank();
    
    // Fix for true pure virtual functions not being implemented
};

