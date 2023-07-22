#pragma once
#include "CoreMinimal.h"
#include "EAnimationNamedSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EAnimationNamedSelectionMode : uint8 {
    Random,
    Directional,
    DirectionalInput,
};

