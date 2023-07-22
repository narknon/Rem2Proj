#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TracerPathSegment.generated.h"

class ATracer;

USTRUCT(BlueprintType)
struct FTracerPathSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATracer> TracerClass;
    
    GUNFIRERUNTIME_API FTracerPathSegment();
};

