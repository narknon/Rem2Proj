#pragma once
#include "CoreMinimal.h"
#include "EOrientTowardsHeadingCondition.generated.h"

UENUM(BlueprintType)
enum class EOrientTowardsHeadingCondition : uint8 {
    Never,
    MoveInput,
    Moving,
    MovingAndMoveInput,
    MovingOrMoveInput,
    Always,
};

