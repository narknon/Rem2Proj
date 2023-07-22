#pragma once
#include "CoreMinimal.h"
#include "EReticuleDrawMode.generated.h"

UENUM(BlueprintType)
enum class EReticuleDrawMode : uint8 {
    RangedWeaponRequired,
    AimCameraRequired,
    AimCameraAndRangedWeaponRequired,
    Always,
};

