#pragma once
#include "CoreMinimal.h"
#include "CinematicPlayerSettings.h"
#include "OnSequencePlayingEventDelegate.generated.h"

class AActor;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSequencePlayingEvent, FCinematicPlayerSettings, Settings, UObject*, CurrentCinematic, AActor*, Instigator);

