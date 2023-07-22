#pragma once
#include "CoreMinimal.h"
#include "EHitscanPierce.generated.h"

UENUM(BlueprintType)
enum class EHitscanPierce : uint8 {
    None,
    Damageable,
    Character,
};

