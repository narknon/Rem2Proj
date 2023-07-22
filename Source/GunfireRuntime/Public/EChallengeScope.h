#pragma once
#include "CoreMinimal.h"
#include "EChallengeScope.generated.h"

UENUM(BlueprintType)
enum class EChallengeScope : uint8 {
    LocalOnly,
    HostOnly,
    Everyone,
};

