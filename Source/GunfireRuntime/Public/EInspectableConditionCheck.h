#pragma once
#include "CoreMinimal.h"
#include "EInspectableConditionCheck.generated.h"

UENUM(BlueprintType)
enum class EInspectableConditionCheck : uint8 {
    IsOccupied,
    IsInTransition,
    IsInteractingActorLocal,
};

