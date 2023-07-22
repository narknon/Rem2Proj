#pragma once
#include "CoreMinimal.h"
#include "HitReactionType.generated.h"

UENUM(BlueprintType)
enum class HitReactionType : uint8 {
    Flinch,
    Impact,
    HitLocationDestroyed,
    KnockBack,
    Death,
    DeathKnockBack,
    None,
};

