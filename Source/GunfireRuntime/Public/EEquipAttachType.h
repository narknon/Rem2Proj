#pragma once
#include "CoreMinimal.h"
#include "EEquipAttachType.generated.h"

UENUM(BlueprintType)
enum class EEquipAttachType : uint8 {
    Active,
    Inactive,
    Stowed,
};

