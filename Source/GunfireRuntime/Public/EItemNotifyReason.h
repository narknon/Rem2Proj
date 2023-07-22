#pragma once
#include "CoreMinimal.h"
#include "EItemNotifyReason.generated.h"

UENUM(BlueprintType)
enum class EItemNotifyReason : uint8 {
    Default,
    PickedUp,
    Crafted,
    Reward,
    AccountKeeping,
    Transfer,
    Custom1,
    Custom2,
    Custom3,
    Custom4,
};

