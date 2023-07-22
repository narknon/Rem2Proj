#pragma once
#include "CoreMinimal.h"
#include "ERootMotionVelocityMethod.generated.h"

UENUM(BlueprintType)
enum class ERootMotionVelocityMethod : uint8 {
    RootMotionOnly,
    IgnoreRootMotion,
    AccumulativeRootMotion,
    ApplyAsDelta,
    IgnoreGravity,
    ApplyGravityWithDownwardRootMotion,
};

