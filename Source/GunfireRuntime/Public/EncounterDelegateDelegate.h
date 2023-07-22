#pragma once
#include "CoreMinimal.h"
#include "EncounterDelegateDelegate.generated.h"

class UEncounterInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterDelegate, UEncounterInstance*, Encounter);

