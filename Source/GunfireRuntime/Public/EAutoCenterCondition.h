#pragma once
#include "CoreMinimal.h"
#include "EAutoCenterCondition.generated.h"

UENUM(BlueprintType)
enum class EAutoCenterCondition : uint8 {
    Never,
    NotMoving,
    Moving,
    MovingWithMoveInput,
    Always,
};

