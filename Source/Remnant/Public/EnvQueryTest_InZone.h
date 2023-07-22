#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_InZone.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_InZone : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZonePadding;
    
    UEnvQueryTest_InZone();
};

