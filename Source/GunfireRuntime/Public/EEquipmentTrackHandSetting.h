#pragma once
#include "CoreMinimal.h"
#include "EEquipmentTrackHandSetting.generated.h"

UENUM(BlueprintType)
enum class EEquipmentTrackHandSetting : uint8 {
    NoChange,
    SetInHand,
    SetNotInHand,
};

