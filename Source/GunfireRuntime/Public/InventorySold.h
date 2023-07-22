#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventorySold.generated.h"

class AItem;

USTRUCT(BlueprintType)
struct FInventorySold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> Item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Quantity;
    
    GUNFIRERUNTIME_API FInventorySold();
};

