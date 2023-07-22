#pragma once
#include "CoreMinimal.h"
#include "OnFallDamageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFallDamageDelegate, float, Damage);

