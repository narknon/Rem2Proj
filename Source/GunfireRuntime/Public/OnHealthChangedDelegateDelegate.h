#pragma once
#include "CoreMinimal.h"
#include "OnHealthChangedDelegateDelegate.generated.h"

class ACharacterGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChangedDelegate, ACharacterGunfire*, Character);

