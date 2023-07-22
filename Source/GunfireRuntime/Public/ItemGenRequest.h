#pragma once
#include "CoreMinimal.h"
#include "ItemGenRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FItemGenRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Cause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    GUNFIRERUNTIME_API FItemGenRequest();
};

