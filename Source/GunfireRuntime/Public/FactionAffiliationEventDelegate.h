#pragma once
#include "CoreMinimal.h"
#include "EAffiliation.h"
#include "Templates/SubclassOf.h"
#include "FactionAffiliationEventDelegate.generated.h"

class UFaction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionAffiliationEvent, TSubclassOf<UFaction>, Faction, EAffiliation, NewAffiliation);

