#pragma once
#include "CoreMinimal.h"
#include "EBuildupMethod.generated.h"

UENUM(BlueprintType)
enum class EBuildupMethod : uint8 {
    Damage,
    DamageScaled,
    DamageCurve,
    Set,
    BuildupCurve,
    HealthPercentCurve,
};

