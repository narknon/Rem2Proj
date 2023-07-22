#pragma once
#include "CoreMinimal.h"
#include "DamageInfo.h"
#include "DamageEvadeEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageEvadeEventDelegate, const FDamageInfo&, DamageInfo, bool, FirstEvade);

