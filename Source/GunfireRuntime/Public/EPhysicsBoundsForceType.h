#pragma once
#include "CoreMinimal.h"
#include "EPhysicsBoundsForceType.generated.h"

UENUM(BlueprintType)
enum class EPhysicsBoundsForceType : uint8 {
    Push,
    Pull,
};

