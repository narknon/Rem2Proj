#pragma once
#include "CoreMinimal.h"
#include "OnGivenLicensesEventDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGivenLicensesEvent, AController*, Controller);

