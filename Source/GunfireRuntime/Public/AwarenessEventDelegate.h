#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAwarenessSignal.h"
#include "AwarenessEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAwarenessEvent, EAwarenessSignal, Type, AActor*, Source, const FVector&, Position, float, Radius);

