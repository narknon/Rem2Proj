#pragma once
#include "CoreMinimal.h"
#include "OnCameraStateChangedDelegateDelegate.generated.h"

class UCameraState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraStateChangedDelegate, UCameraState*, CurrentCamera, UCameraState*, PreviousCamera);

