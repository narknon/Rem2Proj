#pragma once
#include "CoreMinimal.h"
#include "EHitPauseMode.generated.h"

UENUM(BlueprintType)
enum class EHitPauseMode : uint8 {
    AnyDamage,
    DamagedCharactersOnly,
};

