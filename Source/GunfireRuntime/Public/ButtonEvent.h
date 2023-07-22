#pragma once
#include "CoreMinimal.h"
#include "ButtonEvent.generated.h"

UENUM(BlueprintType)
enum class ButtonEvent : uint8 {
    None,
    Pressed,
    Released,
};

