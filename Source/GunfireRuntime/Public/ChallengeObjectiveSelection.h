#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeObjectiveSelection.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FChallengeObjectiveSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    FChallengeObjectiveSelection();
};

