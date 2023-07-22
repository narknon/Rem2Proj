#pragma once
#include "CoreMinimal.h"
#include "CinematicDelegateDelegate.generated.h"

class APlayerControllerGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCinematicDelegate, APlayerControllerGunfire*, Player, bool, bIsInCinematic);

