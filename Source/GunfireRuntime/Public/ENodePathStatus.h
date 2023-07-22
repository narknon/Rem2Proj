#pragma once
#include "CoreMinimal.h"
#include "ENodePathStatus.generated.h"

UENUM(BlueprintType)
enum class ENodePathStatus : uint8 {
    Idle,
    Pathing,
    Waiting,
    Complete,
    DontCare,
};

