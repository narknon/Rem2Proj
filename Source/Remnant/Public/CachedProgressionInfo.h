#pragma once
#include "CoreMinimal.h"
#include "ValidateOverTimeInfo.h"
#include "CachedProgressionInfo.generated.h"

USTRUCT(BlueprintType)
struct REMNANT_API FCachedProgressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FValidateOverTimeInfo ExperienceOverTime;
    
    FCachedProgressionInfo();
};

