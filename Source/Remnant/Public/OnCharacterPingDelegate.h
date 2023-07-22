#pragma once
#include "CoreMinimal.h"
#include "ActionPing.h"
#include "OnCharacterPingDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterPing, AActor*, Character, FActionPing, Ping);

