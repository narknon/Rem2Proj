#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "OnRootVisibilityUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRootVisibilityUpdate, ESlateVisibility, NewVisibility, ESlateVisibility, PreviousVisibility);

