#pragma once
#include "CoreMinimal.h"
#include "EPushIKMethod.generated.h"

UENUM(BlueprintType)
enum class EPushIKMethod : uint8 {
    SnapToPoint,
    TraceForSurface,
};

