#pragma once
#include "CoreMinimal.h"
#include "ChallengeObjectiveInstance.generated.h"

class UChallengeObjectiveBase;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FChallengeObjectiveInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChallengeObjectiveBase* Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Complete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    FChallengeObjectiveInstance();
};

