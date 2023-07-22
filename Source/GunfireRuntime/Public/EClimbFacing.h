#pragma once
#include "CoreMinimal.h"
#include "EClimbFacing.generated.h"

UENUM(BlueprintType)
enum class EClimbFacing : uint8 {
    Surface,
    Spline,
    Hanging,
    Overhead,
};

