#pragma once
#include "CoreMinimal.h"
#include "EWeaponAffinityType.generated.h"

UENUM(BlueprintType)
enum class EWeaponAffinityType : uint8 {
    Bonus,
    Modifier,
};

