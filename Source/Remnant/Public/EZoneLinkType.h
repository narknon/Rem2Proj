#pragma once
#include "CoreMinimal.h"
#include "EZoneLinkType.generated.h"

UENUM(BlueprintType)
enum class EZoneLinkType : uint8 {
    Link,
    Checkpoint,
    Waypoint,
};

