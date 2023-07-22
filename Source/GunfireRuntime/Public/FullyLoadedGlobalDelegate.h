#pragma once
#include "CoreMinimal.h"
#include "FullyLoadedGlobalDelegate.generated.h"

class UMapGenComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFullyLoadedGlobal, UMapGenComponent*, Component);

