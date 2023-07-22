#pragma once
#include "CoreMinimal.h"
#include "OnTraitsPreviewCompleteDelegateDelegate.generated.h"

class UTraitsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTraitsPreviewCompleteDelegate, UTraitsComponent*, Component, bool, bCanceled);

