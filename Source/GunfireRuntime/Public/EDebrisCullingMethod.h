#pragma once
#include "CoreMinimal.h"
#include "EDebrisCullingMethod.generated.h"

UENUM(BlueprintType)
enum class EDebrisCullingMethod : uint8 {
    CullByTime,
    CullByDistance,
};

