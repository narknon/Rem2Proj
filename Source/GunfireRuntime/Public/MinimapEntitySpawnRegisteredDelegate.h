#pragma once
#include "CoreMinimal.h"
#include "MinimapEntitySpawnRegisteredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinimapEntitySpawnRegistered, AActor*, Entity);

