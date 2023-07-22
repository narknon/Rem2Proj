#pragma once
#include "CoreMinimal.h"
#include "SimplePoolPrecache.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FSimplePoolPrecache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> SoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCache;
    
    FSimplePoolPrecache();
};

