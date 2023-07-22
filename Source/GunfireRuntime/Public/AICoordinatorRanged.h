#pragma once
#include "CoreMinimal.h"
#include "AICoordinatorBase.h"
#include "AICoordinatorRanged.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAICoordinatorRanged : public UAICoordinatorBase {
    GENERATED_BODY()
public:
    UAICoordinatorRanged();
};

