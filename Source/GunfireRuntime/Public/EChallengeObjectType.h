#pragma once
#include "CoreMinimal.h"
#include "EChallengeObjectType.generated.h"

UENUM(BlueprintType)
enum class EChallengeObjectType : uint8 {
    Increment,
    Threshold,
};

