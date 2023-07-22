#pragma once
#include "CoreMinimal.h"
#include "ETargetSwitchType.generated.h"

UENUM(BlueprintType)
enum class ETargetSwitchType : uint8 {
    EventRegion,
    KnownThreats,
};

