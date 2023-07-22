#pragma once
#include "CoreMinimal.h"
#include "ESwimmingStateMethod.generated.h"

UENUM(BlueprintType)
enum class ESwimmingStateMethod : uint8 {
    CurrentState,
    Calculated,
};

