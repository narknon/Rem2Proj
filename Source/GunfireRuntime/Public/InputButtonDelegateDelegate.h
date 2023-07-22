#pragma once
#include "CoreMinimal.h"
#include "ButtonEvent.h"
#include "InputButtonDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FInputButtonDelegate, const FName&, ButtonName, ButtonEvent, Event);

