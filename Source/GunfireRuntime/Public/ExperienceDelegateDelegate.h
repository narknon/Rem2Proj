#pragma once
#include "CoreMinimal.h"
#include "ExperienceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExperienceDelegate, int32, Experience);

