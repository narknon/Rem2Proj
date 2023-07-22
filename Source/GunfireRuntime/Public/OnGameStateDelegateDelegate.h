#pragma once
#include "CoreMinimal.h"
#include "OnGameStateDelegateDelegate.generated.h"

class AGameStateGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGameStateDelegate, AGameStateGunfire*, GameState);

