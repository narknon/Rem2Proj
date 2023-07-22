#pragma once
#include "CoreMinimal.h"
#include "ERemnantQuestRarity.generated.h"

UENUM(BlueprintType)
enum class ERemnantQuestRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
};

