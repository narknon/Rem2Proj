#pragma once
#include "CoreMinimal.h"
#include "EDeadReason.generated.h"

UENUM(BlueprintType)
enum class EDeadReason : uint8 {
    Damage,
    Fall,
    GameSpecific1,
};

