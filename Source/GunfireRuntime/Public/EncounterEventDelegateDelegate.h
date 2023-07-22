#pragma once
#include "CoreMinimal.h"
#include "EncounterEventDelegateDelegate.generated.h"

class UEncounterInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterEventDelegate, UEncounterInstance*, Encounter, FName, EventName);

