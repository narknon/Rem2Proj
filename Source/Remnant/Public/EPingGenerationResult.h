#pragma once
#include "CoreMinimal.h"
#include "EPingGenerationResult.generated.h"

UENUM(BlueprintType)
enum class EPingGenerationResult : uint8 {
    Success,
    PingMuted,
    GenericFailure,
};

