#pragma once
#include "CoreMinimal.h"
#include "CharacterSpawnedEventDelegate.generated.h"

class ACharacterGunfire;
class ACharacterSpawnPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterSpawnedEvent, ACharacterSpawnPoint*, SpawnPoint, ACharacterGunfire*, Character);

