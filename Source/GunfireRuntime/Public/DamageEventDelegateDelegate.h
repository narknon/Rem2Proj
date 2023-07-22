#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "DamageEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageEventDelegate, const FDamageInfo&, DamageInfo);

