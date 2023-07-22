#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateDelegateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateDelegate, APlayerState*, Player);

