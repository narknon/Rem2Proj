#pragma once
#include "CoreMinimal.h"
#include "EAutoArcType.generated.h"

UENUM(BlueprintType)
enum class EAutoArcType : uint8 {
    None,
    ArcHeight,
    ArcSpeed,
};

