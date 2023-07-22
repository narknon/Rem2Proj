#pragma once
#include "CoreMinimal.h"
#include "AICoordinatorBase.h"
#include "AICoordinatorMelee.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GUNFIRERUNTIME_API UAICoordinatorMelee : public UAICoordinatorBase {
    GENERATED_BODY()
public:
    UAICoordinatorMelee();
};

