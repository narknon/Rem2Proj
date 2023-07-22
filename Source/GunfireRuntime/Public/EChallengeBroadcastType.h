#pragma once
#include "CoreMinimal.h"
#include "EChallengeBroadcastType.generated.h"

UENUM(BlueprintType)
enum class EChallengeBroadcastType : uint8 {
    Everyone,
    Local,
    Specified,
};

