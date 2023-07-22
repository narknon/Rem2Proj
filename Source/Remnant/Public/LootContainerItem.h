#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LootContainerItem.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FLootContainerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> ItemBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Quantity;
    
    REMNANT_API FLootContainerItem();
};

