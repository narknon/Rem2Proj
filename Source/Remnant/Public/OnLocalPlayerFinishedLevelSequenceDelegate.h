#pragma once
#include "CoreMinimal.h"
#include "CinematicPlayerSettings.h"
#include "OnLocalPlayerFinishedLevelSequenceDelegate.generated.h"

class AActor;
class AController;
class ULevelSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLocalPlayerFinishedLevelSequence, AController*, Controller, FCinematicPlayerSettings, CinematicSettings, ULevelSequence*, CurrentSequence, AActor*, SequenceInstigator);

