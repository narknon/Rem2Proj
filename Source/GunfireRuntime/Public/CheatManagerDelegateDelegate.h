#pragma once
#include "CoreMinimal.h"
#include "CheatInputAction.h"
#include "CheatManagerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheatManagerDelegate, FCheatInputAction, Cheat);

