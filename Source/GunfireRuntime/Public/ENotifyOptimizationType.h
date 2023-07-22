#pragma once
#include "CoreMinimal.h"
#include "ENotifyOptimizationType.generated.h"

UENUM(BlueprintType)
enum class ENotifyOptimizationType : uint8 {
    None,
    Queued,
};

