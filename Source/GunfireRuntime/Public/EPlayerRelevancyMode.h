#pragma once
#include "CoreMinimal.h"
#include "EPlayerRelevancyMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerRelevancyMode : uint8 {
    None,
    ForceEvaluate,
    AlwaysRelevantIfInAggroGroup,
    AlwaysRelevant,
};

