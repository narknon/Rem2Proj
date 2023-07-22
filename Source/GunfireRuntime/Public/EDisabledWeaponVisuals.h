#pragma once
#include "CoreMinimal.h"
#include "EDisabledWeaponVisuals.generated.h"

UENUM(BlueprintType)
enum class EDisabledWeaponVisuals : uint8 {
    ShowDefaultReticule,
    ShowDefaultReticuleWithDisabledColor,
    ShowReticule,
    ShowReticuleWithDisabledColor,
    NoReticule,
};

