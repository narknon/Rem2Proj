#pragma once
#include "CoreMinimal.h"
#include "EPersistenceHasResult.h"
#include "BlueprintHasSaveResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintHasSaveResultDelegate, EPersistenceHasResult, Result);

