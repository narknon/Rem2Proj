#pragma once
#include "CoreMinimal.h"
#include "OnSpawnFinishedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnFinished, AActor*, Actor);

