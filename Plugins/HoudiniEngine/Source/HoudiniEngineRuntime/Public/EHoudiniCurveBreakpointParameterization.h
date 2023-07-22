#pragma once
#include "CoreMinimal.h"
#include "EHoudiniCurveBreakpointParameterization.generated.h"

UENUM(BlueprintType)
enum class EHoudiniCurveBreakpointParameterization : uint8 {
    Invalid = 0xFF,
    Uniform = 0,
    Chord,
    Centripetal,
};

