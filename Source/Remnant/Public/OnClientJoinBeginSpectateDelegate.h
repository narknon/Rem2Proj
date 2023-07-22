#pragma once
#include "CoreMinimal.h"
#include "OnClientJoinBeginSpectateDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientJoinBeginSpectate, APlayerState*, Player);

