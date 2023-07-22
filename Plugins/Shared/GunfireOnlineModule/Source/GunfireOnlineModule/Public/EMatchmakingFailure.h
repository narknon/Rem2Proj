#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingFailure.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingFailure : uint8 {
    Generic,
    Cancelled,
};

