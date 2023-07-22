#pragma once
#include "CoreMinimal.h"
#include "OnPendingPlayStateActiveDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPendingPlayStateActive, AController*, Controller, FName, StateName);

