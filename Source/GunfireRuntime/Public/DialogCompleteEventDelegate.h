#pragma once
#include "CoreMinimal.h"
#include "DialogCompleteEventDelegate.generated.h"

class UDialogInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogCompleteEvent, UDialogInstance*, DialogInstance);

