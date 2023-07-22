#pragma once
#include "CoreMinimal.h"
#include "ECullCategory.generated.h"

UENUM(BlueprintType)
enum class ECullCategory : uint8 {
    NONE,
    TRACERS,
    SOUNDS_ATTACHED,
    DECAL = 0x4,
    PROJECTILES = 0x8,
};

