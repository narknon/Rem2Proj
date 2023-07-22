#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_VectorBase.h"
#include "EnvQueryItemType_AITacticalPoint.generated.h"

UCLASS(Blueprintable)
class UEnvQueryItemType_AITacticalPoint : public UEnvQueryItemType_VectorBase {
    GENERATED_BODY()
public:
    UEnvQueryItemType_AITacticalPoint();
};

