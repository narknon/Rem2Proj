#pragma once
#include "CoreMinimal.h"
#include "EHeuristicBoundsTraceResult.generated.h"

UENUM(BlueprintType)
enum class EHeuristicBoundsTraceResult : uint8 {
    Fail_OutOfRange,
    Fail_OutsideFoV,
    Fail_OutsideBounds,
    Success,
};

