#pragma once
#include "CoreMinimal.h"
#include "EChallengeAuthorityType.generated.h"

UENUM(BlueprintType)
enum class EChallengeAuthorityType : uint8 {
    Any,
    Server,
    Local,
};

