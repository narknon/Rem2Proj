#pragma once
#include "CoreMinimal.h"
#include "OnlineFriendDetails.h"
#include "OnOnlineFriendsListCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnlineFriendsListComplete, const TArray<FOnlineFriendDetails>&, OnlineFriendsList);

