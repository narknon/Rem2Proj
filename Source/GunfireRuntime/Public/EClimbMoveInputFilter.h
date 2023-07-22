#pragma once
#include "CoreMinimal.h"
#include "EClimbMoveInputFilter.generated.h"

UENUM(BlueprintType)
enum class EClimbMoveInputFilter : uint8 {
    Any,
    HorizontalOnly,
    VerticalOnly,
};

