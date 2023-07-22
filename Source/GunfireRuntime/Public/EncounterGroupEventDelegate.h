#pragma once
#include "CoreMinimal.h"
#include "EncounterGroupEventDelegate.generated.h"

class UEncounterGroupInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterGroupEvent, UEncounterGroupInstance*, EncounterGroup);

