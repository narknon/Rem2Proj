#pragma once
#include "CoreMinimal.h"
#include "OnSequenceSkipVoteChangedEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSequenceSkipVoteChangedEvent, UObject*, CinematicAsset, bool, ShouldSkip);

