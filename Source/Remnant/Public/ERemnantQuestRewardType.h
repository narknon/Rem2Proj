#pragma once
#include "CoreMinimal.h"
#include "ERemnantQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class ERemnantQuestRewardType : uint8 {
    Quest,
    Objective,
    Individual,
    SharedPickup,
};

