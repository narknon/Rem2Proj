#pragma once
#include "CoreMinimal.h"
#include "OnFactionChangeDelegateDelegate.generated.h"

class ACharacterGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFactionChangeDelegate, ACharacterGunfire*, Character);

