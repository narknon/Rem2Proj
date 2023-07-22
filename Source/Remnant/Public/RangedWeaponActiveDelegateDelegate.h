#pragma once
#include "CoreMinimal.h"
#include "EModActiveState.h"
#include "RangedWeaponActiveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRangedWeaponActiveDelegate, EModActiveState, ActiveState);

