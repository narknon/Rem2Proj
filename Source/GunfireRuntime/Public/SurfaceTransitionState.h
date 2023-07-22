#pragma once
#include "CoreMinimal.h"
#include "ClimbingStateBase.h"
#include "SurfaceTransitionState.generated.h"

UCLASS(Blueprintable)
class GUNFIRERUNTIME_API USurfaceTransitionState : public UClimbingStateBase {
    GENERATED_BODY()
public:
    USurfaceTransitionState();
};

