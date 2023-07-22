#pragma once
#include "CoreMinimal.h"
#include "EBoardUser.h"
#include "OnTurnStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTurnStateChanged, EBoardUser, User);

