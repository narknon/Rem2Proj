#pragma once
#include "CoreMinimal.h"
#include "EPersistenceLoadResult.h"
#include "BlueprintLoadProfileSaveResultDelegateDelegate.generated.h"

class USaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlueprintLoadProfileSaveResultDelegate, EPersistenceLoadResult, Result, USaveGame*, ProfileSave);

