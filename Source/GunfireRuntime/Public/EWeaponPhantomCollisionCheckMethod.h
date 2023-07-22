#pragma once
#include "CoreMinimal.h"
#include "EWeaponPhantomCollisionCheckMethod.generated.h"

UENUM(BlueprintType)
enum class EWeaponPhantomCollisionCheckMethod : uint8 {
    ClosestPoint,
    Trace,
    EndToEnd,
};

