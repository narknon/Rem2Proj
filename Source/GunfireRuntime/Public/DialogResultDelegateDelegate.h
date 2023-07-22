#pragma once
#include "CoreMinimal.h"
#include "DialogResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogResultDelegate, FName, Result);

