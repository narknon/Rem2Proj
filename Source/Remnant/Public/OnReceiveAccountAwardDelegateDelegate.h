#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnReceiveAccountAwardDelegateDelegate.generated.h"

class ARemnantPlayerController;
class UAccountAward;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnReceiveAccountAwardDelegate, ARemnantPlayerController*, Player, TSubclassOf<UAccountAward>, Award);

