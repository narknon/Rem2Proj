#pragma once
#include "CoreMinimal.h"
#include "ESurfaceOrientRotationMode.generated.h"

UENUM(BlueprintType)
enum class ESurfaceOrientRotationMode : uint8 {
    PitchAndRoll,
    PitchOnly,
};

