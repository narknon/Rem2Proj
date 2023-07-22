#pragma once
#include "CoreMinimal.h"
#include "CinematicEventDelegate.generated.h"

class APlayerControllerGunfire;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCinematicEvent, APlayerControllerGunfire*, Player, bool, bIsInCinematic);

