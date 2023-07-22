#pragma once
#include "CoreMinimal.h"
#include "EInputConflictGroup.generated.h"

UENUM(BlueprintType)
enum class EInputConflictGroup : uint8 {
    Gameplay,
    UI,
};

