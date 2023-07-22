#pragma once
#include "CoreMinimal.h"
#include "EAnimationVelocityMode.generated.h"

UENUM(BlueprintType)
enum class EAnimationVelocityMode : uint8 {
    Movement,
    Simulated,
    Override,
};

