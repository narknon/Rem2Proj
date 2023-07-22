#pragma once
#include "CoreMinimal.h"
#include "ChallengeReward.h"
#include "ExperienceReward.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UExperienceReward : public UChallengeReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceToGive;
    
    UExperienceReward();
};

