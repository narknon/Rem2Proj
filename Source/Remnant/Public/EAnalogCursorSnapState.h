#pragma once
#include "CoreMinimal.h"
#include "EAnalogCursorSnapState.generated.h"

UENUM(BlueprintType)
enum class EAnalogCursorSnapState : uint8 {
    None,
    Requested,
    InProgress,
    Finishing,
};

