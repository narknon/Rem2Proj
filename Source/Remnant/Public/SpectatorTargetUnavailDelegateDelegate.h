#pragma once
#include "CoreMinimal.h"
#include "SpectatorTargetUnavailDelegateDelegate.generated.h"

class USpectatorTargetComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpectatorTargetUnavailDelegate, USpectatorTargetComponent*, SpectatorTarget);

