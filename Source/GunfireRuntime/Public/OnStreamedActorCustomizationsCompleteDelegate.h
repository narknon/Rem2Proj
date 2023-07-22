#pragma once
#include "CoreMinimal.h"
#include "OnStreamedActorCustomizationsCompleteDelegate.generated.h"

class UActorCustomizationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStreamedActorCustomizationsComplete, UActorCustomizationComponent*, Component);

