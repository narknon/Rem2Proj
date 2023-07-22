#pragma once
#include "CoreMinimal.h"
#include "OnDeadDelegateDelegate.generated.h"

class AActor;
class ACharacterGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDeadDelegate, uint8, Reason, ACharacterGunfire*, Character, AActor*, Cause);

