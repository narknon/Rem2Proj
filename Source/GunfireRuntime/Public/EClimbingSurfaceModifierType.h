#pragma once
#include "CoreMinimal.h"
#include "EClimbingSurfaceModifierType.generated.h"

UENUM(BlueprintType)
enum class EClimbingSurfaceModifierType : uint8 {
    NoSurfaces,
    AllowSurfaces,
};

