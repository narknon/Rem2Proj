#pragma once
#include "CoreMinimal.h"
#include "SummonerEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSummonerEvent, AActor*, Summon);

