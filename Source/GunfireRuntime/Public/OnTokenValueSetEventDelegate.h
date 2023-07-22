#pragma once
#include "CoreMinimal.h"
#include "OnTokenValueSetEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTokenValueSetEvent, const FName&, NameID, const FText&, Value);

