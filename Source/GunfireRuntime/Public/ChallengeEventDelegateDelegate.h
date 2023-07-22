#pragma once
#include "CoreMinimal.h"
#include "ChallengeEventDelegateDelegate.generated.h"

class UChallenge;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengeEventDelegate, const UChallenge*, Challenge);

