#pragma once
#include "CoreMinimal.h"
#include "EModActiveState.generated.h"

UENUM(BlueprintType)
enum class EModActiveState : uint8 {
    NotActive,
    ActiveAction,
    ActiveWeaponMode,
};

