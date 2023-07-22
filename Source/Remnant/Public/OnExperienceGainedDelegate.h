#pragma once
#include "CoreMinimal.h"
#include "OnExperienceGainedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExperienceGained, float, Experience);

