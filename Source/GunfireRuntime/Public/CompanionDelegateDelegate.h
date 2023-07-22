#pragma once
#include "CoreMinimal.h"
#include "CompanionDelegateDelegate.generated.h"

class UCompanionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCompanionDelegate, UCompanionComponent*, Companion, bool, bAdded);

