#pragma once
#include "CoreMinimal.h"
#include "EPersistenceLoadResult.h"
#include "BlueprintLoadSaveResultDelegateDelegate.generated.h"

class USaveGameWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBlueprintLoadSaveResultDelegate, EPersistenceLoadResult, Result, USaveGameWorld*, SaveGame, int32, Slot);

