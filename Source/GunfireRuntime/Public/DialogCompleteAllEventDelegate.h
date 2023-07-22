#pragma once
#include "CoreMinimal.h"
#include "DialogCompleteAllEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogCompleteAllEvent, UObject*, Owner);

