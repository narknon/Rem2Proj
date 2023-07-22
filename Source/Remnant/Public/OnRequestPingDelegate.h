#pragma once
#include "CoreMinimal.h"
#include "ActionPing.h"
#include "OnRequestPingDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestPing, AActor*, Character, FActionPing, Ping);

