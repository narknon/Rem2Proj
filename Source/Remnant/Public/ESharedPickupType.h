#pragma once
#include "CoreMinimal.h"
#include "ESharedPickupType.generated.h"

UENUM(BlueprintType)
enum class ESharedPickupType : uint8 {
    NoSharedPickup,
    SharePickup,
    SharePickupAsCurrency,
    SharePickupAsCurrencySplit,
};

