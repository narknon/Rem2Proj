#pragma once
#include "CoreMinimal.h"
#include "OnActionCompleteDelegateDelegate.generated.h"

class UActionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionCompleteDelegate, UActionBase*, Action);

