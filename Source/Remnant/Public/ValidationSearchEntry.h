#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ValidationSearchEntry.generated.h"

class AItem;
class UItemType;
class UTrait;

USTRUCT(BlueprintType)
struct REMNANT_API FValidationSearchEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> TraitClass;
    
    FValidationSearchEntry();
};
FORCEINLINE uint32 GetTypeHash(const FValidationSearchEntry) { return 0; }

