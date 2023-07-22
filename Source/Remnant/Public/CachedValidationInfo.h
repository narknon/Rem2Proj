#pragma once
#include "CoreMinimal.h"
#include "CachedItemInfo.h"
#include "CachedProgressionInfo.h"
#include "CachedTraitInfo.h"
#include "Templates/SubclassOf.h"
#include "CachedValidationInfo.generated.h"

class AItem;
class UTrait;

USTRUCT(BlueprintType)
struct REMNANT_API FCachedValidationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AItem>, FCachedItemInfo> CachedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTrait>, FCachedTraitInfo> CachedTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedProgressionInfo CachedProgression;
    
    FCachedValidationInfo();
};

