#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnTraitLevelChangedDelegateDelegate.generated.h"

class UTrait;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTraitLevelChangedDelegate, TSubclassOf<UTrait>, Trait, int32, PreviousLevel);

