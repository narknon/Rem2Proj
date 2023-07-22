#pragma once
#include "CoreMinimal.h"
#include "RelevantPlayerCachedData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FRelevantPlayerCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RelevantPlayer;
    
    FRelevantPlayerCachedData();
};

