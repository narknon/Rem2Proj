#pragma once
#include "CoreMinimal.h"
#include "ChallengeEvent.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FChallengeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    FChallengeEvent();
};

