#pragma once
#include "CoreMinimal.h"
#include "EAnchorFaceOtherMethod.generated.h"

UENUM(BlueprintType)
enum class EAnchorFaceOtherMethod : uint8 {
    Instant,
    InstantTeleportPhysics,
    UseConvergeTime,
};

