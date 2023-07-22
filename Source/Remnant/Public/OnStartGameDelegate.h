#pragma once
#include "CoreMinimal.h"
#include "OnStartGameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartGame, bool, bIsResuming);

