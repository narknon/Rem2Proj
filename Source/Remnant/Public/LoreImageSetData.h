#pragma once
#include "CoreMinimal.h"
#include "LoreImageSetData.generated.h"

class UImageSet;

USTRUCT(BlueprintType)
struct FLoreImageSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UImageSet* ImageSet;
    
    REMNANT_API FLoreImageSetData();
};

