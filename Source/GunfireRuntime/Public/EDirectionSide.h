#pragma once
#include "CoreMinimal.h"
#include "EDirectionSide.generated.h"

UENUM(BlueprintType)
enum class EDirectionSide : uint8 {
    Left,
    Right,
    Middle,
    Custom,
    DontCare,
};

