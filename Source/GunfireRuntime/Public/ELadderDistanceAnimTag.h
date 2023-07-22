#pragma once
#include "CoreMinimal.h"
#include "ELadderDistanceAnimTag.generated.h"

UENUM(BlueprintType)
enum class ELadderDistanceAnimTag : uint8 {
    None,
    RungsFromTop,
    RungsFromBottom,
};

