#pragma once
#include "CoreMinimal.h"
#include "OnGameStateEventDelegate.generated.h"

class AGameStateGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStateEvent, AGameStateGunfire*, GameState);

