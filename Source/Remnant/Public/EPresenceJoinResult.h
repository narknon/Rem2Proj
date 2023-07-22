#pragma once
#include "CoreMinimal.h"
#include "EPresenceJoinResult.generated.h"

UENUM(BlueprintType)
enum class EPresenceJoinResult : uint8 {
    Success,
    IntroIncomplete,
    NoCharacters,
    ConnectFailed,
};

