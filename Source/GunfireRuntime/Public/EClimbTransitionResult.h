#pragma once
#include "CoreMinimal.h"
#include "EClimbTransitionResult.generated.h"

UENUM(BlueprintType)
enum class EClimbTransitionResult : uint8 {
    Success,
    Failure,
    SuccessWithInput,
    Occupied,
};

