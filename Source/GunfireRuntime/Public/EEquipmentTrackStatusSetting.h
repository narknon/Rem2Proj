#pragma once
#include "CoreMinimal.h"
#include "EEquipmentTrackStatusSetting.generated.h"

UENUM(BlueprintType)
enum class EEquipmentTrackStatusSetting : uint8 {
    NoChange,
    Equip,
    Unequip,
};

