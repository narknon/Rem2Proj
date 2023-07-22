#pragma once
#include "CoreMinimal.h"
#include "EClimbTurnAwayDirection.generated.h"

UENUM(BlueprintType)
enum class EClimbTurnAwayDirection : uint8 {
    Left,
    Right,
    None,
};

