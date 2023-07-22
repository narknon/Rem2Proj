#pragma once
#include "CoreMinimal.h"
#include "EWaterSurfaceTraversalType.generated.h"

UENUM(BlueprintType)
enum class EWaterSurfaceTraversalType : uint8 {
    Emerge,
    Submerge,
};

