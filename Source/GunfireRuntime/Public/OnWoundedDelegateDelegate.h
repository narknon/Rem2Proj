#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "OnWoundedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWoundedDelegate, const FDamageInfo&, Damage);

