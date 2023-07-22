#pragma once
#include "CoreMinimal.h"
#include "EProjectileBounceMode.generated.h"

UENUM(BlueprintType)
enum class EProjectileBounceMode : uint8 {
    DoFullSimulation,
    StopAfterValidHit,
    StopAfterHitTarget,
};

