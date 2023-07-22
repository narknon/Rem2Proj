#pragma once
#include "CoreMinimal.h"
#include "EInteractiveResult.generated.h"

UENUM(BlueprintType)
enum class EInteractiveResult : uint8 {
    NoResult,
    Success,
    Failure,
};

