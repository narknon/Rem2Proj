#pragma once
#include "CoreMinimal.h"
#include "EncounterSpawnDelegateDelegate.generated.h"

class AActor;
class UEncounterInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterSpawnDelegate, UEncounterInstance*, Encounter, AActor*, Actor);

