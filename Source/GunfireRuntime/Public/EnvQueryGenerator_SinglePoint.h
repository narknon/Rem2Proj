#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvQueryGenerator_SinglePoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEnvQueryGenerator_SinglePoint : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_SinglePoint();
};

