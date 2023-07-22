#pragma once
#include "CoreMinimal.h"
#include "EMusicIntensity.generated.h"

UENUM(BlueprintType)
enum class EMusicIntensity : uint8 {
    Ambient,
    Tension,
    CombatLow,
    CombatMid,
    CombatHigh,
};

