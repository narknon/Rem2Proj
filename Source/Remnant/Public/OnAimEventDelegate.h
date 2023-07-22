#pragma once
#include "CoreMinimal.h"
#include "OnAimEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAimEvent, AActor*, Character, bool, IsAiming);

