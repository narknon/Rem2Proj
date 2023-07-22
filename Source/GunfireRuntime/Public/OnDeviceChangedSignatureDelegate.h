#pragma once
#include "CoreMinimal.h"
#include "EInputDevice.h"
#include "OnDeviceChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeviceChangedSignature, int32, ControllerId, EInputDevice, CurrentInputDevice);

