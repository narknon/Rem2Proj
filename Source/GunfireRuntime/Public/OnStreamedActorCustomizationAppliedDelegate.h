#pragma once
#include "CoreMinimal.h"
#include "OnStreamedActorCustomizationAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStreamedActorCustomizationApplied, FName, SlotID, FName, CustomizationID);

