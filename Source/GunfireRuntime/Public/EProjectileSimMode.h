#pragma once
#include "CoreMinimal.h"
#include "EProjectileSimMode.generated.h"

UENUM(BlueprintType)
enum class EProjectileSimMode : uint8 {
    HitsOnly,
    HitsAndOverlaps,
    HitsAndOverlapsForcePawn,
};

