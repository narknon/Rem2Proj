#pragma once
#include "CoreMinimal.h"
#include "OnSecretChangeDelegateDelegate.generated.h"

class UExplorableMinimapComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSecretChangeDelegate, UExplorableMinimapComponent*, MinimapComponent, bool, NewIsSecret);

