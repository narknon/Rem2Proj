#pragma once
#include "CoreMinimal.h"
#include "TravelCountdownCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTravelCountdownCompleteDelegate, int32, ZoneID, FName, LinkAddress);

