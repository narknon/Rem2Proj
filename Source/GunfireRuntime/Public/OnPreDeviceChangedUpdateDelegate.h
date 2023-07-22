#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.h"
#include "OnPreDeviceChangedUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPreDeviceChangedUpdate, int32, ControllerId, EInputDevice, CurrentDevice, EInputDevice, NewDevice);

