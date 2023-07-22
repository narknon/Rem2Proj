#pragma once
#include "CoreMinimal.h"
#include "ETileDirection.generated.h"

UENUM(BlueprintType)
enum class ETileDirection : uint8 {
    None,
    North,
    East,
    South = 0x4,
    West = 0x8,
};

