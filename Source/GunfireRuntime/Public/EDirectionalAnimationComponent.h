#pragma once
#include "CoreMinimal.h"
#include "EDirectionalAnimationComponent.generated.h"

UENUM(BlueprintType)
enum class EDirectionalAnimationComponent : uint8 {
    YawOnly,
    PitchOnly,
    PitchAndYaw,
};

