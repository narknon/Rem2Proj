#pragma once
#include "CoreMinimal.h"
#include "CVarListValue.generated.h"

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FCVarListValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConsoleVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FCVarListValue();
};

