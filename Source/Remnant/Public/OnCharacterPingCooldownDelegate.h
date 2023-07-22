#pragma once
#include "CoreMinimal.h"
#include "OnCharacterPingCooldownDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterPingCooldown, AActor*, Character, bool, PingLocked);

