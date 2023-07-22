#pragma once
#include "CoreMinimal.h"
#include "OnDebugQuestLoadingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebugQuestLoading, bool, IsLoading);

