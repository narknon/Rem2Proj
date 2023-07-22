#pragma once
#include "CoreMinimal.h"
#include "EAnalogCursorMovementMode.generated.h"

UENUM(BlueprintType)
enum class EAnalogCursorMovementMode : uint8 {
    Direct,
    Accelerated,
};

