#pragma once
#include "CoreMinimal.h"
#include "SpectateTargetChangedDelegateDelegate.generated.h"

class AActor;
class APlayerControllerGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpectateTargetChangedDelegate, AActor*, SpectateTarget, APlayerControllerGunfire*, Player);

