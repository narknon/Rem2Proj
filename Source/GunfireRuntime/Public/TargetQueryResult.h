#pragma once
#include "CoreMinimal.h"
#include "TargetQueryResult.generated.h"

class UTargetableComponent;

USTRUCT(BlueprintType)
struct FTargetQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTargetableComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    GUNFIRERUNTIME_API FTargetQueryResult();
};

