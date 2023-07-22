#pragma once
#include "CoreMinimal.h"
#include "EHitValidationType.generated.h"

UENUM(BlueprintType)
enum class EHitValidationType : uint8 {
    Standard,
    Piercing,
};

