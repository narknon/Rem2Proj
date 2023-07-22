#pragma once
#include "CoreMinimal.h"
#include "ESpawnVisibility.generated.h"

UENUM(BlueprintType)
enum class ESpawnVisibility : uint8 {
    DontCare,
    OutOfSight,
    InView,
    InFieldOfView_OutOfSight,
};

