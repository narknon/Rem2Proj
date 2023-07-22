#pragma once
#include "CoreMinimal.h"
#include "EInitialFacing.generated.h"

UENUM(BlueprintType)
enum class EInitialFacing : uint8 {
    MoveDir,
    Camera,
    Velocity,
    Target,
    TargetOnly,
    Surface,
};

