#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CachedTraitInfo.generated.h"

class UTrait;

USTRUCT(BlueprintType)
struct REMNANT_API FCachedTraitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> CachedTraitBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTrait> SoftTraitBP;
    
    FCachedTraitInfo();
};

