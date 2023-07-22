#pragma once
#include "CoreMinimal.h"
#include "InspectablePlayerEventDelegate.generated.h"

class UInspectableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInspectablePlayerEvent, UInspectableComponent*, Component, bool, bIsServerController);

