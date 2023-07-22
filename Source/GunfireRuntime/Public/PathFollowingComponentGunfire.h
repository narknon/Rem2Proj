#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "PathFollowingComponentGunfire.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UPathFollowingComponentGunfire : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UPathFollowingComponentGunfire();
};

