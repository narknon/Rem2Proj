#pragma once
#include "CoreMinimal.h"
#include "EClimbMovementType.generated.h"

UENUM(BlueprintType)
enum class EClimbMovementType : uint8 {
    Discrete,
    Continuous,
};

