#pragma once
#include "CoreMinimal.h"
#include "ESoftCollisionMode.generated.h"

UENUM(BlueprintType)
enum class ESoftCollisionMode : uint8 {
    Enabled,
    Disabled,
    Bully,
    Coward,
};

