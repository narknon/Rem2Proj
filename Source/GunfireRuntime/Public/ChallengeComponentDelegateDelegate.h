#pragma once
#include "CoreMinimal.h"
#include "ChallengeComponentDelegateDelegate.generated.h"

class UChallengeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeComponentDelegate, UChallengeComponent*, ChallengeComponent);

