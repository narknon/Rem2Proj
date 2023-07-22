#pragma once
#include "CoreMinimal.h"
#include "ESequenceOriginLocationOverride.generated.h"

UENUM(BlueprintType)
enum class ESequenceOriginLocationOverride : uint8 {
    DialogOwner,
    DialogInstigator,
    LocalPlayer,
    DialogVariableObject,
    NoOverride,
};

