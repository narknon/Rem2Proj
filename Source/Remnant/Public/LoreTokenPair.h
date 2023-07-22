#pragma once
#include "CoreMinimal.h"
#include "ELoreTextMode.h"
#include "LoreTokenPair.generated.h"

USTRUCT(BlueprintType)
struct FLoreTokenPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoreTextMode, FText> TokenPairs;
    
    REMNANT_API FLoreTokenPair();
};

