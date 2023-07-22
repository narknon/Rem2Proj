#pragma once
#include "CoreMinimal.h"
#include "SpawnPointEnabledEventDelegate.generated.h"

class ACharacterSpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointEnabledEvent, ACharacterSpawnPoint*, SpawnPoint, bool, IsEnabled);

