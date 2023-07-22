#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.generated.h"

UENUM(BlueprintType)
enum class ENotificationType : uint8 {
    NewTrait,
    UpgradedTrait,
    Level,
    Generic,
    Item,
    ItemUpgrade,
    NewArchetype,
    UpgradedArchetype,
    AccountAward,
};

