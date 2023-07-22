#pragma once
#include "CoreMinimal.h"
#include "EBoidMoveState.generated.h"

UENUM(BlueprintType)
enum class EBoidMoveState : uint8 {
    Idle,
    Wander,
    Goal,
    Direction,
};

