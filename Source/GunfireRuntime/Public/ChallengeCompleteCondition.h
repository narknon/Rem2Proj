#pragma once
#include "CoreMinimal.h"
#include "Condition.h"
#include "ChallengeCompleteCondition.generated.h"

class UChallenge;

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallengeCompleteCondition : public UCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UChallenge> Challenge;
    
    UChallengeCompleteCondition();
};

