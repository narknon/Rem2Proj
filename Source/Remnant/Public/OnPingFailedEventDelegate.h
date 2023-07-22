#pragma once
#include "CoreMinimal.h"
#include "EPingGenerationResult.h"
#include "OnPingFailedEventDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPingFailedEvent, AController*, Controller, EPingGenerationResult, Result);

