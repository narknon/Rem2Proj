#pragma once
#include "CoreMinimal.h"
#include "EWaterSurfaceDirection.generated.h"

UENUM(BlueprintType)
enum class EWaterSurfaceDirection : uint8 {
    On,
    Above,
    Below,
};

