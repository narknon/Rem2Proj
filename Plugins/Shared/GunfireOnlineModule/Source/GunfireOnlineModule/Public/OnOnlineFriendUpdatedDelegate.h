#pragma once
#include "CoreMinimal.h"
#include "OnOnlineFriendUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineFriendUpdated, const FString&, FriendId);

