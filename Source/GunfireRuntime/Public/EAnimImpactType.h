#pragma once
#include "CoreMinimal.h"
#include "EAnimImpactType.generated.h"

UENUM(BlueprintType)
enum class EAnimImpactType : uint8 {
    Foot,
    FootSprint,
    FootScuff,
    Hand,
    HandSprint,
    Land,
    Body,
    Slam,
};

