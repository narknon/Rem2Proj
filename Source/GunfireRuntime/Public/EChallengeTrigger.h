#pragma once
#include "CoreMinimal.h"
#include "EChallengeTrigger.generated.h"

UENUM(BlueprintType)
enum class EChallengeTrigger : uint8 {
    Unlocked,
    Revealed,
    Updated,
    Complete,
    RankComplete,
};

