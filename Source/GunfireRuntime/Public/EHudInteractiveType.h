#pragma once
#include "CoreMinimal.h"
#include "EHudInteractiveType.generated.h"

UENUM(BlueprintType)
enum class EHudInteractiveType : uint8 {
    None,
    InteractiveState,
    InteractiveMashState,
    Item,
    Revive,
    Climb,
};

