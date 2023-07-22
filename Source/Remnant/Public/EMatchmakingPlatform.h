#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingPlatform.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingPlatform : uint8 {
    Steam,
    Epic,
    XBox,
    Playstation,
};

