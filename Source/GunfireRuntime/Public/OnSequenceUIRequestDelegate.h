#pragma once
#include "CoreMinimal.h"
#include "SequencerUIEventPayload.h"
#include "OnSequenceUIRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSequenceUIRequest, FSequencerUIEventPayload, UIRequest, bool, Show);

