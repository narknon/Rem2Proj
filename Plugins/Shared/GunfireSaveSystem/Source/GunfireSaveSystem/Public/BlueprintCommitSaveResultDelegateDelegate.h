#pragma once
#include "CoreMinimal.h"
#include "EPersistenceSaveResult.h"
#include "BlueprintCommitSaveResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintCommitSaveResultDelegate, EPersistenceSaveResult, Result);

