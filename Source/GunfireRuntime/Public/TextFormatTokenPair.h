#pragma once
#include "CoreMinimal.h"
#include "TextFormatTokenPair.generated.h"

USTRUCT(BlueprintType)
struct FTextFormatTokenPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FormatTokenKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormatTokenArg;
    
    GUNFIRERUNTIME_API FTextFormatTokenPair();
};

