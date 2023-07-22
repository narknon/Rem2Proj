#pragma once
#include "CoreMinimal.h"
#include "OnUnregisterPlayerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnregisterPlayer, const FString&, Nickname);

