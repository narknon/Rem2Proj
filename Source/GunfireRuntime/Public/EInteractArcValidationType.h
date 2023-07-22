#pragma once
#include "CoreMinimal.h"
#include "EInteractArcValidationType.generated.h"

UENUM(BlueprintType)
enum class EInteractArcValidationType : uint8 {
    Ignore,
    AngleOnly,
    AngleAndPosition,
    FacingOnly,
    PositionOnly,
    FacingAndPosition,
};

