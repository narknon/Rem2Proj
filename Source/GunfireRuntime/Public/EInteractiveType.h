#pragma once
#include "CoreMinimal.h"
#include "EInteractiveType.generated.h"

UENUM(BlueprintType)
enum class EInteractiveType : uint8 {
    Info,
    Action,
    Event,
};

