#pragma once
#include "CoreMinimal.h"
#include "EncounterGroupSpawnEventDelegate.generated.h"

class AActor;
class UEncounterGroupInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterGroupSpawnEvent, UEncounterGroupInstance*, EncounterGroup, AActor*, Actor);

