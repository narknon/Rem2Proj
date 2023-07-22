#pragma once
#include "CoreMinimal.h"
#include "ReplicatedLocation.h"
#include "ReplicatedTrace.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FReplicatedTrace : public FReplicatedLocation {
    GENERATED_BODY()
public:
    FReplicatedTrace();
};

