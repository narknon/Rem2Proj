#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "ItemQueryResult.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FItemQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    GUNFIRERUNTIME_API FItemQueryResult();
};

