#pragma once
#include "CoreMinimal.h"
#include "ChallengeLinkId.h"
#include "ChallengeObjectiveBase.h"
#include "ChallengeObjectiveLink.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API UChallengeObjectiveLink : public UChallengeObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeLinkId ChallengeLink;
    
    UChallengeObjectiveLink();
};

