#pragma once
#include "CoreMinimal.h"
#include "OnPossessedByDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPossessedBy, AController*, NewController);

