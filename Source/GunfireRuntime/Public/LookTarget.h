#pragma once
#include "CoreMinimal.h"
#include "LookTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLookTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    GUNFIRERUNTIME_API FLookTarget();
};

