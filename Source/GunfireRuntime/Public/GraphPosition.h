#pragma once
#include "CoreMinimal.h"
#include "GraphPosition.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FGraphPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    FGraphPosition();
};
FORCEINLINE uint32 GetTypeHash(const FGraphPosition) { return 0; }

