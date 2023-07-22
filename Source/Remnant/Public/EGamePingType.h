#pragma once
#include "CoreMinimal.h"
#include "EGamePingType.generated.h"

UENUM(BlueprintType)
enum class EGamePingType : uint8 {
    Location,
    Item,
    PrimaryAmmo,
    SecondaryAmmo,
    Quest,
    Friendly,
    Enemy,
    Checkpoint,
};

