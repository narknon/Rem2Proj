#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnReceiveAccountAwardEventDelegate.generated.h"

class ARemnantPlayerController;
class UAccountAward;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceiveAccountAwardEvent, ARemnantPlayerController*, Player, TSubclassOf<UAccountAward>, Award);

