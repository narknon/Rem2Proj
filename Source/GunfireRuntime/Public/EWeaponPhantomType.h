#pragma once
#include "CoreMinimal.h"
#include "EWeaponPhantomType.generated.h"

UENUM(BlueprintType)
enum class EWeaponPhantomType : uint8 {
    Dynamic,
    Discrete,
};

