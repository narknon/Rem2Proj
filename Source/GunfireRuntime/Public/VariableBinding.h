#pragma once
#include "CoreMinimal.h"
#include "VariableBinding.generated.h"

USTRUCT(BlueprintType)
struct FVariableBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    GUNFIRERUNTIME_API FVariableBinding();
};

