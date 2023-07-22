#pragma once
#include "CoreMinimal.h"
#include "ELadderQueryType.generated.h"

UENUM(BlueprintType)
enum class ELadderQueryType : uint8 {
    Raycast,
    Radial,
    Bounds,
};

