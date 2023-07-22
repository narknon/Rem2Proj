#pragma once
#include "CoreMinimal.h"
#include "EEffectSpawnDirection.generated.h"

UENUM(BlueprintType)
enum class EEffectSpawnDirection : uint8 {
    ImpactNormal,
    PhantomDirection,
    NegativePhantomDirection,
    RandomDirection,
    SpecificDirection,
};

