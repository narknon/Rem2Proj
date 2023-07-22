#pragma once
#include "CoreMinimal.h"
#include "EventTreeAttrib.generated.h"

class UEventTreeAsset;

USTRUCT(BlueprintType)
struct GUNFIRERUNTIME_API FEventTreeAttrib {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventTreeAsset* Asset;
    
    FEventTreeAttrib();
};

