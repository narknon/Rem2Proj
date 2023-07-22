#pragma once
#include "CoreMinimal.h"
#include "OnCustomizationsChangedEventDelegate.generated.h"

class UActorCustomizationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomizationsChangedEvent, UActorCustomizationComponent*, Component);

