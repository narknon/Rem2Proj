#pragma once
#include "CoreMinimal.h"
#include "OnHealthRegenDelegateDelegate.generated.h"

class ACharacterGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthRegenDelegate, ACharacterGunfire*, Character, float, Value);

