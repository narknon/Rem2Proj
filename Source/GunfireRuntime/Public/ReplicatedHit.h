#pragma once
#include "CoreMinimal.h"
#include "ReplicatedTrace.h"
#include "ReplicatedHit.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FReplicatedHit : public FReplicatedTrace {
    GENERATED_BODY()
public:
    FReplicatedHit();
};

