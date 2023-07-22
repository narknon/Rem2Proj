#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnTraitDelegateDelegate.generated.h"

class UTrait;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTraitDelegate, TSubclassOf<UTrait>, Trait);

