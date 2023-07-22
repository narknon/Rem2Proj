#pragma once
#include "CoreMinimal.h"
#include "EIntensityState.generated.h"

UENUM(BlueprintType)
enum class EIntensityState : uint8 {
    BuildUp,
    Peak,
    Relax,
};

