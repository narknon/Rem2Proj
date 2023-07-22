#pragma once
#include "CoreMinimal.h"
#include "OnRegisterPlayerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRegisterPlayer, const FString&, Nickname);

