#pragma once
#include "CoreMinimal.h"
#include "EPersistenceLoadResult.generated.h"

UENUM(BlueprintType)
enum class EPersistenceLoadResult : uint8 {
    Success,
    DoesNotExist,
    Corrupt,
    TooNew,
    Unknown,
};

