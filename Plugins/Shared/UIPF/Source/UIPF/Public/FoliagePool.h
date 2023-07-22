#pragma once
#include "CoreMinimal.h"
#include "FoliagePool.generated.h"

class AUIPFActor;

USTRUCT(BlueprintType)
struct FFoliagePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUIPFActor*> PoolActors;
    
    UIPF_API FFoliagePool();
};

