#pragma once
#include "CoreMinimal.h"
#include "EPositionSource.generated.h"

UENUM(BlueprintType)
enum class EPositionSource : uint8 {
    Target,
    Property,
    Blackboard,
};

