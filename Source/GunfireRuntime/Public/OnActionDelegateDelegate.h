#pragma once
#include "CoreMinimal.h"
#include "OnActionDelegateDelegate.generated.h"

class UActionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionDelegate, UActionBase*, Action);

