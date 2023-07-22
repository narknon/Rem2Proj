#pragma once
#include "CoreMinimal.h"
#include "EClimbingQueryStatus.generated.h"

UENUM(BlueprintType)
enum class EClimbingQueryStatus : uint8 {
    Successful,
    PendingTraversal,
    PendingInput,
    PendingOccupancy,
    Failure,
};

