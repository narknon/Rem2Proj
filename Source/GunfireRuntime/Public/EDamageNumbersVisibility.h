#pragma once
#include "CoreMinimal.h"
#include "EDamageNumbersVisibility.generated.h"

UENUM(BlueprintType)
enum class EDamageNumbersVisibility : uint8 {
    Hidden,
    Shown,
    IgnoresPower,
};

