#pragma once
#include "CoreMinimal.h"
#include "ESurfaceOrientTraceDirection.generated.h"

UENUM(BlueprintType)
enum class ESurfaceOrientTraceDirection : uint8 {
    ActorX,
    ActorY,
    ActorZ,
};

