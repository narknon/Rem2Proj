#pragma once
#include "CoreMinimal.h"
#include "RangedWeaponChargesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRangedWeaponChargesDelegate, uint8, Charges);

