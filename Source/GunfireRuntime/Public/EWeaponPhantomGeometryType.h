#pragma once
#include "CoreMinimal.h"
#include "EWeaponPhantomGeometryType.generated.h"

UENUM(BlueprintType)
enum class EWeaponPhantomGeometryType : uint8 {
    Optional,
    Required,
    Exclude,
};

