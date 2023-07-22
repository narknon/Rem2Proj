#pragma once
#include "CoreMinimal.h"
#include "EncounterGroupNamedEventDelegate.generated.h"

class UEncounterGroupInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEncounterGroupNamedEvent, UEncounterGroupInstance*, EncounterGroup, FName, EventName);

