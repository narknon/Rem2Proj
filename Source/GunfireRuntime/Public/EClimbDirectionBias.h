#pragma once
#include "CoreMinimal.h"
#include "EClimbDirectionBias.generated.h"

UENUM(BlueprintType)
enum class EClimbDirectionBias : uint8 {
    Right,
    Left,
    DontCare,
};

