#pragma once
#include "CoreMinimal.h"
#include "EHitResult.generated.h"

UENUM(BlueprintType)
enum class EHitResult : uint8 {
    Hit,
    Evade,
    Block,
};

