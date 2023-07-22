#pragma once
#include "CoreMinimal.h"
#include "ECursorOverrideState.generated.h"

UENUM(BlueprintType)
enum class ECursorOverrideState : uint8 {
    None,
    Active,
    Inactive,
};

