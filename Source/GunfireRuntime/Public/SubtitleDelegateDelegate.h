#pragma once
#include "CoreMinimal.h"
#include "SubtitleDelegateDelegate.generated.h"

class USubtitleInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubtitleDelegate, USubtitleInstance*, Subtitle);

